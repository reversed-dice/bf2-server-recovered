// FUNCTION: BF2 0x603a60
namespace dice { namespace hfe { namespace world {
extern bool fn_55f2f0(void* a);
extern void fn_55f9b0(void* a, int b, int c);
struct DTO { unsigned char _pad[0x48]; void* m_48; };
void disableTargetObject_0x603a60(DTO* self) {
    void* p = self->m_48;
    if (p) {
        void* q = *(void**)((char*)p + 8);
        if (q) {
            if (fn_55f2f0(q)) {
                fn_55f9b0(q, 0, 1);
            }
        }
    }
}
} } }
