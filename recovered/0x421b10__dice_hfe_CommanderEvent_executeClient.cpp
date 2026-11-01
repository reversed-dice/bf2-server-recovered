// FUNCTION: BF2 0x421b10
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

class SquadManager {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26();
    virtual void slot0xd8(unsigned char a, short b); // slot 27 (+0xd8)
};

extern SquadManager* squadManager;

class GameEvent {
public:
    GameEvent();
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

class CommanderEvent : public GameEvent {
public:
    virtual bool executeClient();

    int m_type;         // +0x10
    unsigned char m_14; // +0x14
    char _pad15;
    short m_16;         // +0x16
};

bool CommanderEvent::executeClient()
{
    int type = m_type;

    switch (type) {
    case 0:
    case 1:
    case 2:
    case 4:
        break;
    case 3:
        if (squadManager != 0)
            squadManager->slot0xd8(m_14, m_16);
        break;
    case 6:
        Debug(DebugType_Error, std::string("Game/GameEvents/CommanderEvent.cpp"),
              0x6a, std::string(&DAT_00bb25f1))
            << "CESoldierView should not be executed on client";
        break;
    case 7:
        Debug(DebugType_Error, std::string("Game/GameEvents/CommanderEvent.cpp"),
              0x6f, std::string(&DAT_00bb25f1))
            << "CEOverheadView should not be executed on client";
        break;
    default:
        Debug(DebugType_Error, std::string("Game/GameEvents/CommanderEvent.cpp"),
              0x74, std::string(&DAT_00bb25f1))
            << type << " is an unknown type.";
        break;
    }
    return true;
}

} // namespace hfe
} // namespace dice
