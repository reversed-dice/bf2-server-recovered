// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x564050
#include <string>
namespace dice { namespace hfe { namespace world {
extern void base_5767f0(void* self);
extern void fn_69f270(void* self, unsigned int a, unsigned int b);
extern void fn_562610(void* self, void* tmpl);
void ctor_563ef0(void* self) {
    base_5767f0(self);
    void* a = (void*)((char*)self + 0x1f8);
    std::string* s = (std::string*)((char*)self + 0x20);
    *(void**)self = (void*)0xb52ad0;
    *(void**)((char*)self + 0x10) = (void*)0xb52d60;
    *(void**)((char*)self + 0x68) = (void*)0xb52d98;
    *(void**)((char*)self + 0x1c8) = (void*)0xb52e18;
    *(int*)((char*)self + 0x1f4) = 1;
    *(void**)((char*)a + 0x8) = a;
    *(void**)((char*)self + 0x1f8) = a;
    *(int*)((char*)self + 0x208) = 3;
    *(float*)((char*)self + 0x20c) = 5.0f;
    *(int*)((char*)self + 0x210) = -1;
    *(float*)((char*)self + 0x214) = 100.0f;
    *(float*)((char*)self + 0x218) = 10.0f;
    *(float*)((char*)self + 0x21c) = 1.0f;
    *(unsigned char*)((char*)self + 0x220) = 0;
    *(unsigned char*)((char*)self + 0x221) = 0;
    *(unsigned char*)((char*)self + 0x222) = 0;
    s->assign("TriggerableInfo");
    fn_69f270(self, 0x50, 0);
    void* m = *(void**)0x108f1a0;
    if (m) fn_562610(m, self);
}
} } }
