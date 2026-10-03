typedef float (*vfn1)(void*);

extern "C" float getWheelRadius_6382a0(void* self)
{
    float r = ((vfn1)(*(void***)(*(void**)((char*)self + 0x18)))[0x130/8])(*(void**)((char*)self + 0x18));
    return r > *(float*)0xb317dc ? r : *(float*)0xb317dc;
}
