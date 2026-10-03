// FUNCTION: BF2 0x464e10
namespace dice { namespace hfe { namespace {

struct RadioMessageData {
    unsigned char m_pad0[0x28];
    unsigned char m_flags;
};

class RadioMessageEW {
    void* m_vtable;                 // offset 0x00
    RadioMessageData* m_message;    // offset 0x08
public:
    unsigned char getFlags() const;
};

unsigned char RadioMessageEW::getFlags() const {
    return m_message->m_flags;
}

} } }
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_RadioMessageEW_getFlags (0x464e30)