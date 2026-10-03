// FUNCTION: BF2 0x588360
namespace dice { namespace hfe { namespace world {

class RotationalBundleTemplate {
public:
    int getInputToYaw() const;
};

int RotationalBundleTemplate::getInputToYaw() const {
    return *(int*)((char*)this + 0x254);
}

} } }
