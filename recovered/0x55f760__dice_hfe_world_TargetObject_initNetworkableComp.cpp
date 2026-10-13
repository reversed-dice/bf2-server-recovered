// FUNCTION: BF2 0x55f760
#include <string>
#include <iostream>

extern char DAT_00bb25f1;

namespace dice {
namespace hfe {

enum DebugType { DebugType_6 = 6 };

class Debug {
    char _pad[0x20];
    char _stream[0x160];
public:
    Debug(DebugType type, std::string const& file, int line, std::string const& func = "");
    ~Debug();
    template <typename T>
    std::ostream& operator<<(T const& val) {
        return *(std::ostream*)(_stream) << val;
    }
};

std::string formatString(char const* fmt, ...);

extern unsigned int CID_TargetObjectNetworkable;

namespace world {
class TargetObject;
bool setNetworkableComp(TargetObject* obj, unsigned int cid);

class TargetObject {
public:
    void initNetworkableComp();
private:
    char _p[0x28];
    void* m_28;
};
} } }

void dice::hfe::world::TargetObject::initNetworkableComp()
{
    void* raw = m_28;
    if (raw != 0) {
        std::string* s = ((std::string* (*)(void*))(*(void***)raw)[0x128 / 8])(raw);
        if (*s != "") {
            if (!dice::hfe::world::setNetworkableComp(this, dice::hfe::CID_TargetObjectNetworkable))
                dice::hfe::Debug(dice::hfe::DebugType(6), std::string("Game/Objects/Game/TargetObject.cpp"), 80,
                                 std::string(&DAT_00bb25f1))
                    << dice::hfe::formatString("Failed to create TargetObjectNetworkable");
        }
    }
}
