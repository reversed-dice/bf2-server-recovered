// FUNCTION: BF2 0x786790
#include <math.h>
namespace dice { namespace hfe { namespace ai {
float getSpeedMagnitude_0x786790(void* self) {
    void* v = ((void* (*)(void*))(*(void***)self)[0x6])(self);
    float x = *(float*)((char*)v + 0);
    float y = *(float*)((char*)v + 4);
    float z = *(float*)((char*)v + 8);
    return sqrtf(x * x + y * y + z * z);
}
} } }
