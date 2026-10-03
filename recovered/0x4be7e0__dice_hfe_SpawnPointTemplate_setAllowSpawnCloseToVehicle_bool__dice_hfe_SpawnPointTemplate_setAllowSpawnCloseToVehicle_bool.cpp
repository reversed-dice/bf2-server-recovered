// FUNCTION: BF2 0x4be7e0
namespace dice { namespace hfe {

class SpawnPointTemplate {
public:
    void setAllowSpawnCloseToVehicle(unsigned char);
};

void SpawnPointTemplate::setAllowSpawnCloseToVehicle(unsigned char value) {
    *(unsigned char*)((char*)this + 0x97) = value;
}

} }
