// FUNCTION: BF2 0x82b1e0
namespace dice { namespace hfe {
int gpGetLoginTicket_0x82b1e0(void* self, void* out) {
    if (!self)
        goto err;
    void* vt = *(void**)self;
    if (!vt)
        goto err;
    char* src = (char*)vt + 0x51c;
    *(long*)((char*)out + 0x0) = *(long*)(src + 0x0);
    *(long*)((char*)out + 0x8) = *(long*)(src + 0x8);
    *(long*)((char*)out + 0x10) = *(long*)(src + 0x10);
    *(char*)((char*)out + 0x18) = *(char*)(src + 0x18);
    return 0;
err:
    return 2;
}
} }
