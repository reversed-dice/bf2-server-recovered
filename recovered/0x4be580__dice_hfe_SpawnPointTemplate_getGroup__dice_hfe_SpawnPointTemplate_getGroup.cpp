// FUNCTION: BF2 0x4be580
namespace dice { namespace hfe {

class SpawnPointTemplate {
public:
    int getGroup();
};

int SpawnPointTemplate::getGroup() {
    return *(int*)((char*)this + 0x84);
}

} }
