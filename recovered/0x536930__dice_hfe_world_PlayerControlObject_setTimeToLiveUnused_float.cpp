// FUNCTION: BF2 0x536930
namespace dice { namespace hfe { namespace world {
void setTimeToLiveUnused_0x536930(void* self, float v) {
    float cur = *(float*)((char*)self + 0x3e4);
    float sentinel = *(float*)0x00b2f3c0;
    if (cur == sentinel && *(void**)((char*)self + 0x50) == 0) {
        void* c = *(void**)0x010b8c08;
        if (((unsigned char (*)(void*))(*(void***)c)[0x4f])(c)) {
            void* g = *(void**)0x0112ee48;
            ((void (*)(void*, void*, int, float))(*(void***)g)[0x34])(g, self, 0x1d, *(float*)0x00b2f234);
        }
    }
    *(float*)((char*)self + 0x3e0) = v;
    *(float*)((char*)self + 0x3e4) = v;
}
} } }
