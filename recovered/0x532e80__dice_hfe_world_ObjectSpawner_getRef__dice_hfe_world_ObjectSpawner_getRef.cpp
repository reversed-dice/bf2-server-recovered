// FUNCTION: BF2 0x532e80
namespace dice { namespace hfe { namespace world {

class ObjectSpawner {
public:
    int getRef();
};

int ObjectSpawner::getRef() {
    return *(int*)((char*)this + 0x238);
}

} } }
