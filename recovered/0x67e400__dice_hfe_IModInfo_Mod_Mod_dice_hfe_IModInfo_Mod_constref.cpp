// FUNCTION: BF2 0x67e400
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
#include <string>
#include <vector>

namespace dice { namespace hfe {

class IModInfo {
public:
    class Map {
    public:
        Map(Map const&);
        char m_pad[0x48];
    };

    class Mod {
    public:
        std::string m0;
        std::string m8;
        std::string m10;
        std::string m18;
        std::string m20;
        std::string m28;
        std::string m30;
        std::string m38;
        std::string m40;
        std::vector<Map> m48;
        std::vector<std::string> m60;
        std::string m78;
        std::string m80;
    };
};

void forceCopyMod(dice::hfe::IModInfo::Mod const& s)
{
    dice::hfe::IModInfo::Mod t(s);
    (void)&t;
}

}}
