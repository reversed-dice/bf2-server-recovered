// FUNCTION: BF2 0x56aa70
namespace dice { namespace hfe { namespace world {
class UAVVehicle { public: void update(float dt); };
class UAVVehicleManager {
public:
    void update(float dt);
    char pad0[0x8];
    UAVVehicle* m_8;     // +0x8
    UAVVehicle* m_10;    // +0x10
    unsigned char m_18;  // +0x18
    unsigned char m_19;  // +0x19
};
void UAVVehicleManager::update(float dt)
{
    if (m_18 == 1)
        m_8->update(dt);
    if (m_19 == 1)
        m_10->update(dt);
}
}}}
