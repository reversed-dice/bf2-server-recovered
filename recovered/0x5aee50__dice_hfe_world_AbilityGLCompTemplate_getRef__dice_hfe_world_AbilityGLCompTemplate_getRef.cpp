// FUNCTION: BF2 0x5aee50
namespace dice { namespace hfe { namespace world {

class AbilityGLCompTemplate {
public:
    int getRef();
};

int AbilityGLCompTemplate::getRef() {
    return *(int*)((char*)this + 0x10);
}

} } }
