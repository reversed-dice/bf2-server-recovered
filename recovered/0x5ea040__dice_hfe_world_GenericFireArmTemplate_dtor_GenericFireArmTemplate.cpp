// FUNCTION: BF2 0x5ea040
// dice_hfe_world_GenericFireArmTemplate_dtor_GenericFireArmTemplate (0x5ea040)

#include <string>

struct Sub0 { virtual void f0(); char _pad[0x8]; };
struct Sub1 { virtual void f1(); char _pad[0x50]; };
struct Sub2 { virtual void f2(); char _pad[0x158]; };
struct Sub3 { virtual void f3(); char _pad[0x48]; };
struct Sub4 { virtual void f4(); };
struct Base0 : public Sub0, public Sub1, public Sub2, public Sub3, public Sub4 { virtual ~Base0(); };

class Klass_5ea040 : public Base0 {
public:
    char _pad0x260[0x40];
    std::string m_0x260;
    std::string m_0x268;
    char _pad0x290[0x20];
    std::string m_0x290;
    virtual ~Klass_5ea040();
};

Klass_5ea040::~Klass_5ea040() {}

// REVERSED_FUNCTION: dice_hfe_world_GenericFireArmTemplate_dtor_GenericFireArmTemplate (0x5ea040)