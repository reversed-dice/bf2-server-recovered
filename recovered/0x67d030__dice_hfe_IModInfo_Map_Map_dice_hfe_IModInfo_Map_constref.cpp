// FUNCTION: BF2 0x67d030
// BF2_FLAGS: --param max-inline-insns-single=100000 -fcrossjumping -fno-strict-aliasing
#include <string>
#include <vector>

namespace dice { namespace hfe {

class IModInfo {
public:
    struct MapType {
        int s0;
        std::string s1;
        std::string s2;
        std::string s3;
        bool s4;
    };

    struct MapList {
        std::string s0;
        std::vector<MapType> s1;
    };

    class Map {
    public:
        Map(Map const& other);
        std::string s0;
        std::string s1;
        std::string s2;
        std::string s3;
        std::string s4;
        std::vector<MapList> vec;
        int spyId;
        bool f1;
        bool f2;
    };
};

IModInfo::Map::Map(Map const& other)
    : s0(other.s0),
      s1(other.s1),
      s2(other.s2),
      s3(other.s3),
      s4(other.s4),
      vec(other.vec),
      spyId(other.spyId),
      f1(other.f1),
      f2(other.f2)
{
}

} }
