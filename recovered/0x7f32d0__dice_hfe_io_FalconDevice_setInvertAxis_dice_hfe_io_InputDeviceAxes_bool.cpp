// FUNCTION: BF2 0x7f32d0
namespace dice { namespace hfe { namespace io {
void eom_7f32d0(char* self, int axis, char v) {
    if (*(int*)(self + 0x44) > axis) return;
    *(char*)(self + 0x58 + (long)axis) = v;
}
} } }
// REVERSED_FUNCTION: test (0x7f32d0)
