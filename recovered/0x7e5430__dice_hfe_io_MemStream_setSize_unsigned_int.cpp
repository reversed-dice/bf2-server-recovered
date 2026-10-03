// FUNCTION: BF2 0x7e5430
// 0x7e5430 - MemStream_setSize (17 ins, 1 call)
// Compare, conditional call, store, conditional store, epilogue
namespace dice { namespace hfe { namespace io {
extern void dice_hfe_io_MemStream_setMaxSize_unsigned_int(long, unsigned int);
void dice_hfe_io_MemStream_setSize_unsigned_int(long param_1, unsigned int size) {
    if (*(unsigned*)(param_1 + 0x24) < size) {
        dice_hfe_io_MemStream_setMaxSize_unsigned_int(param_1, size);
    }
    *(unsigned*)(param_1 + 0x20) = size;
    if (size < *(unsigned*)(param_1 + 0x28)) {
        *(unsigned*)(param_1 + 0x28) = size;
    }
}
} } }

// REVERSED_FUNCTION: dice_hfe_io_MemStream_setSize_unsigned_int (0x7e5430)
