// FUNCTION: BF2 0x76a830
// vec3ToVec2XZ 0x76a830 — copy x+z + return dest
namespace dice { namespace hfe {

void* vec3ToVec2XZ(void const* src, void* dst) {
    *(unsigned int*)dst = *(unsigned int*)src;
    *(unsigned int*)((char*)dst + 4) = *(unsigned int*)((char*)src + 8);
    return dst;
}

}}
