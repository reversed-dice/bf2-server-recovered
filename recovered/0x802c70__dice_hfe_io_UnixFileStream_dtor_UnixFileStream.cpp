// FUNCTION: BF2 0x802c70
#include <string>
extern "C" void dice_hfe_io_UnixFileStream_close();
extern "C" void dtor_802c70(char* param_1) {
    *(void**)param_1 = (void*)0xbafcb0;
    dice_hfe_io_UnixFileStream_close();
    ((std::string*)(param_1 + 0x18))->~basic_string();
    operator delete(param_1);
}
// REVERSED_FUNCTION: dice_hfe_io_UnixFileStream_dtor_UnixFileStream (0x802c70)
