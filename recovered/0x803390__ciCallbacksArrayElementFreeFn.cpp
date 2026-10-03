// FUNCTION: BF2 0x803390
namespace dice { namespace hfe {

extern "C" void gsifree(void*);
void fn_0x803390(void* self) {
    void* p = *(void**)((char*)self+0x28);
    if (p) {
        gsifree(p);
    }
}

} }
// REVERSED_FUNCTION: ciCallbacksArrayElementFreeFn (0x803390)
