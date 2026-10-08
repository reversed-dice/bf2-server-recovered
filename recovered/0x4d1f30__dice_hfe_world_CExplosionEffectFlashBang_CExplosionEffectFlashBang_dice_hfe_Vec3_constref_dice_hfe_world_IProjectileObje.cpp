// FUNCTION: BF2 0x4d1f30
extern "C" void ctor_4d1f30(void* self, float const* pos)
{
    *(unsigned long long*)((char*)self) = 0xb38c90ULL;
    float* d = (float*)((char*)self + 8);
    float z;
    *(unsigned int*)&z = (unsigned int)0;
    d[0] = z;
    d[1] = z;
    d[2] = z;
    float c = pos[2];
    float b = pos[1];
    float a = pos[0];
    d[0] = a;
    d[1] = b;
    d[2] = c;
}
