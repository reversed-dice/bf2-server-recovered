// FUNCTION: BF2 0x7c6680
extern "C" void fn_7cbf00(void* self, void* arg);

extern "C" void fn_7c6680(void* self, unsigned short arg)
{
    fn_7cbf00((char*)self + 0xe8, &arg);
}
