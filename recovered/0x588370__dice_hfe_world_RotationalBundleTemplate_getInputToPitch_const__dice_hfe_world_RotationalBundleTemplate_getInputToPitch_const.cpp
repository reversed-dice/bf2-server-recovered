// FUNCTION: BF2 0x588370
namespace dice { namespace hfe { namespace world {

class RotationalBundleTemplate {
public:
    int getInputToPitch() const;
};

int RotationalBundleTemplate::getInputToPitch() const {
    return *(int*)((char*)this + 0x258);
}

} } }
