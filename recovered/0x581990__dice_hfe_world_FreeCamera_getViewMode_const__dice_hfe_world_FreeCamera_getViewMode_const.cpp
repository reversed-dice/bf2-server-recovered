// FUNCTION: BF2 0x581990
namespace dice { namespace hfe { namespace world {

class FreeCamera {
public:
    int getViewMode() const;
};

int FreeCamera::getViewMode() const {
    return *(int*)((char*)this + 0x320);
}

} } }
