// FUNCTION: BF2 0x5839c0
namespace dice { namespace hfe { namespace world {

extern "C" void OverheadCameraTemplate_base_ctor(void*);
extern "C" void ObjectTemplate_updateFlags_unsigned_int_unsigned_int(void*, unsigned, unsigned);

void fn_0x5839c0(void* self) {
    OverheadCameraTemplate_base_ctor(self);
    *(long*)self = 0xb5b030;
    *(long*)((char*)self + 0x10) = 0xb5b2c0;
    *(long*)((char*)self + 0x68) = 0xb5b2f8;
    *(long*)((char*)self + 0x1c8) = 0xb5b378;
    *(int*)((char*)self + 0x1f4) = 1;
    *(unsigned*)((char*)self + 0x1f8) = 0x40133333;
    *(unsigned*)((char*)self + 0x1fc) = 0x41200000;
    *(unsigned*)((char*)self + 0x200) = 0x43200000;
    ObjectTemplate_updateFlags_unsigned_int_unsigned_int(self, 0x40, 0);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_OverheadCameraTemplate_OverheadCameraTemplate (0x5839c0)
