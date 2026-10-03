// FUNCTION: BF2 0x834ad0
namespace dice { namespace hfe {
extern void fn_834990(void* a, void* b, void* c);
struct L2 { int a; void* b; };
void* f_0x834ad0(void* a, int x) {
    L2 local;
    local.a = x;
    local.b = 0;
    fn_834990(a, (void*)0x834ab0, &local);
    return local.b;
}
} }
