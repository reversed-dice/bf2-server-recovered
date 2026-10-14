// FUNCTION: BF2 0x5149a0
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <vector>

namespace dice { namespace hfe { namespace world {

struct Sub0 { virtual void f0(); char _pad[0x8]; };
struct Sub1 { virtual void f1(); char _pad[0x50]; };
struct Sub2 { virtual void f2(); char _pad[0x158]; };
struct Sub3 { virtual void f3(); char _pad[0x28]; };
struct Sub4 { virtual void f4(); };
struct Base0 : public Sub0, public Sub1, public Sub2, public Sub3, public Sub4 { virtual ~Base0(); };

struct Slot { void* p; ~Slot() {} };

class ControlPointTemplate : public Base0 {
public:
    char _pad0x210[0x10];
    std::string m_0x210;
    char _pad0x250[0x38];
    std::vector<Slot> m_0x250[2];
    char _pad0x298[0x18];
    std::string m_0x298[3];
    virtual ~ControlPointTemplate();
};

ControlPointTemplate::~ControlPointTemplate() {}

} } }
