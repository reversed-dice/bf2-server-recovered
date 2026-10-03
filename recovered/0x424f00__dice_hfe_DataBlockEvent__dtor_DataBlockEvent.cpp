// FUNCTION: BF2 0x424f00
namespace dice { namespace hfe {
class DataBlockEvent {
public:
    virtual ~DataBlockEvent();
    unsigned char m_unk_0x2;
    unsigned int m_unk_0x3;
    char m_unk_0x10;
    unsigned int m_unk_0x14;
    unsigned int m_unk_0x18;
    char m_unk_0x1C;
};
DataBlockEvent::~DataBlockEvent() {}
} }

class dice_hfe_DataBlockEvent {
public:
    // REVERSED_FUNCTION: dtor_DataBlockEvent(0x424f00);
};

// REVERSED_FUNCTION: dice_hfe_DataBlockEvent::dtor_DataBlockEvent (0x424f00)