// FUNCTION: BF2 0x617ba0
namespace dice { namespace hfe { namespace world {
void ctor_617ba0(void* self, void* arg) {
    *(int*)((char*)self + 0x8) = (int)0x1;
    *(void**)((char*)self + 0x10) = (void*)0x0;
    *(void**)((char*)self + 0x18) = (void*)0x0;
    *(void**)self = (void*)0xb7b8f0;
    *(void**)((char*)self + 0x20) = (void*)0xb7b9e8;
    *(int*)((char*)self + 0x28) = (int)0x1;
    *(void**)((char*)self + 0x30) = arg;
    *(int*)((char*)self + 0x38) = (int)0x0;
    *(unsigned char*)((char*)self + 0x3c) = (unsigned char)0x0;
}
} } }
