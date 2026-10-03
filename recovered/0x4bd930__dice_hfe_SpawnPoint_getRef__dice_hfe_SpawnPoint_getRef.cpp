// FUNCTION: BF2 0x4bd930
namespace dice { namespace hfe {

class SpawnPoint {
public:
    int getRef();
};

int SpawnPoint::getRef() {
    return *(int*)((char*)this + 0x220);
}

} }
