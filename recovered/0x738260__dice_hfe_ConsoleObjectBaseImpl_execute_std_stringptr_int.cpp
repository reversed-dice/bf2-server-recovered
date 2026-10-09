// FUNCTION: BF2 0x738260
#include <string>

namespace dice { namespace hfe {

class ConsoleObject {
public:
    virtual void _v00();
    virtual void _v08();
    virtual void _v10();
    virtual void _v18();
    virtual void _v20();
    virtual void _v28();
    virtual void _v30();
    virtual void _v38();
    virtual void _v40();
    virtual void _v48();
    virtual void _v50();
    virtual void _v58();
    virtual void _v60();
    virtual void _v68();
    virtual void _v70();
    virtual void _v78();
    virtual void _v80();
    virtual void _v88();
    virtual void _v90();
    virtual void _v98();
    virtual void _va0();
    virtual void _va8();
    virtual void _vb0();
    virtual void _vb8();
    virtual void _vc0(); // slot 24 (0xc0)
    virtual std::string _vc8(); // slot 25 (0xc8)
    virtual void _vd0(int, std::string*); // slot 26 (0xd0)
    virtual void _vd8();
    virtual void _ve0();
    virtual void _ve8();
    virtual void _vf0();
    virtual void _vf8(int); // slot 31 (0xf8)
};

class ConsoleObjectBaseImpl : public ConsoleObject {
public:
    virtual ~ConsoleObjectBaseImpl();
    virtual std::string execute(std::string* args, int numArgs);

    char _pad8[0x28]; // from +0x8 to +0x30
    int m_numArgs; // +0x30
    std::string* m_args[21]; // +0x38 .. +0xe0 (0x38 + 21*8 = 0xe0)
    int m_argFlags[21]; // +0xe0
};

std::string ConsoleObjectBaseImpl::execute(std::string* args, int numArgs)
{
    m_numArgs = numArgs;
    for (int i = 0; i < numArgs; ++i) {
        if (m_argFlags[i] == 0) {
            m_args[i] = &args[i];
        } else {
            _vd0(i + 1, &args[i]);
        }
    }
    _vf8(1);
    _vc0();
    return _vc8();
}

} }
