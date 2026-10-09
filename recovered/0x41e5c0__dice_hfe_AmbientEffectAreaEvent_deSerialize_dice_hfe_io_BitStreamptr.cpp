// FUNCTION: BF2 0x41e5c0
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <iostream>

namespace dice {
namespace hfe {

struct Vec3 {
    float x, y, z;
};

enum DebugType {
    DebugType_7 = 7
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

namespace io {

class BitStream {
public:
    char _pad[0x20];
    unsigned char m_overflow; // +0x20
    char _pad2[3];
    unsigned int m_bitsRead;  // +0x24

    void readBits(void* dst, unsigned int n);
};

} // namespace io

namespace world {

class IObject;

class AmbientEffectAreaManager {
public:
    static AmbientEffectAreaManager* m_instance;
    IObject* getAreaFromId(int id);
};

} // namespace world

class GameEvent {
public:
    GameEvent();
    virtual ~GameEvent();
    char _pad[0x8];
};

class AmbientEffectAreaEvent : public GameEvent {
public:
    virtual ~AmbientEffectAreaEvent();
    virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
    virtual void v9(); virtual void v10();
    virtual bool deSerialize(io::BitStream* stream);

    Vec3 m_pos;                    // +0x10
    int m_field1c;                 // +0x1c
    unsigned char m_field20;       // +0x20
    unsigned short m_field22;      // +0x22
    char _pad24[4];                // +0x24
    world::IObject* m_obj;         // +0x28
};

bool AmbientEffectAreaEvent::deSerialize(io::BitStream* stream)
{
    unsigned int v = 0;
    stream->readBits(&v, 16);
    m_field1c = v;
    v = 0;
    stream->readBits(&v, 8);
    m_field20 = v;
    v = 0;
    stream->readBits(&v, 16);
    m_field22 = v;

    if (!world::AmbientEffectAreaManager::m_instance) {
        Debug(DebugType(7), "Game/GameEvents/AmbientEffectAreaEvent.cpp", 68, "") << "Ambienteffectareamanager not found.";
    } else {
        m_obj = world::AmbientEffectAreaManager::m_instance->getAreaFromId(m_field1c);
    }

    stream->readBits(&m_pos.x, 32);
    stream->readBits(&m_pos.y, 32);
    stream->readBits(&m_pos.z, 32);

    if (stream->m_overflow != 0) {
        stream->m_bitsRead = 0;
        stream->m_overflow = 0;
        return false;
    }
    return true;
}

} // namespace hfe
} // namespace dice
