// FUNCTION: BF2 0x5baa90
namespace dice { namespace hfe { namespace world {

class RadioGLCompTemplate {
public:
    int getRef();
};

int RadioGLCompTemplate::getRef() {
    return *(int*)((char*)this + 0x10);
}

} } }
