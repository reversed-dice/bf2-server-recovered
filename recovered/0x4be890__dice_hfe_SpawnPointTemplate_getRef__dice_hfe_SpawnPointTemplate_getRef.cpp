// FUNCTION: BF2 0x4be890
namespace dice { namespace hfe {

class SpawnPointTemplate {
public:
    int getRef();
};

int SpawnPointTemplate::getRef() {
    return *(int*)((char*)this + 0x70);
}

} }
