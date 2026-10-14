// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x5e8650
#include <cstddef>
#include <string>
#include <iostream>

extern char DAT_00bb25f1;

namespace dice { namespace hfe {

enum DebugType {
    DebugType_Error = 6
};

class Debug {
    char _pad[0x20];
    char _stream[0x160];
public:
    Debug(DebugType type, std::string const& file, int line, std::string const& func = "");
    ~Debug();
    template <typename T>
    std::ostream& operator<<(T const& val) {
        return *(std::ostream*)(_stream) << val;
    }
};

namespace world {

class Aux {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual void d9();
    virtual void d10();
    virtual void d11();
    virtual void d12();
    virtual void d13();
    virtual void d14();
    virtual void d15();
    virtual void d16();
    virtual void d17();
    virtual void d18();
    virtual void d19();
    virtual void d20();
    virtual void d21();
    virtual void d22();
    virtual void d23();
    virtual void d24();
    virtual void d25();
    virtual void d26();
    virtual void d27();
    virtual void d28();
    virtual void d29();
    virtual void d30();
    virtual void d31();
    virtual void d32();
    virtual void d33();
    virtual void d34();
    virtual void d35();
    virtual void d36();
    virtual void d37();
    virtual void d38();
    virtual void d39();
    virtual void d40();
    virtual void d41();
    virtual void d42();
    virtual void d43();
    virtual void d44();
    virtual void d45();
    virtual void d46();
    virtual void d47();
    virtual void d48();
    virtual void d49();
    virtual void d50();
    virtual void d51();
    virtual void d52();
    virtual void* f0x1a8();
};

class GF {
public:
    char m_pad[0x400];
};

void* getProjectileOrigin(GF* self)
{
    Aux* c = *(Aux**)((char*)self + 0x290);
    if (c == 0) {
        Debug(DebugType(6), std::string("Game/Objects/Weapons/GenericFireArm.cpp"), 0x99a, std::string(&DAT_00bb25f1)) << "Output dummy";
        char* p = (char*)operator new(0x40);
        char* q = p;
        for (long i = 3; i != -1; --i) {
            *(unsigned*)(q + 0x0) = 0;
            *(unsigned*)(q + 0x4) = 0;
            *(unsigned*)(q + 0x8) = 0;
            *(unsigned*)(q + 0xc) = 0;
            q += 0x10;
        }
        *(float*)(p + 0x3c) = 1.0f;
        *(float*)(p + 0x28) = 1.0f;
        *(float*)(p + 0x14) = 1.0f;
        *(float*)(p + 0x00) = 1.0f;
        return p;
    }
    return c->f0x1a8();
}

} } }
