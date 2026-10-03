// FUNCTION: BF2 0x532ae0
namespace dice { namespace hfe { namespace world {

class ObjectSpawnerTemplate {
public:
    unsigned char getActiveOnStart();
};

unsigned char ObjectSpawnerTemplate::getActiveOnStart() {
    return *(unsigned char*)((char*)this + 0x24c);
}

} } }
