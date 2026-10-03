// FUNCTION: BF2 0x532660
namespace dice { namespace hfe { namespace world {

class ObjectSpawner {
public:
    int getTeam();
};

int ObjectSpawner::getTeam() {
    return *(int*)((char*)this + 0x2bc);
}

} } }
