// FUNCTION: BF2 0x4be5a0
namespace dice { namespace hfe {

class SpawnPointTemplate {
public:
    void setControlPointId(unsigned int);
};

void SpawnPointTemplate::setControlPointId(unsigned int value) {
    *(unsigned int*)((char*)this + 0x88) = value;
}

} }
