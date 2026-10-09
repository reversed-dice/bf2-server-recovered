// FUNCTION: BF2 0x41ed40
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <iostream>

namespace dice {
namespace hfe {

struct Vec2 {
    float x, y;
    Vec2() {}
    Vec2(float x_, float y_) : x(x_), y(y_) {}
};

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

class SquadManager {
public:
    virtual void v0();
    virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
    virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12();
    virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16();
    virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20();
    virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27();
    virtual int getLeader(unsigned char squadId); // slot 0xe0 / 8 = 28
};

extern SquadManager* squadManager;

namespace world {

class ArtilleryHandler {
public:
    virtual void v0();
    bool setTarget(Vec2& target);
    void failedFire();
    void requestFire();
};

class ArtilleryManager {
public:
    static ArtilleryManager* m_instance;
    ArtilleryHandler* m_handlers[8];
};

} // namespace world

class GameEvent {
public:
    virtual ~GameEvent();
    virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
    virtual bool executeClient();
    virtual bool executeServer(int playerId);

    char _pad[0x8];
};

class ArtilleryEvent : public GameEvent {
public:
    float m_targetX; // +0x10
    float m_targetY; // +0x14
    unsigned char m_teamId; // +0x18
    char _pad19[3];
    int m_val1c; // +0x1c
    int m_action; // +0x20
    unsigned short m_objectId; // +0x24

    virtual bool executeServer(int playerId);
};

bool ArtilleryEvent::executeServer(int playerId)
{
    if (m_action == 1) {
        if (squadManager) {
            if (squadManager->getLeader(m_teamId) == (playerId & 0xff)) {
                if (world::ArtilleryManager::m_instance) {
                    world::ArtilleryHandler* handler = world::ArtilleryManager::m_instance->m_handlers[m_teamId - 1];
                    if (handler) {
                        Vec2 target(m_targetX, m_targetY);
                        if (!handler->setTarget(target)) {
                            handler->failedFire();
                            return true;
                        }
                        handler->requestFire();
                        return true;
                    }
                }
            }
        }
        return true;
    }

    Debug(DebugType(6), "Game/GameEvents/ArtilleryEvent.cpp", 140, "") << "Should never be sent to server";
    return false;
}

} // namespace hfe
} // namespace dice
