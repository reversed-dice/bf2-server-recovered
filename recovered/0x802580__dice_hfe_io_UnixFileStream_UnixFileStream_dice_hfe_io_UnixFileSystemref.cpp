// FUNCTION: BF2 0x802580
namespace dice { namespace hfe { namespace world {
void ctor_802580(void* self, void* arg) {
    *(void**)self = (void*)0xbafcb0;
    *(int*)((char*)self + 0x8) = (int)0x1;
    *(int*)((char*)self + 0xc) = (int)0xffffffff;
    *(int*)((char*)self + 0x10) = (int)0x0;
    *(void**)((char*)self + 0x18) = (void*)0xf6c6e8;
    *(int*)((char*)self + 0x20) = (int)0x0;
    *(void**)((char*)self + 0x28) = arg;
}
} } }
