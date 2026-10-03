// FUNCTION: BF2 0x515780
namespace dice { namespace hfe { namespace world {

class DestroyableObjectTemplate {
public:
    int getRef();
};

int DestroyableObjectTemplate::getRef() {
    return *(int*)((char*)this + 0x1f4);
}

} } }
