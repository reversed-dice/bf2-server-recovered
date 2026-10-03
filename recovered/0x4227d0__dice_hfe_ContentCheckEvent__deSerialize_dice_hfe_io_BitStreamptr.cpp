// FUNCTION: BF2 0x4227d0
namespace dice { namespace hfe { namespace io {
class BitStream {
public:
    void readBits(void*, unsigned int);
};
}}}
namespace dice { namespace hfe {
class ContentCheckEvent {
public:
    bool deSerialize(io::BitStream* stream);
};
bool ContentCheckEvent::deSerialize(io::BitStream* stream) {
    stream->readBits((void*)((char*)this + 0x10), 0x80);
    stream->readBits((void*)((char*)this + 0x20), 0x80);
    stream->readBits((void*)((char*)this + 0x30), 0x80);
    if (*(unsigned char*)((char*)stream + 0x20) == 0) {
        return true;
    }
    *(unsigned int*)((char*)stream + 0x24) = 0;
    *(unsigned char*)((char*)stream + 0x20) = 0;
    return false;
}
} }
// REVERSED_FUNCTION: dice_hfe_ContentCheckEvent::deSerialize_dice_hfe_io_BitStreamptr (0x4227d0)