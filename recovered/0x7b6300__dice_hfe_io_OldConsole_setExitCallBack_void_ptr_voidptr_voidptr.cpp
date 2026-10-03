// FUNCTION: BF2 0x7b6300
namespace dice { namespace hfe { namespace world {
void set_0x7b6300(void* p, unsigned long long a1, unsigned long long a2) {
    *(unsigned long long*)((char*)p + 0x200) = a1;
    *(unsigned long long*)((char*)p + 0x208) = a2;
}
} } }
// REVERSED_FUNCTION: dice_hfe_io_OldConsole_setExitCallBack_void_ptr_voidptr_voidptr (0x7b6300)
