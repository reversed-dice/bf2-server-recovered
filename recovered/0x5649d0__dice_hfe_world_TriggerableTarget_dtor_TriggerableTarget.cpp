// FUNCTION: BF2 0x5649d0
// dice_hfe_world_TriggerableTarget_dtor_TriggerableTarget (0x5649d0)

#include <string>

struct Poly { virtual ~Poly(); };

struct Sub0 { virtual void f0(); char _pad[0xf8]; };
struct Sub1 { virtual void f1(); char _pad[0x130]; };
struct Sub2 { virtual void f2(); };
struct Base0 : public Sub0, public Sub1, public Sub2 { virtual ~Base0(); };

class Klass_5649d0 : public Base0 {
public:
    char _pad0x250[0x10];
    std::string m_0x250;
    char _pad0x2e8[0x90];
    Poly* m_0x2e8;
    Poly* m_0x2f0;
    Poly* m_0x2f8;
    virtual ~Klass_5649d0();
};

Klass_5649d0::~Klass_5649d0() { delete m_0x2e8; delete m_0x2f0; delete m_0x2f8; }

// REVERSED_FUNCTION: dice_hfe_world_TriggerableTarget_dtor_TriggerableTarget (0x5649d0)