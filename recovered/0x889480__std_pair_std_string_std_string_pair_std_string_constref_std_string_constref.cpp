// FUNCTION: BF2 0x889480
namespace dice { namespace hfe {
extern void fn_407cc8(void* a, void* b);
struct SStr8 { void* m_ptr; };
void fn_889480_0x889480(SStr8* out, void* a, void* b) {
    fn_407cc8(out, a);
    fn_407cc8((char*)out + 8, b);
}
} }
