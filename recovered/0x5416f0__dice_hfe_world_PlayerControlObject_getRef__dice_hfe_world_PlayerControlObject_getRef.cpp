// FUNCTION: BF2 0x5416f0
namespace dice { namespace hfe { namespace world {

class PlayerControlObject {
public:
    int getRef();
};

int PlayerControlObject::getRef() {
    return *(int*)((char*)this + 0x248);
}

} } }
