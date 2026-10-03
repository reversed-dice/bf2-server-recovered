// FUNCTION: BF2 0x4bd7a0
namespace dice { namespace hfe {

class SpawnPoint {
public:
    void setOverrideEnterOnSpawn(unsigned char);
};

void SpawnPoint::setOverrideEnterOnSpawn(unsigned char value) {
    *(unsigned char*)((char*)this + 0x24c) = value;
}

} }
