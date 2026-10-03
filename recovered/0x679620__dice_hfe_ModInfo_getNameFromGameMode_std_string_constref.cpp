// FUNCTION: BF2 0x679620
#include <string>

// dice::hfe::ModInfo::getNameFromGameMode(const std::string&) const -- 0x679620
//
// Lower-cases a copy of the key, looks it up in the map at +0x30, and returns
// the mapped string, or an empty one when the lookup lands on the end node.

extern char DAT_00bb25f1;

namespace dice { namespace hfe {
extern void setLowerCase_679620(std::string&);
extern char* rbtree_find_679620(void* tree, const std::string& key);
} }

std::string getNameFromGameMode_679620(char* self, const std::string& mode)
{
    std::string key(mode);
    dice::hfe::setLowerCase_679620(key);
    char* node = dice::hfe::rbtree_find_679620(self + 0x30, key);
    if (node == self + 0x38) return std::string(&DAT_00bb25f1);
    return std::string(*(std::string*)(node + 0x28));
}
// REVERSED_FUNCTION: dice_hfe_ModInfo_getNameFromGameMode_std_string_constref (0x679620)
