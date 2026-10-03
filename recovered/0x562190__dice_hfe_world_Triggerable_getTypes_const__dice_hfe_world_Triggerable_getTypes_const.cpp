// FUNCTION: BF2 0x562190
namespace dice { namespace hfe { namespace world {

class TriggerableManager {
private:
    unsigned char m_pad0[0x208];
public:
    unsigned int m_types;
};

class Triggerable {
public:
    unsigned int getTypes() const;
private:
    unsigned char m_pad0[0x248];
    TriggerableManager* m_manager;
};

unsigned int Triggerable::getTypes() const {
    return m_manager->m_types;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_Triggerable_getTypes_const (0x562190)