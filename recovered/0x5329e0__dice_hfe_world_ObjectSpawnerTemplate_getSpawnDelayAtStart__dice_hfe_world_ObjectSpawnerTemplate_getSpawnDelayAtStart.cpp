// FUNCTION: BF2 0x5329e0
namespace dice { namespace hfe { namespace world {

class ObjectSpawnerTemplate {
public:
    unsigned char getSpawnDelayAtStart();
};

unsigned char ObjectSpawnerTemplate::getSpawnDelayAtStart() {
    return *(unsigned char*)((char*)this + 0x24b);
}

} } }
