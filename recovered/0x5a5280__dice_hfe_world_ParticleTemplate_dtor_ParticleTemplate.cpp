// FUNCTION: BF2 0x5a5280
// dice_hfe_world_ParticleTemplate_dtor_ParticleTemplate (0x5a5280)

#include <string>
#include <vector>

struct Elem838 { std::string s; char _p[0x8]; };

struct Sub0 { virtual void f0(); char _pad[0x8]; };
struct Sub1 { virtual void f1(); char _pad[0x50]; };
struct Sub2 { virtual void f2(); };
struct Base0 : public Sub0, public Sub1, public Sub2 { virtual ~Base0(); };

class Klass_5a5280 : public Base0 {
public:
    char _pad0x78[0x8];
    std::string m_0x78;
    char _pad0x88[0x8];
    std::string m_0x88;
    char _pad0x838[0x7a8];
    std::vector<Elem838> m_0x838;
    char _pad0x858[0x8];
    std::string m_0x858;
    virtual ~Klass_5a5280();
};

Klass_5a5280::~Klass_5a5280() {}

// REVERSED_FUNCTION: dice_hfe_world_ParticleTemplate_dtor_ParticleTemplate (0x5a5280)