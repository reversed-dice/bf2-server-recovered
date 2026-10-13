// BF2_FLAGS: -fno-strict-aliasing
// dice_hfe_world_WarningHudCompTemplate_dtor_WarningHudCompTemplate (0x5c2d00)
#include <string>
struct Base0 { virtual void f0(); };
struct Base1 { virtual void f1(); };
struct InnerA { std::string m_0x0; std::string m_0x8; };
class Klass_5c2f80 : public Base0, public Base1 {
public:
    char _pad0x18[0x8];
    std::string m_0x18;
    std::string m_0x20;
    InnerA m_0x28;
    char _pad0x38[0x8];
    std::string m_0x40;
    virtual ~Klass_5c2f80();
};
Klass_5c2f80::~Klass_5c2f80() {}
// FUNCTION: BF2 0x5c2d00
