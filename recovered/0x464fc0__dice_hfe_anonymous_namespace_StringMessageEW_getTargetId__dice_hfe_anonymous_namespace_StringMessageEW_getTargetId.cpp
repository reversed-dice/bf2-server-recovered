// FUNCTION: BF2 0x464fc0
namespace dice { namespace hfe { namespace {

class StringMessageEW {
public:
    unsigned int getTargetId() const;

private:
    /* 0x00 */ void* vtable;
    /* 0x08 */ void* m_data;
};

unsigned int StringMessageEW::getTargetId() const {
    return *(unsigned int*)((char*)m_data + 0x2c);
}

} } }
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_StringMessageEW_getTargetId (0x464fc0)