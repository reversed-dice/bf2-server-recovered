// FUNCTION: BF2 0x640400
// dice_hfe_world_LightSourceTemplate_dtor_LightSourceTemplate (0x640400)

#include <string>

struct Poly1 { virtual void p0(); virtual ~Poly1(); };

struct Sub0 { virtual void f0(); char _pad[0x8]; };
struct Sub1 { virtual void f1(); };
struct Base0 : public Sub0, public Sub1 { virtual ~Base0(); };

class Klass_640400 : public Base0 {
public:
    char _pad0x80[0x68];
    std::string m_0x80;
    char _pad0xe0[0x58];
    std::string m_0xe0;
    char _pad0x108[0x20];
    Poly1* m_0x108;
    char _pad0x120[0x10];
    std::string m_0x120;
    virtual ~Klass_640400();
};

Klass_640400::~Klass_640400() { delete m_0x108; }

// REVERSED_FUNCTION: dice_hfe_world_LightSourceTemplate_dtor_LightSourceTemplate (0x640400)