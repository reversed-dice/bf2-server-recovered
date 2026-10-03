// FUNCTION: BF2 0x5a6710
namespace dice { namespace hfe { namespace world { namespace anonymous { namespace ns {
class ConsoleClass268 {
public:
    unsigned int m_unk_0x1;
    unsigned int m_unk_0x4;
    unsigned int m_unk_0x5;
    unsigned int m_unk_0x1C;
    unsigned char m_unk_0x21;
    unsigned char m_unk_0x24;
    unsigned int m_unk_0x2C;
    int m_unk_0x30;
    unsigned int* m_unk_0x38;
    unsigned char m_unk_0x108;
    unsigned char m_unk_0x109;
    unsigned int m_unk_0x10C;
};
} } } } }

namespace dice { namespace hfe { namespace world {

struct EmitFreqCallee {
    virtual void v0() = 0;
    virtual void v1() = 0;
    virtual void v2() = 0;
    virtual void v3() = 0;
    virtual void v4() = 0;
    virtual void v5() = 0;
    virtual void v6() = 0;
    virtual void v7() = 0;
    virtual void v8() = 0;
    virtual void v9() = 0;
    virtual void v10() = 0;
    virtual void v11() = 0;
    virtual void v12() = 0;
    virtual void v13() = 0;
    virtual void v14() = 0;
    virtual void v15() = 0;
    virtual void v16() = 0;
    virtual void v17() = 0;
    virtual void v18() = 0;
    virtual void v19() = 0;
    virtual void v20() = 0;
    virtual void v21() = 0;
    virtual void v22() = 0;
    virtual void v23() = 0;
    virtual void v24() = 0;
    virtual void v25() = 0;
};

class ParticleSystemTemplateBase {
public:
    unsigned char _pad_0x00[0x68];
    unsigned int m_unk_0x68;
    unsigned char _pad_0x6C[0x80 - 0x6C];
    long* m_unk_0x80;

    float getEmitFrequency() const;
};

float ParticleSystemTemplateBase::getEmitFrequency() const {
    ((EmitFreqCallee*)m_unk_0x80)->v25();
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_ParticleSystemTemplateBase::getEmitFrequency_const (0x5a6710)