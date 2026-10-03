// FUNCTION: BF2 0x4be680
namespace dice { namespace hfe {

class SpawnPointTemplate {
public:
    unsigned char getAIEnterOnSpawn();
};

unsigned char SpawnPointTemplate::getAIEnterOnSpawn() {
    return *(unsigned char*)((char*)this + 0x8e);
}

} }
