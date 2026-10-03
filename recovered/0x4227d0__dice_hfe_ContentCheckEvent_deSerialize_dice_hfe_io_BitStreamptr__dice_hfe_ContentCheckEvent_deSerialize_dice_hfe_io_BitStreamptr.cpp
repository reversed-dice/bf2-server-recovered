// FUNCTION: BF2 0x4227d0
namespace dice { namespace hfe { namespace io {

class BitStream {
public:
    void readBits(char*, unsigned int);
    char _unk[0x20];
    char m_unk_0x20;
    int m_unk_0x24;
};

} } }

namespace dice { namespace hfe {

class ContentCheckEvent {
public:
    bool deSerialize(io::BitStream* stream);
};

bool ContentCheckEvent::deSerialize(io::BitStream* stream) {
    stream->readBits(reinterpret_cast<char*>(this) + 0x10, 0x80u);
    stream->readBits(reinterpret_cast<char*>(this) + 0x20, 0x80u);
    stream->readBits(reinterpret_cast<char*>(this) + 0x30, 0x80u);
    if (stream->m_unk_0x20 == 0)
        return true;
    stream->m_unk_0x24 = 0;
    stream->m_unk_0x20 = 0;
    return false;
}

} }
// REVERSED_FUNCTION: dice_hfe_ContentCheckEvent_deSerialize_dice_hfe_io_BitStreamptr (0x4227d0)