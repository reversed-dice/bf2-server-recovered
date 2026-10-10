// FUNCTION: BF2 0x4f4820
namespace dice { namespace hfe {
extern "C" unsigned char fn_4f46d0(void*, int, void*);
extern "C" void fn_4f4af0(void*, void*);
extern "C" void fn_4f4ac0(void*, void*);
unsigned char readData_0x4f4820(void* self, int a2, void* a3) {
    unsigned char c = fn_4f46d0(self, a2, a3);
    if (!c) {
        void* p = *(void**)((char*)self + 0x70);
        if (p != 0 && *(unsigned char*)((char*)self + 0x40) != 0) {
            ((void (*)(void*))*(void**)(*(char**)p + 0x10))(p);
            *(void**)((char*)self + 0x70) = 0;
            if (*(void**)((char*)self + 0xa0) != 0) {
                fn_4f4af0(*(void**)((char*)self + 0xa0), 0);
                fn_4f4ac0(*(void**)((char*)self + 0xa0), 0);
            }
        }
    }
    return c;
}
}}
