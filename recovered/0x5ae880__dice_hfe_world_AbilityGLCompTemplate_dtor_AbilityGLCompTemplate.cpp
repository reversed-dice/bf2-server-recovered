// FUNCTION: BF2 0x5ae880
// dice_hfe_world_AbilityGLCompTemplate_dtor_AbilityGLCompTemplate (0x5ae880)

#include <string>

struct Base0 { virtual void f0(); };
struct Base1 { virtual void f1(); };

class Klass_5ae880 : public Base0, public Base1 {
public:
    char _pad0x20[0x10];
    std::string m_0x20;
    std::string m_0x28;
    virtual ~Klass_5ae880();
};

Klass_5ae880::~Klass_5ae880() {}

// REVERSED_FUNCTION: dice_hfe_world_AbilityGLCompTemplate_dtor_AbilityGLCompTemplate (0x5ae880)