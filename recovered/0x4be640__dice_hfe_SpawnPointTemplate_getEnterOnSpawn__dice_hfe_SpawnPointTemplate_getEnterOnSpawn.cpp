// FUNCTION: BF2 0x4be640
namespace dice { namespace hfe {

class SpawnPointTemplate {
public:
    unsigned char getEnterOnSpawn();
};

unsigned char SpawnPointTemplate::getEnterOnSpawn() {
    return *(unsigned char*)((char*)this + 0x8d);
}

} }
