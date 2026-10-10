// FUNCTION: BF2 0x572390
namespace dice { namespace hfe { namespace world {
extern void base_0x0058b960(void* self);
extern void upd_0x0069f270(void* self, unsigned int a, unsigned int b);
void ctor_5722f0(void* self) {
    base_0x0058b960(self);
    float three = 3.0f;
    *(void**)self = (void*)0xb55290;
    *(void**)((char*)self + 0x10) = (void*)0xb554c8;
    *(void**)((char*)self + 0x68) = (void*)0xb55500;
    *(int*)((char*)self + 0x1c8) = (int)0x1;
    *(long*)((char*)self + 0x1d0) = (long)0xf6c6e8;
    *(float*)((char*)self + 0x1d8) = 50.0f;
    *(float*)((char*)self + 0x1dc) = three;
    *(float*)((char*)self + 0x1e0) = 2.0f;
    *(int*)((char*)self + 0x1e4) = (int)0x3fbeb852;
    *(float*)((char*)self + 0x1e8) = 1000.0f;
    *(float*)((char*)self + 0x1ec) = 0.5f;
    *(float*)((char*)self + 0x1f0) = three;
    *(long*)((char*)self + 0x1f8) = 0;
    upd_0x0069f270(self, 0x40, 0);
}
}}}
