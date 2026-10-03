// FUNCTION: BF2 0x433610
namespace dice { namespace hfe {

class BitStream {
public:
    char _pad[0x20];
    unsigned char m_overflow;
    char _pad2[3];
    unsigned int m_bitsRead;
};

class ToggleFreeCameraEvent {
public:
    bool executeClient();
    bool deSerialize(BitStream* stream);
};

bool ToggleFreeCameraEvent::deSerialize(BitStream* stream) {
    if (stream->m_overflow != 0) {
        stream->m_bitsRead = 0;
        stream->m_overflow = 0;
        return false;
    }
    return true;
}

} }
// REVERSED_FUNCTION: dice_hfe_ToggleFreeCameraEvent_deSerialize_dice_hfe_io_BitStreamptr (0x433610)