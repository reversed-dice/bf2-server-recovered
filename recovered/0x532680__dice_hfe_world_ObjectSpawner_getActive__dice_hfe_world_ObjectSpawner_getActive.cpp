// FUNCTION: BF2 0x532680
namespace dice { namespace hfe { namespace world {

class ObjectSpawner {
public:
    unsigned char getActive();
};

unsigned char ObjectSpawner::getActive() {
    return *(unsigned char*)((char*)this + 0x2b8);
}

} } }
