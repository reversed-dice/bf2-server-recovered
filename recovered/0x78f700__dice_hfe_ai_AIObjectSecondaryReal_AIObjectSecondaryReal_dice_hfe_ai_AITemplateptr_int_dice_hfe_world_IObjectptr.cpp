// FUNCTION: BF2 0x78f700
namespace dice { namespace hfe { namespace world {
extern void base_0x0078ebd0(void* self);
void ctor_78f700(void* self) {
    base_0x0078ebd0(self);
    *(void**)self = (void*)0xba60b0;
    *(int*)((char*)self + 0x70) = (int)0x1;
    *(void**)((char*)self + 0x78) = (void*)0x0;
}
} } }
