// FUNCTION: BF2 0x707f70
namespace dice { namespace hfe { namespace world {
extern void fn_707ee0(void* a);
void ctor_0x707f70(void* self) {
    *(char*)self = 0;
    fn_707ee0((char*)self + 8);
    *(int*)((char*)self + 0x40) = 0;
    *(int*)((char*)self + 0x44) = 0;
    *(void**)((char*)self + 0x48) = 0;
    *(void**)((char*)self + 0x50) = 0;
    *(int*)((char*)self + 0x58) = 0;
    *(int*)((char*)self + 0x70) = 0;
    *(void**)((char*)self + 0x78) = 0;
}
} } }
