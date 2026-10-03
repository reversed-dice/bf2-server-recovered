// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x4a6300
extern "C" float ceilf(float);
extern "C" float fabsf(float);

struct _typeobject;
struct _object {
    int ob_refcnt;
    _typeobject* ob_type;
};
struct _typeobject {
    char m_pad0[0x28];
    void (*tp_dealloc)(_object*);
};

namespace dice { namespace hfe {

enum ScriptEvent { SE_TICKET_LIMIT = 0x1a };

namespace python {

class PyRef {
public:
    ~PyRef() {
        if (m_obj && --m_obj->ob_refcnt == 0)
            m_obj->ob_type->tp_dealloc(m_obj);
    }
    _object* get() const { return m_obj; }
    _object* m_obj;
};

template <class A, class B> PyRef buildArgs(const A& a, const B& b);

class PythonHost {
public:
    void handleEvent(ScriptEvent ev, _object* args);
};

}

python::PythonHost* pythonHost();

namespace world {

class TeamScore {
public:
    void subTicket(int n);
    char m_pad0[0x84];
    int m_tickets;
};

class ScoreManager {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual TeamScore* getTeamScore(unsigned int team);
};

extern ScoreManager* scoreManager;

}

class ServerGameLogic {
public:
    void uPlayingTicketSystem(float dt);
    int getTicketLimitReachedId(unsigned int team, int tickets);
private:
    char m_pad0[0x4b8];
    float m_ticketAccum[2];
    float m_ticketChangePerSecond[2];
    char m_pad1[0x548 - 0x4b8 - 16];
    int m_lastTickets[2];
};

void ServerGameLogic::uPlayingTicketSystem(float dt) {
    for (int i = 0; i < 2; i++) {
        if (fabsf(m_ticketChangePerSecond[i]) > 0.0f) {
            float acc = m_ticketAccum[i] + m_ticketChangePerSecond[i] * dt;
            if (-acc > (float)world::scoreManager->getTeamScore(i + 1)->m_tickets)
                acc = (float)-world::scoreManager->getTeamScore(i + 1)->m_tickets;
            int whole = (int)ceilf(acc);
            if (whole < 0)
                world::scoreManager->getTeamScore(i + 1)->subTicket(-whole);
            m_ticketAccum[i] = acc - (float)whole;
        }
        int tickets = world::scoreManager->getTeamScore(i + 1)->m_tickets;
        if (tickets != m_lastTickets[i]) {
            int limitId = getTicketLimitReachedId(i, tickets);
            if (limitId != 0) {
                python::PyRef args = python::buildArgs(i + 1, limitId);
                pythonHost()->handleEvent(SE_TICKET_LIMIT, args.get());
            }
        }
        m_lastTickets[i] = tickets;
    }
}

} }
