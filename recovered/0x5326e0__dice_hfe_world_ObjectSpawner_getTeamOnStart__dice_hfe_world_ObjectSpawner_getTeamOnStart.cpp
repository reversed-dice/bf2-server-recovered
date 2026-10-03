// FUNCTION: BF2 0x5326e0
namespace dice { namespace hfe { namespace world {

class ObjectSpawner {
public:
    int getTeamOnStart();
};

int ObjectSpawner::getTeamOnStart() {
    return *(int*)((char*)this + 0x2c0);
}

} } }
