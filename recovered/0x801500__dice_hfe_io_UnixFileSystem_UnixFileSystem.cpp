// FUNCTION: BF2 0x801500
namespace dice { namespace hfe { namespace world {
void ctor_801500(void* self) {
    *(void**)self = (void*)0xbafbf0;
    *(int*)((char*)self + 0x8) = (int)0x1;
    *(int*)((char*)self + 0xc) = (int)0x0;
    *(void**)((char*)self + 0x10) = (void*)0xf6c6e8;
    *(void**)((char*)self + 0x18) = (void*)0xf6c6e8;
    *(void**)((char*)self + 0x20) = (void*)0xf6c6e8;
    *(void**)((char*)self + 0x28) = (void*)0xf6c6e8;
}
} } }
