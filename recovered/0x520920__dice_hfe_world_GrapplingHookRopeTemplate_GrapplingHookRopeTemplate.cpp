// FUNCTION: BF2 0x520920
namespace dice { namespace hfe { namespace world {
extern void base_0x0058b960(void* self);
extern void fn_0x0069f270(void* self, unsigned int a, unsigned int b);
void ctor_520920(void* self) {
    base_0x0058b960(self);
    *(void**)self = (void*)0xb420d0;
    *(void**)((char*)self + 0x10) = (void*)0xb42308;
    *(void**)((char*)self + 0x68) = (void*)0xb42340;
    *(int*)((char*)self + 0x1c8) = 1;
    *(void**)((char*)self + 0x1d0) = 0;
    *(void**)((char*)self + 0x1d8) = (void*)0xf6c6e8;
    *(void**)((char*)self + 0x1e0) = 0;
    *(float*)((char*)self + 0x1e8) = 14.0f;
    *(int*)((char*)self + 0x1ec) = 0x1c;
    *(float*)((char*)self + 0x1f0) = 40.0f;
    *(float*)((char*)self + 0x1f4) = 0.00125f;
    *(float*)((char*)self + 0x1f8) = 0.5f;
    *(float*)((char*)self + 0x1fc) = 0.8f;
    *(float*)((char*)self + 0x200) = 0.0012f;
    *(float*)((char*)self + 0x204) = 0.39f;
    *(float*)((char*)self + 0x208) = 0.98f;
    *(float*)((char*)self + 0x20c) = 0.35f;
    *(float*)((char*)self + 0x210) = 0.9f;
    *(float*)((char*)self + 0x214) = 0.96f;
    *(float*)((char*)self + 0x218) = 0.05f;
    *(float*)((char*)self + 0x21c) = 0.5f;
    *(float*)((char*)self + 0x220) = 0.25f;
    *(float*)((char*)self + 0x224) = 0.5f;
    *(float*)((char*)self + 0x228) = 3.7f;
    *(float*)((char*)self + 0x22c) = 2.5f;
    *(float*)((char*)self + 0x230) = 1.1f;
    *(float*)((char*)self + 0x234) = 0.98f;
    *(float*)((char*)self + 0x238) = 0.5f;
    *(float*)((char*)self + 0x23c) = 0.75f;
    *(float*)((char*)self + 0x240) = 0.14f;
    fn_0x0069f270(self, 0x40, 0);
}
} } }
