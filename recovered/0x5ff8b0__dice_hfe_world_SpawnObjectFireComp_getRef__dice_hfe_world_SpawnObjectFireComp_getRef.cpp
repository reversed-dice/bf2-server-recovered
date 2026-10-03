// FUNCTION: BF2 0x5ff8b0
namespace dice { namespace hfe { namespace world {

class SpawnObjectFireComp {
public:
    int getRef();
};

int SpawnObjectFireComp::getRef() {
    return *(int*)((char*)this + 0x190);
}

} } }
