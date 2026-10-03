// FUNCTION: BF2 0x4bd7c0
namespace dice { namespace hfe {

class SpawnPoint {
public:
    unsigned char getOverrideEnterOnSpawn();
};

unsigned char SpawnPoint::getOverrideEnterOnSpawn() {
    return *(unsigned char*)((char*)this + 0x24c);
}

} }
