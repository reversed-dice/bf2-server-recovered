// FUNCTION: BF2 0x5bad50
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe {
struct BFSound {
    virtual void s0();  virtual void s1();  virtual void s2();  virtual void s3();
    virtual void s4();  virtual void s5();  virtual void s6();  virtual void s7();
    virtual void s8();  virtual void s9();  virtual void s10(); virtual void s11();
    virtual void stopSound(void* h);   // vtable offset 0x60
};
extern BFSound* g_bfSound;
namespace world {
struct AbilityHudComp {
    char  pad00[0x10];
    char* m_10;        // 0x10
    char  pad18[0x9];  // 0x18
    bool  m_21;        // 0x21
    char  pad22[0x1];  // 0x22
    bool  m_23;        // 0x23
    char  pad24[0x1];  // 0x24
    bool  m_25;        // 0x25
};
void dice_hfe_world_AbilityHudComp_forceStopAllSound(AbilityHudComp* self)
{
    g_bfSound->stopSound(self->m_10 + 0x20);
    self->m_21 = false;
    g_bfSound->stopSound(self->m_10 + 0x18);
    self->m_23 = false;
    g_bfSound->stopSound(self->m_10 + 0x28);
    self->m_25 = false;
}
}}}
