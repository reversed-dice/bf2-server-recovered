// FUNCTION: BF2 0x532aa0
namespace dice { namespace hfe { namespace world {

class ObjectSpawnerTemplate {
public:
    int getTeam();
};

int ObjectSpawnerTemplate::getTeam() {
    return *(int*)((char*)this + 0x220);
}

} } }
