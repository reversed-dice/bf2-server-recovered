// FUNCTION: BF2 0x62dcc0
namespace dice { namespace hfe { namespace world {
void getSlope_0x62dcc0(void* self) {
    void* v = ((void* (*)(void*))(*(void***)self)[0x21])(self);
    float cur = *(float*)((char*)self + 0x340);
    float target = *(float*)((char*)v + 0x24);
    float s = *(float*)(*(void**)0x01092820);
    *(float*)((char*)self + 0x340) = (target - cur) * s + cur;
}
} } }
