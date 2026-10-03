namespace dice { namespace hfe { namespace io {

struct Vec3 { float x,y,z; };

void fn_0x79ed20(void* self, const Vec3& v) {
    Vec3* dst = (Vec3*)((char*)self + 0x278);
    float z = v.z, y = v.y, x = v.x;
    *(volatile float*)&dst->x = x;
    dst->y = y;
    dst->z = z;
    *(volatile unsigned char*)((char*)self + 0x470) = 1;
}

} } }
// REVERSED_FUNCTION: dice_hfe_io_BitStream_setCompressionVector_dice_hfe_Vec3_constref (0x79ed20)
