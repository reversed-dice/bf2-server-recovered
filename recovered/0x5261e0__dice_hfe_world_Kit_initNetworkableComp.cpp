// FUNCTION: BF2 0x5261e0
#include <string>
#include <iostream>
#include <cstdlib>

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

extern unsigned int CID_KitNetworkable;

namespace world {
class Kit;
bool setNetworkableComp(Kit* obj, unsigned int cid);

class Kit {
public:
    void initNetworkableComp();
private:
    char _p[0x28];
    void* m_28;
};
} } }

void dice::hfe::world::Kit::initNetworkableComp()
{
    void* raw = m_28;
    if (raw != 0) {
        long* p = ((long* (*)(void*))(*(void***)raw)[0x128 / 8])(raw);
        if (*(long*)(*p - 0x18) == 0) abort();
        long* q = ((long* (*)(void*))(*(void***)raw)[0x128 / 8])(raw);
        if (*(long*)(*q - 0x18) != 0) {
            if (!dice::hfe::world::setNetworkableComp(this, dice::hfe::CID_KitNetworkable))
                dice::hfe::Debug(dice::hfe::DebugType(6), std::string("Game/Objects/Game/kit.cpp"), 544,
                                 std::string(&DAT_00bb25f1))
                    << dice::hfe::formatString("Failed to create KitNetworkable");
        }
    }
}
