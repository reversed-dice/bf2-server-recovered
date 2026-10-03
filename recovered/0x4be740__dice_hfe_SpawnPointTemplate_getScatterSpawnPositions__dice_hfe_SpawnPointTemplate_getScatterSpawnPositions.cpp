// FUNCTION: BF2 0x4be740
namespace dice { namespace hfe {

class SpawnPointTemplate {
public:
    unsigned char getScatterSpawnPositions();
};

unsigned char SpawnPointTemplate::getScatterSpawnPositions() {
    return *(unsigned char*)((char*)this + 0x94);
}

} }
