// FUNCTION: BF2 0x765350
namespace dice { namespace hfe {
// 0x765350 SoundObjectTemplate::tweak
typedef void (*vfn1f)(void*, float);
void tweak_0x765350(void* self, float a, float b, float c, float d, float e, float f) {
    *(float*)((char*)self + 0x9c) = b;
    *(float*)((char*)self + 0xa0) = c;
    *(float*)((char*)self + 0xa4) = d;
    *(float*)((char*)self + 0xa8) = e;
    *(float*)((char*)self + 0xac) = f;
    *(float*)((char*)self + 0x98) = a;
    ((vfn1f*)*(void***)self)[0x218/8](self, *(float*)((char*)self + 0x80));
    ((vfn1f*)*(void***)self)[0x228/8](self, *(float*)((char*)self + 0x84));
    ((vfn1f*)*(void***)self)[0x238/8](self, *(float*)((char*)self + 0x88));
    ((vfn1f*)*(void***)self)[0x248/8](self, *(float*)((char*)self + 0x8c));
    ((vfn1f*)*(void***)self)[0x258/8](self, *(float*)((char*)self + 0x90));
    return ((vfn1f*)*(void***)self)[0x268/8](self, *(float*)((char*)self + 0x94));
}
} }
