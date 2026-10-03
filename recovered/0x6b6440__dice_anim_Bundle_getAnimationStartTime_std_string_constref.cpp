// FUNCTION: BF2 0x6b6440
extern "C" void* fn_6b63b0(void* self);

extern "C" float fn_6b6440(void* self)
{
    void* r = fn_6b63b0(self);
    if (r != self)
        return *(float*)((char*)r + 0x10);
    return *(float*)0xb2f3c0;
}
