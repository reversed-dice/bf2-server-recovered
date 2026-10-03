// FUNCTION: BF2 0x74a8d0
namespace dice { namespace hfe {
float getSimulationRatio_0x74a8d0(void* self) {
    int v = ((int (*)(void*))(*(void***)self)[0x9])(self);
    return (float)v / *(float*)0x00b26c3c;
}
} }
