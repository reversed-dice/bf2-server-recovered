// FUNCTION: BF2 0x621240

class dice_hfe_world_FixedTargetComp {
public:
    unsigned char  __pad_00[0x38];
    void*    m_pTargetData;               // offset 0x38 — pointer to target configuration

    struct TargetData {
        unsigned char   __pad_00[0x14];
        unsigned int  m_targetType;           // offset 0x14 — target type enum
    };

    unsigned int getTargetType() const;
};

unsigned int dice_hfe_world_FixedTargetComp::getTargetType() const {
    return reinterpret_cast<const TargetData*>(m_pTargetData)->m_targetType;
}

// REVERSED_FUNCTION: dice_hfe_world_FixedTargetComp::getTargetType (0x00621240)