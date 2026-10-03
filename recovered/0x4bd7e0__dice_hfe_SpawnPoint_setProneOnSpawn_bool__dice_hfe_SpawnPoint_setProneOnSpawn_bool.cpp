// FUNCTION: BF2 0x4bd7e0
namespace dice { namespace hfe {

class SpawnPoint {
public:
    void setProneOnSpawn(unsigned char);
};

void SpawnPoint::setProneOnSpawn(unsigned char value) {
    *(unsigned char*)((char*)this + 0x24d) = value;
}

} }
