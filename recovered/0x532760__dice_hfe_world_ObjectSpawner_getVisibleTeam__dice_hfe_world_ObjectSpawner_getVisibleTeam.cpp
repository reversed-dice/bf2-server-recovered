// FUNCTION: BF2 0x532760
namespace dice { namespace hfe { namespace world {

class ObjectSpawner {
public:
    int getVisibleTeam();
};

int ObjectSpawner::getVisibleTeam() {
    return *(int*)((char*)this + 0x31c);
}

} } }
