// FUNCTION: BF2 0x4be780
namespace dice { namespace hfe {

class SpawnPointTemplate {
public:
    unsigned char getOnlyForAI() const;
};

unsigned char SpawnPointTemplate::getOnlyForAI() const {
    return *(unsigned char*)((char*)this + 0x96);
}

} }
