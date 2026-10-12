// FUNCTION: BF2 0x7d62a0
namespace dice { namespace hfe { namespace io {

class Mutex {
public:
    void lock();
    void unlock();
};

class Agent {
public:
    virtual void f0();
    virtual void f1();
    virtual bool accept(const unsigned char* buf, unsigned int len);
};

class AgentPtr {
public:
    Agent* m_p;
};

class PacketFilter {
public:
    AgentPtr** m_holder;  // +0x0
    char _pad0[0x10];
    Mutex m_mutex;  // +0x18

    bool processPacket(const unsigned char* buf, unsigned int len);
};

bool PacketFilter::processPacket(const unsigned char* buf, unsigned int len)
{
    bool res = true;
    m_mutex.lock();
    AgentPtr* hp = *m_holder;
    if (hp != 0 && hp->m_p->accept(buf, len))
        res = false;
    m_mutex.unlock();
    return res;
}

} } }
