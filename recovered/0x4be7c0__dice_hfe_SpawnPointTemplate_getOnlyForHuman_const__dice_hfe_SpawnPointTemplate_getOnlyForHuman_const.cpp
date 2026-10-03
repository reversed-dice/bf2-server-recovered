// FUNCTION: BF2 0x4be7c0
namespace dice { namespace hfe {

class SpawnPointTemplate {
public:
    unsigned char getOnlyForHuman() const;
};

unsigned char SpawnPointTemplate::getOnlyForHuman() const {
    return *(unsigned char*)((char*)this + 0x95);
}

} }
