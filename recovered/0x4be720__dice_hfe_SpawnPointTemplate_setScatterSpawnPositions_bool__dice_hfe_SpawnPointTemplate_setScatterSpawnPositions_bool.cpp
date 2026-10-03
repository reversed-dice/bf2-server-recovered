// FUNCTION: BF2 0x4be720
namespace dice { namespace hfe {

class SpawnPointTemplate {
public:
    void setScatterSpawnPositions(unsigned char);
};

void SpawnPointTemplate::setScatterSpawnPositions(unsigned char value) {
    *(unsigned char*)((char*)this + 0x94) = value;
}

} }
