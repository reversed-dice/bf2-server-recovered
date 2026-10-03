// FUNCTION: BF2 0x532720
namespace dice { namespace hfe { namespace world {

class ObjectSpawner {
public:
    int getControlPointId();
};

int ObjectSpawner::getControlPointId() {
    return *(int*)((char*)this + 0x278);
}

} } }
