// FUNCTION: BF2 0x81d7c0
namespace dice { namespace hfe { namespace io {

extern "C" void real_operator_delete_array2(void*);
void fn_0x7a29d0() {
    void* g = *(void**)0x10ae0d0;
    if (g) {
        real_operator_delete_array2(g);
        *(void**)0x10ae0d0 = 0;
    }
}

} } }
// REVERSED_FUNCTION: dice_hfe_io_Crc32_dtor_Crc32 (0x7a29d0)
