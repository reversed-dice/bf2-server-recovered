// FUNCTION: BF2 0x63c380
namespace dice { namespace hfe { namespace world {
extern void base_0x005768d0(void* self);
void dtor_63c380(void* self) {
    *(void**)self = (void*)0xb85cf0;
    *(void**)((char*)self + 0x10) = (void*)0xb85f80;
    *(void**)((char*)self + 0x68) = (void*)0xb85fb8;
    *(void**)((char*)self + 0x1c8) = (void*)0xb86038;
    base_0x005768d0(self);
}
} } }
