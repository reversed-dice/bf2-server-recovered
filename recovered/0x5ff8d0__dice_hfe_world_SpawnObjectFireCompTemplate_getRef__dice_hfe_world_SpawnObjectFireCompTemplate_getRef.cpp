// FUNCTION: BF2 0x5ff8d0
namespace dice { namespace hfe { namespace world {

class SpawnObjectFireCompTemplate {
public:
    int getRef();
};

int SpawnObjectFireCompTemplate::getRef() {
    return *(int*)((char*)this + 0xb4);
}

} } }
