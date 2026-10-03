// FUNCTION: BF2 0x532ba0
namespace dice { namespace hfe { namespace world {

class ObjectSpawnerTemplate {
public:
    int getMaxNrOfObjectSpawned();
};

int ObjectSpawnerTemplate::getMaxNrOfObjectSpawned() {
    return *(int*)((char*)this + 0x228);
}

} } }
