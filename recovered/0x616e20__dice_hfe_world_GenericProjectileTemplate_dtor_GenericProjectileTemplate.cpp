// FUNCTION: BF2 0x616e20
// dice_hfe_world_GenericProjectileTemplate_dtor_GenericProjectileTemplate (0x616e20)

#include <string>

struct Sub0 { virtual void f0(); char _pad[0x8]; };
struct Sub1 { virtual void f1(); char _pad[0x50]; };
struct Sub2 { virtual void f2(); char _pad[0x158]; };
struct Sub3 { virtual void f3(); char _pad[0x28]; };
struct Sub4 { virtual void f4(); };
struct Base0 : public Sub0, public Sub1, public Sub2, public Sub3, public Sub4 { virtual ~Base0(); };

class Klass_616e20 : public Base0 {
public:
    char _pad0x240[0x40];
    std::string m_0x240;
    char _pad0x250[0x8];
    std::string m_0x250;
    char _pad0x2a8[0x50];
    std::string m_0x2a8;
    std::string m_0x2b0;
    virtual ~Klass_616e20();
};

Klass_616e20::~Klass_616e20() {}

// REVERSED_FUNCTION: dice_hfe_world_GenericProjectileTemplate_dtor_GenericProjectileTemplate (0x616e20)