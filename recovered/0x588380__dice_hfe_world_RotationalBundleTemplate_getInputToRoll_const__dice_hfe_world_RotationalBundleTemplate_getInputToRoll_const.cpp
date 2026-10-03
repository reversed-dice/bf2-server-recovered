// FUNCTION: BF2 0x588380
namespace dice { namespace hfe { namespace world {

class RotationalBundleTemplate {
public:
    int getInputToRoll() const;
};

int RotationalBundleTemplate::getInputToRoll() const {
    return *(int*)((char*)this + 0x25c);
}

} } }
