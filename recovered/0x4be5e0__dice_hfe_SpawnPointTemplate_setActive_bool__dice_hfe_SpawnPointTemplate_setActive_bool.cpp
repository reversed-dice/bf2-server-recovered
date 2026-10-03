// FUNCTION: BF2 0x4be5e0
namespace dice { namespace hfe {

class SpawnPointTemplate {
public:
    void setActive(unsigned char);
};

void SpawnPointTemplate::setActive(unsigned char value) {
    *(unsigned char*)((char*)this + 0x8c) = value;
}

} }
