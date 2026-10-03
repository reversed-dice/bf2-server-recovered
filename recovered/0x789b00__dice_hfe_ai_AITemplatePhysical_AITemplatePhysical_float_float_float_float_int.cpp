// FUNCTION: BF2 0x789b00
namespace dice { namespace hfe { namespace ai {
void AITemplatePhysical_0x789b00(void* self, float a, float b, float c, float d, int e) {
    *(long*)self = 0xba4a90;
    *(float*)((char*)self + 8) = a;
    *(int*)((char*)self + 0x18) = 0;
    *(float*)((char*)self + 0xc) = b;
    *(int*)((char*)self + 0x1c) = e;
    *(char*)((char*)self + 0x20) = 0;
    *(float*)((char*)self + 0x10) = c;
    *(char*)((char*)self + 0x21) = 0;
    *(float*)((char*)self + 0x14) = d;
}
} } }
