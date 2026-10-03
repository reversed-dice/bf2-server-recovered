// FUNCTION: BF2 0x5b9ca0
namespace dice { namespace hfe { namespace world {
extern bool fn_5b95e0(void* a);
struct RUM2 { unsigned char _pad[0x20]; char m_21; };
void setUseMessageEnabled_0x5b9ce0(RUM2* self, bool arg2) {
    if (fn_5b95e0(self))
        self->m_21 = arg2;
}
} } }
