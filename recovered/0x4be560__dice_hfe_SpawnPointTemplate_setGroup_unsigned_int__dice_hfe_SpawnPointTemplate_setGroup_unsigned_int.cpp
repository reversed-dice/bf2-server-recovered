// FUNCTION: BF2 0x4be560
namespace dice { namespace hfe {

class SpawnPointTemplate {
public:
    void setGroup(unsigned int);
};

void SpawnPointTemplate::setGroup(unsigned int value) {
    *(unsigned int*)((char*)this + 0x84) = value;
}

} }
