// FUNCTION: BF2 0x5883c0
namespace dice { namespace hfe { namespace world {

class RotationalBundleTemplate {
public:
    unsigned char getRememberExcessInput() const;
};

unsigned char RotationalBundleTemplate::getRememberExcessInput() const {
    return *(unsigned char*)((char*)this + 0x266);
}

} } }
