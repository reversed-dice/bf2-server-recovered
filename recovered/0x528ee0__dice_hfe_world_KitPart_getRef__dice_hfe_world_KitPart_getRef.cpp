// FUNCTION: BF2 0x528ee0
namespace dice { namespace hfe { namespace world {

class KitPart {
public:
    int getRef();
};

int KitPart::getRef() {
    return *(int*)((char*)this + 0x240);
}

} } }
