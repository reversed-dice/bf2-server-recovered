// FUNCTION: BF2 0x529010
namespace dice { namespace hfe {
extern void sub_0x00467020(void* self, void* arg);
extern void del_0x005768d0(void* self);
void dtor_529010(void* self) {
    *(void**)((char*)self + 0x10) = (void*)0xb45688;
    *(void**)self = (void*)0xb453d0;
    *(void**)((char*)self + 0x68) = (void*)0xb456c0;
    *(void**)((char*)self + 0x1c8) = (void*)0xb45740;
    char* s1f8 = (char*)self + 0x1f8;
    sub_0x00467020(s1f8, *(void**)(s1f8 + 0x10));
    del_0x005768d0(self);
}
} }
