// FUNCTION: BF2 0x68c390
namespace dice { namespace hfe { namespace world {
void __attribute__((noinline)) ofp2_ctor(void* p, unsigned int flags)
{
    *(void**)p = (void*)0xb8e0b0;
    *(unsigned int*)((char*)p + 8) = flags;
}
void oii_ctor(void* p, unsigned int flags, void* obj)
{
    ofp2_ctor(p, flags);
    *(void**)((char*)p + 0x10) = obj;
    *(void**)p = (void*)0xb8e170;
}
}}}
