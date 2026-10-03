// FUNCTION: BF2 0x4be760
namespace dice { namespace hfe {

class SpawnPointTemplate {
public:
    void setOnlyForAI(unsigned char);
};

void SpawnPointTemplate::setOnlyForAI(unsigned char value) {
    *(unsigned char*)((char*)this + 0x96) = value;
}

} }
