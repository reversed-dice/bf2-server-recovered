// FUNCTION: BF2 0x536720
namespace dice { namespace hfe { namespace world {

class PlayerControlObjectTemplate {
public:
    int getRef();
};

int PlayerControlObjectTemplate::getRef() {
    return *(int*)((char*)this + 0x200);
}

} } }
