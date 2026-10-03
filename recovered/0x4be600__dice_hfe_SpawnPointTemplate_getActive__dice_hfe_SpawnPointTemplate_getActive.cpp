// FUNCTION: BF2 0x4be600
namespace dice { namespace hfe {

class SpawnPointTemplate {
public:
    unsigned char getActive();
};

unsigned char SpawnPointTemplate::getActive() {
    return *(unsigned char*)((char*)this + 0x8c);
}

} }
