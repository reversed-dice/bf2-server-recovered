// FUNCTION: BF2 0x464fb0
namespace dice { namespace hfe { namespace {

struct StringMessageFlags {
    unsigned char _pad0[0x30];
    unsigned int m_flags;
};

class StringMessageEW {
public:
    unsigned int getFlags() const;
private:
    /* +0x00 */ void* vtable;
    /* +0x08 */ StringMessageFlags* m_flagsPtr;
};

unsigned int StringMessageEW::getFlags() const {
    return m_flagsPtr->m_flags;
}

} } } // namespace dice::hfe::anon
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_StringMessageEW_getFlags (0x464fb0)