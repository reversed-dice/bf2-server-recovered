// FUNCTION: BF2 0x62c390
namespace dice { namespace hfe { namespace world {
void setGearChange_0x62c390(void* self, int v) {
    *(int*)((char*)self + 0x334) = v;
    int t = v + *(int*)((char*)self + 0x2fc);
    float a = ((float (*)(void*, int))(*(void***)self)[0x69])(self, t);
    float b = ((float (*)(void*, int))(*(void***)self)[0x69])(self, *(int*)((char*)self + 0x2fc));
    *(float*)((char*)self + 0x338) = a / b;
}
} } }
