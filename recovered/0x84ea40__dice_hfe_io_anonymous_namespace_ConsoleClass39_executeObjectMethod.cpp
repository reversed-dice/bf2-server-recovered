// FUNCTION: BF2 0x84ea40
namespace dice { namespace hfe {
extern void* fn_0x84d9e0(void);
int execute_0x84ea40(void* self) {
    if (*(int*)((char*)self + 0x30) == 1) {
        unsigned char v = *(unsigned char*)*(void**)((char*)self + 0x38);
        *(char*)((char*)self + 0x108) = 0;
        void* p = fn_0x84d9e0();
        ((void (*)(void*, unsigned char))(*(void***)p)[0xc])(p, v);
    }
    return 0;
}
} }
