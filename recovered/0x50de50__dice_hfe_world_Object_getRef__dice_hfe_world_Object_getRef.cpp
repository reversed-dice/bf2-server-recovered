// FUNCTION: BF2 0x50de50
namespace dice { namespace hfe { namespace world {

class Object {
public:
    int getRef();
};

int Object::getRef() {
    return *(int*)((char*)this + 0x108);
}

} } }
