// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x4bbe20
namespace dice { namespace hfe {

extern unsigned long rand;

namespace world {

extern void fn_689370(void* p, void* t);

} // namespace world

void sp_ctor(void* p, void* t)
{
    world::fn_689370(p, t);
    *(void**)((char*)p + 0x228) = t;
    *(void**)p = (void*)0xb373b0;
    float* z = (float*)((char*)p + 0x240);
    *(void**)((char*)p + 0x100) = (void*)0xb37748;
    *(void**)((char*)p + 0x218) = (void*)0xb37780;
    *(int*)((char*)p + 0x220) = 1;
    float v = *(float*)((char*)t + 0x80);
    *(int*)((char*)p + 0x234) = 0;
    *(float*)((char*)p + 0x230) = v;
    *(float*)((char*)p + 0x238) = -v;
    *(unsigned char*)((char*)p + 0x23c) = *(unsigned char*)((char*)t + 0x8c);
    z[0] = 0.0f;
    z[1] = 0.0f;
    z[2] = 0.0f;
    *(char*)((char*)p + 0x24c) = 0;
    *(char*)((char*)p + 0x24d) = 0;
    *(char*)((char*)p + 0x24e) = 0;
    unsigned int r = ((unsigned int (*)(void*))(*(void***)t)[0x88 / 8])(t);
    rand = (r + 1) & 0x7fffffff;
}

} }
