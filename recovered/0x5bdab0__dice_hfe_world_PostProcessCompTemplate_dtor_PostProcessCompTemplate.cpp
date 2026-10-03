// FUNCTION: BF2 0x5bdab0
// dice_hfe_world_PostProcessCompTemplate_dtor_PostProcessCompTemplate (0x5bdab0)

#include <string>

struct Base0 { virtual void f0(); };
struct Base1 { virtual void f1(); };

class Klass_5bdab0 : public Base0, public Base1 {
public:
    char _pad0x18[0x8];
    std::string m_0x18;
    std::string m_0x20;
    virtual ~Klass_5bdab0();
};

Klass_5bdab0::~Klass_5bdab0() {}

// REVERSED_FUNCTION: dice_hfe_world_PostProcessCompTemplate_dtor_PostProcessCompTemplate (0x5bdab0)