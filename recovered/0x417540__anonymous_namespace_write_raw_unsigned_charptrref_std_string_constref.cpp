// FUNCTION: BF2 0x417540
extern "C" void write_raw_417320(void* p, unsigned short u);
extern "C" void write_raw_4172f0(void* p, void* s, unsigned int u);

extern "C" void write_raw_417540(void* param1, void** param2)
{
    unsigned short u = *(unsigned short*)((char*)*param2 - 0x18);
    write_raw_417320(param1, u);
    write_raw_4172f0(param1, *param2, u);
}
