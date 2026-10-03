// FUNCTION: BF2 0x515740
namespace dice { namespace hfe { namespace world {

class DestroyableObject {
public:
    int getRef();
};

int DestroyableObject::getRef() {
    return *(int*)((char*)this + 0x238);
}

} } }
