extern "C" float fn_4ef850(void);

extern "C" float fn_4ef860(void* self)
{
    float v = *(volatile float*)0xb34b68 * *(float*)((char*)self + 0x2c);
    return fn_4ef850() * v;
}
