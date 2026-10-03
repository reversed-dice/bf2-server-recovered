// FUNCTION: BF2 0x801780
// dice_hfe_io_UnixFileSystem_dtor_UnixFileSystem (0x801780)

#include <string>

struct Base0 { virtual void f0(); };

class Klass_801780 : public Base0 {
public:
    char _pad0x10[0x8];
    std::string m_0x10;
    std::string m_0x18;
    std::string m_0x20;
    std::string m_0x28;
    virtual ~Klass_801780();
};

Klass_801780::~Klass_801780() {}

// REVERSED_FUNCTION: dice_hfe_io_UnixFileSystem_dtor_UnixFileSystem (0x801780)