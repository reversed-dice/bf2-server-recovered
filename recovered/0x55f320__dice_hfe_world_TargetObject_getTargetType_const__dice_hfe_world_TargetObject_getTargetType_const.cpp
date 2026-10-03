// FUNCTION: BF2 0x55f320
namespace dice { namespace hfe { namespace world {

struct TargetObjectData {
    unsigned char _pad0[0x1f4];
    unsigned int targetType;
};

class TargetObject {
    unsigned char _pad0[0x238];
    TargetObjectData* m_data;

public:
    unsigned int getTargetType() const;
};

unsigned int TargetObject::getTargetType() const {
    return m_data->targetType;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_TargetObject_getTargetType_const (0x55f320)