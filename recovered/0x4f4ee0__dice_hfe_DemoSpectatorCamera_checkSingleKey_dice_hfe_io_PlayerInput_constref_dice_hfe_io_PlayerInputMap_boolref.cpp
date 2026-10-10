// FUNCTION: BF2 0x4f4ee0
namespace dice { namespace hfe {
namespace io {
typedef unsigned int PlayerInputMap;
class PlayerInput {
public:
    float vals[0x40];
    unsigned long long flags;
};
}
class DemoSpectatorCamera {
public:
    static bool checkSingleKey(io::PlayerInput const& in, io::PlayerInputMap map, bool& out);
};
bool DemoSpectatorCamera::checkSingleKey(io::PlayerInput const& in, io::PlayerInputMap map, bool& out)
{
    if ((int)map <= 0x3f && ((in.flags >> map) & 1) != 0 && in.vals[map] > 0.5f) {
        if (out)
            return false;
        out = true;
        return true;
    }
    out = false;
    return false;
}
} }
