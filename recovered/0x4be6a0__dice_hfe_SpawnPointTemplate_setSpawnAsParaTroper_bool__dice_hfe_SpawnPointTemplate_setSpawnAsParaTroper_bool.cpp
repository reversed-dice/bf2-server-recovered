// FUNCTION: BF2 0x4be6a0
namespace dice { namespace hfe {

class SpawnPointTemplate {
public:
    void setSpawnAsParaTroper(unsigned char);
};

void SpawnPointTemplate::setSpawnAsParaTroper(unsigned char value) {
    *(unsigned char*)((char*)this + 0x8f) = value;
}

} }
