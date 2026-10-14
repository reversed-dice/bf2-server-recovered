// FUNCTION: BF2 0x5e84e0
#include <cstddef>
#include <string>
#include <iostream>

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

extern const unsigned int IID_IWeaponRecoilComp;

class Aux {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual Aux* queryInterface(unsigned int iid);
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
    virtual void* getRecoilForceUp();
};

class GF {
public:
    char m_pad[0x400];
};

void* getRecoilForceUp(GF* self)
{
    Aux* c = *(Aux**)((char*)self + 0x2b8);
    if (c == 0) {
        Debug(DebugType(6), "Game/Objects/Weapons/GenericFireArm.cpp", 0x8db, "") << "Just avoiding warning temporarily";
        char* p = (char*)operator new(0x18);
        *(int*)(p + 0x0) = 0;
        *(float*)(p + 0x4) = 1.0f;
        *(int*)(p + 0x8) = 0;
        *(char*)(p + 0xc) = 0;
        *(long*)(p + 0x10) = (long)(long)0x759dc150;
        return p;
    }
    return c->queryInterface(IID_IWeaponRecoilComp)->getRecoilForceUp();
}

} } }
