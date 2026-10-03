// FUNCTION: BF2 0x765800
namespace dice { namespace hfe {
extern void fn_407998(void* a, double b);
extern void fn_408108(void* a, int b);
extern void fn_408088(void* a, int b);
void* operator_0x765800(void* out, void* h) {
    fn_407998(out, (double)*(float*)h);
    fn_408108(out, 0x2f);
    fn_407998(out, (double)*(float*)((char*)h + 4));
    fn_408108(out, 0x2f);
    fn_407998(out, (double)*(float*)((char*)h + 8));
    fn_408108(out, 0x2f);
    fn_407998(out, (double)*(float*)((char*)h + 0xc));
    fn_408108(out, 0x2f);
    fn_408088(out, *(unsigned char*)((char*)h + 0x10));
    fn_408108(out, 0x2f);
    fn_408088(out, *(int*)((char*)h + 0x14));
    fn_408108(out, 0x2f);
    return out;
}
} }
