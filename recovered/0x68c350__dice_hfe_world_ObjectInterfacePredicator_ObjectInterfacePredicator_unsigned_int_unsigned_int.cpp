// FUNCTION: BF2 0x68c350
namespace dice { namespace hfe { namespace world {
void __attribute__((noinline)) ofp2_ctor(void* p, unsigned int flags)
{
    *(void**)p = (void*)0xb8e0b0;
    *(unsigned int*)((char*)p + 8) = flags;
}
void oip310_ctor(void* p, unsigned int flags, unsigned int iface)
{
    ofp2_ctor(p, flags);
    *(unsigned int*)((char*)p + 0x18) = iface;
    *(void**)p = (void*)0xb8e1b0;
}
}}}
