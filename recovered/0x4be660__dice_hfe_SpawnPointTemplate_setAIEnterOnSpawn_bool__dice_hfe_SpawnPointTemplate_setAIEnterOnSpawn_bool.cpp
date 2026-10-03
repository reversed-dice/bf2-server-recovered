// FUNCTION: BF2 0x4be660
namespace dice { namespace hfe {

class SpawnPointTemplate {
public:
    void setAIEnterOnSpawn(unsigned char);
};

void SpawnPointTemplate::setAIEnterOnSpawn(unsigned char value) {
    *(unsigned char*)((char*)this + 0x8e) = value;
}

} }
