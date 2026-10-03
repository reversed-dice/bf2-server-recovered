// FUNCTION: BF2 0x4be800
namespace dice { namespace hfe {

class SpawnPointTemplate {
public:
    unsigned char getAllowSpawnCloseToVehicle() const;
};

unsigned char SpawnPointTemplate::getAllowSpawnCloseToVehicle() const {
    return *(unsigned char*)((char*)this + 0x97);
}

} }
