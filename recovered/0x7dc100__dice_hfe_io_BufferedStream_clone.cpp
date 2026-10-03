// FUNCTION: BF2 0x7dc100
#include <string>
#include <ostream>

// dice_hfe_io_BufferedStream_clone
// Debug guard: build a Debug temporary, stream one message, return. Debug
// carries its ostream at +0x20 and is 0x180 bytes; modelling that size is what
// makes the frame match. Both strings are temporaries so they are constructed
// tag-first and destroyed after the Debug temporary.

extern char DAT_00bb25f1;

namespace dice { namespace hfe {

struct Debug_7dc100 {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug_7dc100(int type, const std::string& file, int line, const std::string& tag);
    ~Debug_7dc100();
};

} }

extern "C" unsigned long debugguard_7dc100()
{
    dice::hfe::Debug_7dc100(6, std::string("IO/File/BufferedStream.cpp"), 0x92,
                     std::string(&DAT_00bb25f1)).os
        << "BufferedStream doesn\'t support cloning yet";
    return 0;
}
// REVERSED_FUNCTION: dice_hfe_io_BufferedStream_clone (0x7dc100)
