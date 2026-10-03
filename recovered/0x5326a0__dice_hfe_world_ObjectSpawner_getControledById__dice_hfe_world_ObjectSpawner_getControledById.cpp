// FUNCTION: BF2 0x5326a0
namespace dice { namespace hfe { namespace world {

class ObjectSpawner {
public:
    int getControledById();
};

int ObjectSpawner::getControledById() {
    return *(int*)((char*)this + 0x278);
}

} } }
