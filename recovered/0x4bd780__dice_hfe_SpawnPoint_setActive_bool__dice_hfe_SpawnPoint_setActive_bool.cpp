// FUNCTION: BF2 0x4bd780
namespace dice { namespace hfe {

class SpawnPoint {
public:
    void setActive(unsigned char);
};

void SpawnPoint::setActive(unsigned char value) {
    *(unsigned char*)((char*)this + 0x23c) = value;
}

} }
