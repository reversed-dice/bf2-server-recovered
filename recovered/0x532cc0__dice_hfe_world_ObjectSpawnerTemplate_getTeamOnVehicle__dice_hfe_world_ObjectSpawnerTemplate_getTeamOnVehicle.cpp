// FUNCTION: BF2 0x532cc0
namespace dice { namespace hfe { namespace world {

class ObjectSpawnerTemplate {
public:
    unsigned char getTeamOnVehicle();
};

unsigned char ObjectSpawnerTemplate::getTeamOnVehicle() {
    return *(unsigned char*)((char*)this + 0x249);
}

} } }
