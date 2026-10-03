// FUNCTION: BF2 0x4be620
namespace dice { namespace hfe {

class SpawnPointTemplate {
public:
    void setEnterOnSpawn(unsigned char);
};

void SpawnPointTemplate::setEnterOnSpawn(unsigned char value) {
    *(unsigned char*)((char*)this + 0x8d) = value;
}

} }
