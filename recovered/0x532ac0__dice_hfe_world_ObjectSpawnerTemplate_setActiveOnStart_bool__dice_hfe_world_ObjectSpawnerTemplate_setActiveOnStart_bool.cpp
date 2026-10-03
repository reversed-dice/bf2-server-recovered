// FUNCTION: BF2 0x532ac0
namespace dice { namespace hfe { namespace world {

class ObjectSpawnerTemplate {
public:
    void setActiveOnStart(unsigned char);
};

void ObjectSpawnerTemplate::setActiveOnStart(unsigned char value) {
    *(unsigned char*)((char*)this + 0x24c) = value;
}

} } }
