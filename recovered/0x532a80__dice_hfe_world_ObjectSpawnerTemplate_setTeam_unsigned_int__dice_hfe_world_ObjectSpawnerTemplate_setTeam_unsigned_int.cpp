// FUNCTION: BF2 0x532a80
namespace dice { namespace hfe { namespace world {

class ObjectSpawnerTemplate {
public:
    void setTeam(unsigned int);
};

void ObjectSpawnerTemplate::setTeam(unsigned int value) {
    *(unsigned int*)((char*)this + 0x220) = value;
}

} } }
