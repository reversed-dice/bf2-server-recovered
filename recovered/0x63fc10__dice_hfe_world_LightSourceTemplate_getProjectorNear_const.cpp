// FUNCTION: BF2 0x63fc10

class dice_hfe_world_LightSourceTemplate {
public:
    unsigned char __pad_00[0xF0];
    float   m_projectorNear;              // offset 0xF0 — projector near-plane distance

    float getProjectorNear() const;
};

float dice_hfe_world_LightSourceTemplate::getProjectorNear() const {
    return m_projectorNear;
}

// REVERSED_FUNCTION: dice_hfe_world_LightSourceTemplate::getProjectorNear (0x0063fc10)