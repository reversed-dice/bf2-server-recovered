// FUNCTION: BF2 0x4be6c0
namespace dice { namespace hfe {

class SpawnPointTemplate {
public:
    unsigned char getSpawnAsParaTroper();
};

unsigned char SpawnPointTemplate::getSpawnAsParaTroper() {
    return *(unsigned char*)((char*)this + 0x8f);
}

} }
