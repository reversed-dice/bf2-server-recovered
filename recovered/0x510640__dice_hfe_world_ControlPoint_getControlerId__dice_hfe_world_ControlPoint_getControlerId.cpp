// FUNCTION: BF2 0x510640
namespace dice { namespace hfe { namespace world {

struct ControlPointData {
    char _pad0[0x218];
    unsigned int m_controllerId; // offset 0x218
};

class ControlPoint {
public:
    unsigned int getControlerId() const;

private:
    char _pad0[0x248];
    ControlPointData* m_pControlData; // offset 0x248
};

unsigned int ControlPoint::getControlerId() const {
    return m_pControlData->m_controllerId;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_ControlPoint_getControlerId (0x510640)