// FUNCTION: BF2 0x4f16c0
#include <string>

namespace dice { namespace hfe {

extern "C" char dice_hfe_io_read_dice_hfe_io_IStreamptr_std_stringref(void* s, std::string* out);

extern "C" int DemoHeader_readFrom(void* self, void* stream) {
    void* vtbl = *(void**)stream;
    void* (*readFn)(void*, void*, unsigned) = *(void*(**)(void*, void*, unsigned))((char*)vtbl + 0x20);
    readFn(stream, self, 4);

    if (dice_hfe_io_read_dice_hfe_io_IStreamptr_std_stringref(stream, (std::string*)((char*)self + 8)) == 0)
        return 0;
    if (dice_hfe_io_read_dice_hfe_io_IStreamptr_std_stringref(stream, (std::string*)((char*)self + 0x10)) == 0)
        return 0;
    if (dice_hfe_io_read_dice_hfe_io_IStreamptr_std_stringref(stream, (std::string*)((char*)self + 0x18)) == 0)
        return 0;
    return 1;
}

} }
