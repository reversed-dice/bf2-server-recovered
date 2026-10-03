// FUNCTION: BF2 0x6ce1f0
extern "C" void fn_6ce0c0(void* self);

extern "C" void fn_6ce1c0(void* self)
{
    fn_6ce0c0(self);
    *(void**)self = (void*)0xb91c90;
    *(float*)((char*)self + 0x48) = 0x41200000;
    *(float*)((char*)self + 0x44) = 0x40a00000;
    *(float*)((char*)self + 0x4c) = 0x40a00000;
}
