// BF2_FLAGS: -fno-guess-branch-probability
// FUNCTION: BF2 0x4d1f60
namespace dice { namespace hfe { namespace world {
extern void* g_system;
extern float g_motionBlurCurAlpha;
extern float g_additiveGlowCurAlpha;
extern float g_billboardCurAlpha;
extern unsigned char g_billboardShow;
extern void* g_owner;
typedef void* (*fn70_t)(long);
typedef void (*fna0_t)(void*, long);

void dtor_0x4d1f60(void* p) {
    *(void**)p = (void*)0xb38c90;
    if (p == g_owner) {
        void* obj = ((fn70_t)*(void**)((char*)g_system + 0x70))(0);
        g_motionBlurCurAlpha = 0;
        g_additiveGlowCurAlpha = 0;
        g_billboardCurAlpha = 0;
        ((fna0_t)*(void**)((char*)*(void***)obj + 0xa0))(obj, 0);
        g_billboardShow = 0;
        g_owner = 0;
    }
    *(void**)p = (void*)0xb38cd0;
}
} } }
