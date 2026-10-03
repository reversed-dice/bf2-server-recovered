// FUNCTION: BF2 0x4be5c0
namespace dice { namespace hfe {

class SpawnPointTemplate {
public:
    int getControlPointId() const;
};

int SpawnPointTemplate::getControlPointId() const {
    return *(int*)((char*)this + 0x88);
}

} }
