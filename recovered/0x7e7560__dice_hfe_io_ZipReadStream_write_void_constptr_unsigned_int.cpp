// FUNCTION: BF2 0x7e7560
#include <string>
#include <ostream>

// dice_hfe_io_ZipReadStream_write_void_constptr_unsigned_int
// Debug guard: build a Debug temporary, stream one message, return. The Debug
// object carries its ostream at +0x20 and is 0x180 bytes; modelling that size
// is what makes the frame match. Both strings are temporaries so they are
// constructed tag-first and destroyed after the Debug temporary.

extern char DAT_00bb25f1;

namespace dice { namespace hfe {

struct Debug_7e7560 {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug_7e7560(int type, const std::string& file, int line, const std::string& tag);
    ~Debug_7e7560();
};

} }

extern "C" unsigned long debugguard_7e7560()
{
    dice::hfe::Debug_7e7560(6, std::string("IO/File/ZipArchive.cpp"), 599,
                     std::string(&DAT_00bb25f1)).os
        << "write() not valid on ZipReadStream";
    return 0;
}
// REVERSED_FUNCTION: dice_hfe_io_ZipReadStream_write_void_constptr_unsigned_int (0x7e7560)
