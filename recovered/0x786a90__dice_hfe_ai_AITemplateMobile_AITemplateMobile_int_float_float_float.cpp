// FUNCTION: BF2 0x786a90
namespace dice { namespace hfe { namespace ai {
void ctor_0x786a90(void* self, int a, float b, float c, float d) {
    *(long*)self = 0xba4310;
    *(int*)((char*)self + 8) = a;
    *(float*)((char*)self + 0xc) = b;
    *(float*)((char*)self + 0x10) = c;
    *(float*)((char*)self + 0x1c) = 0.75f;
    *(float*)((char*)self + 0x20) = 30.0f;
    *(float*)((char*)self + 0x18) = d;
    *(int*)((char*)self + 0x24) = 0;
    *(float*)((char*)self + 0x28) = 0.1f;
    *(float*)((char*)self + 0x2c) = 0.01f;
    *(float*)((char*)self + 0x30) = 2.0f;
    *(char*)((char*)self + 0x34) = 0;
}
} } }
