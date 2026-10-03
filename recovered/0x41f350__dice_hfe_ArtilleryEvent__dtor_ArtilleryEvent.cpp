// FUNCTION: BF2 0x41f350
namespace dice { namespace hfe {

class GameEvent {
public:
    unsigned int m_unk_0x1;
    int m_unk_0x8;
    unsigned int m_unk_0xC;
    
    virtual ~GameEvent();
};

class ArtilleryEvent : public GameEvent {
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

ArtilleryEvent::~ArtilleryEvent() {
}

} }
class dice_hfe_ArtilleryEvent {
public:
    // REVERSED_FUNCTION: dtor_ArtilleryEvent(0x41f350);
};

// REVERSED_FUNCTION: dice_hfe_ArtilleryEvent::dtor_ArtilleryEvent (0x41f350)