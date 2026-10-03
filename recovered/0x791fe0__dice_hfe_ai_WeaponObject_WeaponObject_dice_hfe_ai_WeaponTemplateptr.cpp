// FUNCTION: BF2 0x791fe0
namespace dice { namespace hfe { namespace world {
void ctor_791fe0(void* self, void* arg) {
    *(void**)self = (void*)0xba6a30;
    *(int*)((char*)self + 0x8) = (int)0x1;
    *(void**)((char*)self + 0x18) = arg;
    *(int*)((char*)self + 0x20) = (int)0xffffffff;
    *(int*)((char*)self + 0x24) = (int)0xffffffff;
    *(int*)((char*)self + 0x28) = (int)0xffffffff;
}
} } }
