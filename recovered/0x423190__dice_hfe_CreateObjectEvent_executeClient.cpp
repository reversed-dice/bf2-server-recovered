// FUNCTION: BF2 0x423190
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <iostream>

namespace dice {
namespace hfe {

enum DebugType {
    DebugType_Error = 6
};

class Debug {
    char _pad[0x20];
    char _stream[0x160];
public:
    Debug(DebugType type, std::string const& file, int line, std::string const& func = "");
    ~Debug();
    template <typename T>
    std::ostream& operator<<(T const& val) {
        return *(std::ostream*)(_stream) << val;
    }
};

extern char DAT_00bb25f1;

struct Vec3 {
    float x, y, z;
    Vec3(float a = 0.0f, float b = 0.0f, float c = 0.0f) : x(a), y(b), z(c) {}
};

class IGame {
public:
    virtual void v0(); virtual void v1(); virtual void v2();
    virtual void* queryInterface(unsigned int id); // slot 3 (+0x18)
};

extern IGame* game;
extern const unsigned int IID_IGameClient;

class IGameClient {
public:
    virtual void v0(); virtual void v1(); virtual void v2();
    virtual void* queryInterface(unsigned int id); // slot 3 (+0x18)
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8();
    virtual bool slot0x48(unsigned int a, unsigned short b, Vec3 const& pos, Vec3 const& rot); // slot 9 (+0x48)
};

namespace io {

class Networkable {
public:
    virtual void v0(); virtual void v1(); virtual void v2();
    virtual void* queryInterface(unsigned int id); // slot 3 (+0x18)
    char _pad20[0x48];
    Networkable* m_next;   // +0x50
};

class NetworkManager {
public:
    Networkable* getObject(unsigned short id);
};

extern NetworkManager* networkManager;

} // namespace io

namespace world {

class IPlayerControlObject {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void slot0x120(int a); // slot 36 (+0x120)
};

extern const unsigned int IID_IPlayerControlObject;

} // namespace world

class GameEvent {
public:
    virtual void addRef();
    virtual int getRef() const;
    virtual void release();
    virtual void* queryInterface(unsigned int) const;
    virtual ~GameEvent();
    virtual unsigned int getType() const;
    virtual void logInfo(bool, int);
    virtual void eventReceivedByRemote(void*);
    virtual bool executeClient();
    virtual bool executeServer(int);
    virtual void deSerialize(void*);
    virtual void serialize(void*);
protected:
    int m_refCount;
    int m_field;
};

class CreateObjectEvent : public GameEvent {
public:
    virtual bool executeClient();

    unsigned int m_a;      // +0x10
    unsigned short m_b;    // +0x14
    Vec3 m_pos;            // +0x18
    Vec3 m_rot;            // +0x24
    int m_d;               // +0x30
    unsigned int m_c;      // +0x34
};

bool CreateObjectEvent::executeClient()
{
    IGameClient* client = (IGameClient*)game->queryInterface(IID_IGameClient);
    if (client == 0) {
        return false;
    }

    if (m_c > 1) {
        for (unsigned int i = 0; i < m_c; ++i) {
            if (!client->slot0x48(m_a, (unsigned short)(m_b + i), Vec3(), Vec3())) {
                Debug(DebugType_Error, std::string("Game/GameEvents/CreateObjectEvent.cpp"), 0x97,
                      std::string(&DAT_00bb25f1))
                    << "Failed to create requested multispawnedobject templ id" << (unsigned long)m_a
                    << " obj id" << (unsigned long)m_b << " index " << (unsigned long)i;
            }
        }
    }
    else {
        if (!client->slot0x48(m_a, m_b, m_pos, m_rot)) {
            Debug(DebugType_Error, std::string("Game/GameEvents/CreateObjectEvent.cpp"), 0x9f,
                  std::string(&DAT_00bb25f1))
                << "Failed to create requested object templ id" << (unsigned long)m_a
                << " obj id " << (unsigned long)m_b;
        }
    }

    io::Networkable* node = io::networkManager->getObject(m_b);
    while (node != 0) {
        world::IPlayerControlObject* pco =
            (world::IPlayerControlObject*)node->queryInterface(world::IID_IPlayerControlObject);
        if (pco != 0) {
            pco->slot0x120(m_d);
            return true;
        }
        node = node->m_next;
    }
    return true;
}

} // namespace hfe
} // namespace dice
