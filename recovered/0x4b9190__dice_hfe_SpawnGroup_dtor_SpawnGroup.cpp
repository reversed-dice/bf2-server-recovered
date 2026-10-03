// FUNCTION: BF2 0x4b9190
// dice_hfe_SpawnGroup_dtor_SpawnGroup (0x4b9190)

#include <string>

struct Pod { ~Pod() {} int _p; };
struct Arr { int _a; };

struct Base0 { virtual ~Base0(); };
struct Base1 { virtual ~Base1(); };

class Klass_4b9190 : public Base0, public Base1 {
public:
    char _pad0x70[0x60];
    std::string m_0x70;
    char _pad0x80[0x8];
    Pod* m_0x80;
    char _pad0xb0[0x28];
    Arr* m_0xb0;
    virtual ~Klass_4b9190();
};

Klass_4b9190::~Klass_4b9190() { delete[] m_0xb0; delete m_0x80; }

// REVERSED_FUNCTION: dice_hfe_SpawnGroup_dtor_SpawnGroup (0x4b9190)