// FUNCTION: BF2 0x5a68b0
namespace dice { namespace hfe { namespace world {

struct ParticleSystemTemplateBase_AlignVtable {
    virtual void _pad0() = 0;
    virtual void _pad1() = 0;
    virtual void _pad2() = 0;
    virtual void _pad3() = 0;
    virtual void _pad4() = 0;
    virtual void _pad5() = 0;
    virtual void _pad6() = 0;
    virtual void _pad7() = 0;
    virtual void _pad8() = 0;
    virtual void _pad9() = 0;
    virtual void _pad10() = 0;
    virtual void _pad11() = 0;
    virtual void _pad12() = 0;
    virtual void _pad13() = 0;
    virtual void _pad14() = 0;
    virtual void _pad15() = 0;
    virtual void _pad16() = 0;
    virtual void _pad17() = 0;
    virtual void _pad18() = 0;
    virtual void _pad19() = 0;
    virtual void _pad20() = 0;
    virtual void _pad21() = 0;
    virtual void _pad22() = 0;
    virtual void _pad23() = 0;
    virtual void _pad24() = 0;
    virtual void _pad25() = 0;
    virtual void _pad26() = 0;
    virtual void _pad27() = 0;
    virtual void _pad28() = 0;
    virtual void _pad29() = 0;
    virtual void _pad30() = 0;
    virtual void _pad31() = 0;
    virtual void _pad32() = 0;
    virtual void _pad33() = 0;
    virtual void _pad34() = 0;
    virtual void _pad35() = 0;
    virtual void _pad36() = 0;
    virtual void _pad37() = 0;
    virtual void _pad38() = 0;
    virtual void _pad39() = 0;
    virtual void _pad40() = 0;
    virtual void _pad41() = 0;
    virtual void _pad42() = 0;
    virtual unsigned char getAlignRotationToSpeed() = 0;
};

class ParticleSystemTemplateBase {
public:
    char __pad0[0x68];
    unsigned int m_unk_0x68;
    char __pad1[0x14];
    long * m_unk_0x80;
    unsigned int getAlignRotationToSpeed() const;
};

unsigned int ParticleSystemTemplateBase::getAlignRotationToSpeed() const {
    return ((ParticleSystemTemplateBase_AlignVtable*)this->m_unk_0x80)->getAlignRotationToSpeed();
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_ParticleSystemTemplateBase::getAlignRotationToSpeed_const (0x5a68b0)