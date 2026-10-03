// FUNCTION: BF2 0x7684f0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x10];
    void* m_p;
    void* get() { return *(void**)((char*)m_p + 0x8); }
};
void* f_16(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIConnection_getAI (0x7684f0)
