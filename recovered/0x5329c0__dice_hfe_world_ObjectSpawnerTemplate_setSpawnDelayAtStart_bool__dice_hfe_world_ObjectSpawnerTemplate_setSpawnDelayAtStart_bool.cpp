// FUNCTION: BF2 0x5329c0
namespace dice { namespace hfe { namespace world {

class ObjectSpawnerTemplate {
public:
    void setSpawnDelayAtStart(unsigned char);
};

void ObjectSpawnerTemplate::setSpawnDelayAtStart(unsigned char value) {
    *(unsigned char*)((char*)this + 0x24b) = value;
}

} } }
