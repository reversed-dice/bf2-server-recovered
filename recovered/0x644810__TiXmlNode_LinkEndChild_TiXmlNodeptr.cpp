// FUNCTION: BF2 0x644810
namespace dice { namespace hfe {
void* LinkEndChild_0x644810(void* self, void* arg2) {
    void* last = *(void**)((char*)self + 0x30);
    *(void**)((char*)arg2 + 0x18) = self;
    *(void**)((char*)arg2 + 0x50) = 0;
    *(void**)((char*)arg2 + 0x48) = last;
    if (last)
        *(void**)((char*)last + 0x50) = arg2;
    else
        *(void**)((char*)self + 0x28) = arg2;
    *(void**)((char*)self + 0x30) = arg2;
    return arg2;
}
} }
