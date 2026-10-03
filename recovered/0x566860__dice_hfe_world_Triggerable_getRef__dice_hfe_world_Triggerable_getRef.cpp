// FUNCTION: BF2 0x566860
namespace dice { namespace hfe { namespace world {

class Triggerable {
public:
    int getRef();
};

int Triggerable::getRef() {
    return *(int*)((char*)this + 0x240);
}

} } }
