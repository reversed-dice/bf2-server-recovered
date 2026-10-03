// FUNCTION: BF2 0x4f5d60
namespace dice { namespace hfe {
extern void* fn_4f4b50(void);
void setMode_0x4f5d60(void* self, int mode) {
    *(int*)((char*)self + 0x20) = mode;
    if (!mode) {
        void* p = fn_4f4b50();
        if (p)
            ((void (*)(void*, void*))(*(void***)p)[0x23])(p, (char*)self + 0x28);
    }
}
} }
