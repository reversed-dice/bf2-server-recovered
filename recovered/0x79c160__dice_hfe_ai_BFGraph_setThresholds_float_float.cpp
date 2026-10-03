// FUNCTION: BF2 0x79c160
namespace dice { namespace hfe { namespace ai {
void setThresholds_0x79c160(void* self, float a, float b) {
    void* p = *(void**)((char*)self + 8);
    ((void (*)(void*))(*(void***)p)[0x13])(p);
    void* q = *(void**)((char*)self + 8);
    ((void (*)(void*, int))(*(void***)q)[0x14])(q, 1);
}
} } }
