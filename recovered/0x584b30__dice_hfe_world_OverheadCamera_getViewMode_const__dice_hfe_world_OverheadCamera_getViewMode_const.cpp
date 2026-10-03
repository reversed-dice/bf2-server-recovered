// FUNCTION: BF2 0x584b30
namespace dice { namespace hfe { namespace world {

class OverheadCamera {
public:
    int getViewMode() const;
};

int OverheadCamera::getViewMode() const {
    return *(int*)((char*)this + 0x2e0);
}

} } }
