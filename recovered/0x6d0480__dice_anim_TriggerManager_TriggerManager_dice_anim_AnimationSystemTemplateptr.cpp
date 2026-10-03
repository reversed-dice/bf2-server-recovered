// FUNCTION: BF2 0x6d0480
namespace dice { namespace hfe {
void ctor_6d0480(void* self, void* arg) {
    *(void**)((char*)self + 0x8) = (void*)0x0;
    *(void**)((char*)self + 0x28) = (void*)0x0;
    *(int*)((char*)self + 0x8) = (int)0x0;
    *(void**)((char*)self + 0x10) = (void*)0x0;
    *(void**)((char*)self + 0x18) = (char*)self + 0x8;
    *(void**)((char*)self + 0x20) = (char*)self + 0x8;
    *(void**)((char*)self + 0x30) = (void*)0x0;
    *(void**)((char*)self + 0x38) = arg;
}
} }
