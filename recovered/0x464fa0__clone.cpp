// FUNCTION: BF2 0x464fa0
namespace dice { namespace hfe { namespace {

class RadioMessageEW {
public:
    unsigned int getChannel() const;

private:
    void* m_vtable;         // offset 0x00
    void* m_pMessageData;   // offset 0x08 — pointer to radio message data block
};

unsigned int RadioMessageEW::getChannel() const {
    return *(unsigned int*)((char*)m_pMessageData + 0x34);
}
} } }
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_RadioMessageEW_getChannel (0x464e20)