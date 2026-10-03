// FUNCTION: BF2 0x532b00
namespace dice { namespace hfe { namespace world {

class ObjectSpawnerTemplate {
public:
    void setNrOfObjectToSpawn(unsigned int);
};

void ObjectSpawnerTemplate::setNrOfObjectToSpawn(unsigned int value) {
    *(unsigned int*)((char*)this + 0x224) = value;
}

} } }
