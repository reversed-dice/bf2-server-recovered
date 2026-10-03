// FUNCTION: BF2 0x532ca0
namespace dice { namespace hfe { namespace world {

class ObjectSpawnerTemplate {
public:
    void setTeamOnVehicle(unsigned char);
};

void ObjectSpawnerTemplate::setTeamOnVehicle(unsigned char value) {
    *(unsigned char*)((char*)this + 0x249) = value;
}

} } }
