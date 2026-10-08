#include <string>

// FUNCTION: BF2 0x734ab0
namespace dice { namespace hfe {

class ClassInfo {
public:
    void* server;
    unsigned int id;
    std::string name;
    void* data;
};

class ClassManager {
public:
    bool getClassInfo(unsigned int, ClassInfo&);
    bool getClassName(unsigned int, std::string&);
};

bool ClassManager::getClassName(unsigned int id, std::string& out) {
    ClassInfo info;
    bool ok = false;
    if (getClassInfo(id, info)) {
        out.assign(info.name);
        ok = true;
    }
    return ok;
}

} }
// REVERSED_FUNCTION: dice_hfe_ClassManager_getClassName_unsigned_int_std_stringref (0x734ab0)
