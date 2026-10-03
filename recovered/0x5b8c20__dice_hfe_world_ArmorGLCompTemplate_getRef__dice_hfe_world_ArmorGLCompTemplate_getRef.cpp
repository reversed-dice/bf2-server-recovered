// FUNCTION: BF2 0x5b8c20
namespace dice { namespace hfe { namespace world {

class ArmorGLCompTemplate {
public:
    int getRef();
};

int ArmorGLCompTemplate::getRef() {
    return *(int*)((char*)this + 0x10);
}

} } }
