// FUNCTION: BF2 0x513280
namespace dice { namespace hfe { namespace world {

class ControlPoint {
public:
    int getPlayer();
};

int ControlPoint::getPlayer() {
    return *(int*)((char*)this + 0x290);
}

} } }
