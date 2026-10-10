// BF2_FLAGS: -fno-schedule-insns
// FUNCTION: BF2 0x54e960
extern "C" void fn_407af8(void) __attribute__((noreturn));

struct PoseCam {
    float m_x;
    float m_y;
    float m_z;
};

struct PoseHolder {
    char m_pad[0x228];
    PoseCam m_poses[1];
};

struct Soldier {
    char m_pad0[0x258];
    PoseHolder* m_holder;
};

PoseCam* dice_hfe_world_Soldier_getPoseCameraPosition_int_const(Soldier* self, int i)
{
    if (i > 3)
        fn_407af8();
    PoseHolder* h = self->m_holder;
    return &h->m_poses[i];
}
