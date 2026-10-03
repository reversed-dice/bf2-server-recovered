// FUNCTION: BF2 0x532b20
namespace dice { namespace hfe { namespace world {

class ObjectSpawnerTemplate {
public:
    int getNrOfObjectToSpawn();
};

int ObjectSpawnerTemplate::getNrOfObjectToSpawn() {
    return *(int*)((char*)this + 0x224);
}

} } }
