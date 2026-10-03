// FUNCTION: BF2 0x63dee0
extern "C" void fn_687090(void*);
extern "C" void target_63dee0(void* self)
{
    int f = *(int*)((char*)self + 8);
    if ((f & 0x200000) || (f & 0x80000)) {
        *(char*)((char*)self + 0x471) = 1;
    }
    fn_687090(self);
}
