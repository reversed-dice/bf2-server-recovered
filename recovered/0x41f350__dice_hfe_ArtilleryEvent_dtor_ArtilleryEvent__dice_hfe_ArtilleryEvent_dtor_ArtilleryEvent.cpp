// FUNCTION: BF2 0x41f350
namespace dice { namespace hfe {

class ArtilleryEvent {
public:
    unsigned char m_unk_0x3;
    unsigned int m_unk_0x10;
    unsigned int m_unk_0x14;
    unsigned char m_unk_0x18;
    unsigned int m_unk_0x1C;
    int m_unk_0x20;
    unsigned short m_unk_0x24;

    ~ArtilleryEvent();
};

} }

namespace dice { namespace hfe {

void GameEvent_dtor(void** self);

} }

namespace dice { namespace hfe {

ArtilleryEvent::~ArtilleryEvent() {
    *reinterpret_cast<void**>(this) = reinterpret_cast<void*>(0xb2b2b0);
    GameEvent_dtor(reinterpret_cast<void**>(this));
    ::operator delete(this);
}

} }
// REVERSED_FUNCTION: dice_hfe_ArtilleryEvent_dtor_ArtilleryEvent (0x41f350)