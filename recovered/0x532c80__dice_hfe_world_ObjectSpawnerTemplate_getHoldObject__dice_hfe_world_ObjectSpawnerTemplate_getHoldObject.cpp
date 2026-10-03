// FUNCTION: BF2 0x532c80
namespace dice { namespace hfe { namespace world {

class ObjectSpawnerTemplate {
public:
    unsigned char getHoldObject();
};

unsigned char ObjectSpawnerTemplate::getHoldObject() {
    return *(unsigned char*)((char*)this + 0x248);
}

} } }
