// FUNCTION: BF2 0x582a20
extern "C" void fn_732060(void*, float, float, float);
extern "C" void target_582a20(void* self, float* v)
{
    fn_732060((char*)self + 0x78, -v[2], -v[1], -v[0]);
}
