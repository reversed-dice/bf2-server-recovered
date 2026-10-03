// FUNCTION: BF2 0x5e9ce0
namespace dice { namespace hfe { namespace world {

class GenericFireArm {
public:
    int getRef();
};

int GenericFireArm::getRef() {
    return *(int*)((char*)this + 0x280);
}

} } }
