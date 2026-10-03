// FUNCTION: BF2 0x5b9ce0
namespace dice { namespace hfe { namespace world {
extern bool fn_5b95e0(void* a);
struct RFM { unsigned char _pad[0x21]; char m_20; };
void setFailMessageEnabled_0x5b9ca0(RFM* self, bool arg2) {
    if (fn_5b95e0(self))
        self->m_20 = arg2;
}
} } }
