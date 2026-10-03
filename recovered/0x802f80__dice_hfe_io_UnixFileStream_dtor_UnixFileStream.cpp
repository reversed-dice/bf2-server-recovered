// FUNCTION: BF2 0x802f80
#include <string>
extern "C" void dice_hfe_io_UnixFileStream_close();
extern "C" void dtor_802f80(char* param_1) {
    *(void**)param_1 = (void*)0xbafcb0;
    dice_hfe_io_UnixFileStream_close();
    ((std::string*)(param_1 + 0x18))->~basic_string();
}
// REVERSED_FUNCTION: dice_hfe_io_UnixFileStream_dtor_UnixFileStream (0x802f80)
