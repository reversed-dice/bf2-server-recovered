// FUNCTION: BF2 0x524fb0
namespace dice { namespace hfe { namespace world {

class KitTemplate {
public:
    void setKitType(unsigned int);
};

void KitTemplate::setKitType(unsigned int value) {
    *(unsigned int*)((char*)this + 0x220) = value;
}

} } }
