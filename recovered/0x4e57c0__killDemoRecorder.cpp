// FUNCTION: BF2 0x4e57c0
namespace dice { namespace hfe {
// 0x4e57c0 killDemoRecorder
extern "C" void fn_4f22d0(void*);   // DemoRecorder dtor
extern "C" void fn_4e72c0(void*);   // sub dtor
extern "C" void operator_delete(void*);
void killDemoRecorder_0x4e57c0(void* self) {
    void* r = *(void**)((char*)self + 0x10);
    if (r) {
        fn_4f22d0(r);
        operator_delete(r);
    }
    void* r2 = *(void**)((char*)self + 0x18);
    *(void**)((char*)self + 0x10) = 0;
    if (r2) {
        fn_4e72c0((char*)r2 + 0x30);
        operator_delete(r2);
    }
    void* r3 = *(void**)((char*)self + 0x8);
    *(void**)((char*)self + 0x18) = 0;
    operator_delete(r3);
    *(void**)((char*)self + 0x8) = 0;
    *(char*)((char*)self + 0x20) = 0;
}
} }
