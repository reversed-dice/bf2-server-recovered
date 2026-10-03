// FUNCTION: BF2 0x7dfc80
#include <string>
#include <ostream>

// dice_hfe_io_FileManager_addMergeDirectory_std_string_constref_std_string_constref
// Debug guard: build a Debug temporary, stream one message, return. Debug
// carries its ostream at +0x20 and is 0x180 bytes; modelling that size is what
// makes the frame match. Both strings are temporaries so they are constructed
// tag-first and destroyed after the Debug temporary.

extern char DAT_00bb25f1;

namespace dice { namespace hfe {

struct Debug_7dfc80 {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug_7dfc80(int type, const std::string& file, int line, const std::string& tag);
    ~Debug_7dfc80();
};

} }

extern "C" unsigned long debugguard_7dfc80()
{
    dice::hfe::Debug_7dfc80(6, std::string("IO/File/FileManager.cpp"), 0x369,
                     std::string(&DAT_00bb25f1)).os
        << "Not used";
    return 1;
}
// REVERSED_FUNCTION: dice_hfe_io_FileManager_addMergeDirectory_std_string_constref_std_string_constref (0x7dfc80)
