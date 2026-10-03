// FUNCTION: BF2 0x4bb0b0
namespace dice { namespace hfe {

class SpawnGroup {
public:
    int getRef();
};

int SpawnGroup::getRef() {
    return *(int*)((char*)this + 0x58);
}

} }
