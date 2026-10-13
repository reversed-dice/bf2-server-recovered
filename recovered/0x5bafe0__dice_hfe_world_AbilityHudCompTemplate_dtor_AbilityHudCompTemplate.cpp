// BF2_FLAGS: -fno-strict-aliasing
// dice_hfe_world_AbilityHudCompTemplate_dtor_AbilityHudCompTemplate (0x5bafe0)
#include <string>
struct Base0 { virtual void f0(); };
struct Base1 { virtual void f1(); };
struct Inner_5bb570 { std::string m_0x0; std::string m_0x8; std::string m_0x10; };
class Klass_5bb570 : public Base0, public Base1 {
public:
    char _pad0x18[0x8];
    Inner_5bb570 m_0x18;
    std::string m_0x30;
    std::string m_0x38;
    virtual ~Klass_5bb570();
};
Klass_5bb570::~Klass_5bb570() {}
// FUNCTION: BF2 0x5bafe0
