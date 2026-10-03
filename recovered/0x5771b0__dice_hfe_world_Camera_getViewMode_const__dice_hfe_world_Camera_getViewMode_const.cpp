// FUNCTION: BF2 0x5771b0
namespace dice { namespace hfe { namespace world {

class Camera {
public:
    int getViewMode() const;
};

int Camera::getViewMode() const {
    return *(int*)((char*)this + 0x2cc);
}

} } }
