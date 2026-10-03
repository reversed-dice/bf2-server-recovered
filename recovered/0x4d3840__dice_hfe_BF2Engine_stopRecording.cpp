// FUNCTION: BF2 0x4d3840
namespace dice { namespace hfe {
extern void fn_4e5830(void* a, void* b);
void stopRecording_0x4d3840(void* self) {
    void* mgr = *(void**)0x010b8c08;
    if (mgr) {
        if (((bool (*)(void*))(*(void***)mgr)[0x4f])(mgr)) {
            fn_4e5830(*(void**)((char*)self + 0x108), *(void**)0x010c5420);
        }
    }
}
} }
