// FUNCTION: BF2 0x4be7a0
namespace dice { namespace hfe {

class SpawnPointTemplate {
public:
    void setOnlyForHuman(unsigned char);
};

void SpawnPointTemplate::setOnlyForHuman(unsigned char value) {
    *(unsigned char*)((char*)this + 0x95) = value;
}

} }
