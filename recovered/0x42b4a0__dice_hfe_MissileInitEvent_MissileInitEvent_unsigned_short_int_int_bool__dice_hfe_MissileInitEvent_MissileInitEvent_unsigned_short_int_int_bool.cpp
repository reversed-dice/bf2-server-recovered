// FUNCTION: BF2 0x42b4a0
namespace dice { namespace hfe {

class GameEvent {
public:
    GameEvent();
};

class MissileInitEvent : public GameEvent {
public:
    MissileInitEvent(unsigned short, int, int, bool);
};

MissileInitEvent::MissileInitEvent(unsigned short a, int b, int c, bool d)
    : GameEvent()
{
    *reinterpret_cast<unsigned short*>(reinterpret_cast<char*>(this) + 0x10) = a;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<char*>(this) + 0x12) = static_cast<unsigned char>(b);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<char*>(this) + 0x13) = static_cast<unsigned char>(c);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<char*>(this) + 0x14) = static_cast<unsigned char>(d);
    *reinterpret_cast<void**>(this) = reinterpret_cast<void*>(0xb2d470);
}

} }
// REVERSED_FUNCTION: dice_hfe_MissileInitEvent_MissileInitEvent_unsigned_short_int_int_bool (0x42b4a0)