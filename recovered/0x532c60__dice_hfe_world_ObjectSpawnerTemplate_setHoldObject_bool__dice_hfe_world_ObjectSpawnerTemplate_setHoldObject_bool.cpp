// FUNCTION: BF2 0x532c60
namespace dice { namespace hfe { namespace world {

class ObjectSpawnerTemplate {
public:
    void setHoldObject(unsigned char);
};

void ObjectSpawnerTemplate::setHoldObject(unsigned char value) {
    *(unsigned char*)((char*)this + 0x248) = value;
}

} } }
