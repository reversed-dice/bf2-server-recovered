// FUNCTION: BF2 0x5a8150
// dice_hfe_world_ParticleSystemTemplateBase_dtor_ParticleSystemTemplateBase (0x5a8150)

#include <string>

struct Sub0 { virtual void f0(); char _pad[0x8]; };
struct Sub1 { virtual void f1(); };
struct Base0 : public Sub0, public Sub1 { virtual ~Base0(); };

class Klass_5a8150 : public Base0 {
public:
    char _pad0x70[0x58];
    std::string m_0x70;
    std::string m_0x78;
    virtual ~Klass_5a8150();
};

Klass_5a8150::~Klass_5a8150() {}

// REVERSED_FUNCTION: dice_hfe_world_ParticleSystemTemplateBase_dtor_ParticleSystemTemplateBase (0x5a8150)