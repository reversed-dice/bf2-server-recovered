// FUNCTION: BF2 0x5a82a0
// dice_hfe_world_ParticleSystemTemplateBase_dtor_ParticleSystemTemplateBase (0x5a82a0)

#include <string>

struct Sub0 { virtual void f0(); char _pad[0x8]; };
struct Sub1 { virtual void f1(); };
struct Base0 : public Sub0, public Sub1 { virtual ~Base0(); };

class Klass_5a82a0 : public Base0 {
public:
    char _pad0x70[0x58];
    std::string m_0x70;
    std::string m_0x78;
    virtual ~Klass_5a82a0();
};

Klass_5a82a0::~Klass_5a82a0() {}

// REVERSED_FUNCTION: dice_hfe_world_ParticleSystemTemplateBase_dtor_ParticleSystemTemplateBase (0x5a82a0)