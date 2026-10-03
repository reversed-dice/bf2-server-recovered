// FUNCTION: BF2 0x532740
namespace dice { namespace hfe { namespace world {

class ObjectSpawner {
public:
    void setVisibleTeam(unsigned int);
};

void ObjectSpawner::setVisibleTeam(unsigned int value) {
    *(unsigned int*)((char*)this + 0x31c) = value;
}

} } }
