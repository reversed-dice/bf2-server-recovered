// FUNCTION: BF2 0x4d07a0
namespace dice { namespace hfe {
float timeRemaining_0x4d07a0(void* self) {
    float t = *(float*)((char*)self + 4);
    void* g = *(void**)0x010aa1a8;
    double now = ((double (*)(void*))(*(void***)g)[0x6])(g);
    return t - (float)now;
}
} }
