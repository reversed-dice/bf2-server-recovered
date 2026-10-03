// FUNCTION: BF2 0x68c700
namespace dice { namespace hfe { namespace world {
extern void* fn_69a1e0(void* a);
extern bool fn_68c4b0(void* a, void* b);
struct ROIP { unsigned char _pad[0x10]; void* m_10; };
bool predicate_0x68c700(ROIP* self, void* arg2) {
    void* p = fn_69a1e0(arg2);
    if (p == self->m_10)
        return 0;
    return fn_68c4b0(self, arg2);
}
} } }
