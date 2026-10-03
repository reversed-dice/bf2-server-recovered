// FUNCTION: BF2 0x701940
namespace dice { namespace hfe {
extern void fn_0x00700a50(void* p);
void ctor_701940(void* self) {
    *(void**)((char*)self + 0x0) = (void*)0xb93250;
    fn_0x00700a50((char*)self + 0x8);
    *(void**)((char*)self + 0x0) = (void*)0xb968f0;
    *(void**)((char*)self + 0x8) = (void*)0xb96a00;
    *(void**)((char*)self + 0x10) = (void*)0xb96b80;
    *(char*)((char*)self + 0x45) = 0x0;
    *(char*)((char*)self + 0x46) = 0x0;
    *(int*)((char*)self + 0x48) = 0x3f800000;
}
} }
