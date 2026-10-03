// FUNCTION: BF2 0x4bbca0
namespace dice { namespace hfe {

class SpawnPoint {
public:
    void setSpawnGroupId(unsigned int);
};

void SpawnPoint::setSpawnGroupId(unsigned int value) {
    *(unsigned int*)((char*)this + 0x234) = value;
}

} }
