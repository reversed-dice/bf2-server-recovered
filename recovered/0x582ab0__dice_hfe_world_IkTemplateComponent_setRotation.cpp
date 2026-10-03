// FUNCTION: BF2 0x582ab0
extern "C" void fn_732060(void*, float, float, float);
extern "C" void target_582ab0(void* self, float* v)
{
    fn_732060((char*)self + 0x20, -v[2], -v[1], -v[0]);
}
