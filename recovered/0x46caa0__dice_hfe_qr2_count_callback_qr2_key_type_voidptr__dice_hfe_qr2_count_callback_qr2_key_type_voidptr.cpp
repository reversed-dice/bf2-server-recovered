// FUNCTION: BF2 0x46caa0
namespace dice { namespace hfe {

extern void* dice_hfe_serverQueryCache;

unsigned int qr2_count_callback(int keyType, void*)
{
    void* p = dice_hfe_serverQueryCache;
    if (keyType == 1) {
        return ((unsigned int (*)(void*))(*(void***)p)[3])(p);
    }
    return (unsigned int)((keyType == 2) * 3 - 1);
}

} } // namespace
// REVERSED_FUNCTION: dice_hfe_qr2_count_callback_qr2_key_type_voidptr (0x46caa0)