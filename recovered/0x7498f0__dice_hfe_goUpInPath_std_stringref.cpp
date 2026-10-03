// FUNCTION: BF2 0x7498f0
#include <string>

// dice::hfe::goUpInPath(std::string&) -- 0x7498f0
//
// Remembers whether the path was absolute, lets the worker strip one level,
// and puts the leading separator back when it was.

extern char DAT_00b9a38c;

namespace dice { namespace hfe {
extern bool isPathAbsolute_7498f0(const std::string&);
extern void goUpInPathWorker_7498f0(std::string&);
} }

extern "C" void goUpInPath_7498f0(std::string& path)
{
    bool absolute = dice::hfe::isPathAbsolute_7498f0(path);
    dice::hfe::goUpInPathWorker_7498f0(path);
    if (absolute) path.insert(0, &DAT_00b9a38c, 1);
}
// REVERSED_FUNCTION: dice_hfe_goUpInPath_std_stringref (0x7498f0)
