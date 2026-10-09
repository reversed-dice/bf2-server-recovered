// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x7a8940
#include <deque>
#include <string>

namespace dice { namespace hfe { namespace io {

class OldConsole {
public:
    virtual ~OldConsole();
    virtual void v08();
    virtual void v10();
    virtual void v18();
    virtual void v20();
    virtual void v28();
    virtual void v30();
    virtual void v38();
    virtual void v40();
    virtual void v48();
    virtual void v50();
    virtual void v58();
    virtual void v60();
    virtual void v68();
    virtual void v70();
    virtual void v78();
    virtual void v80();
    virtual void v88();
    virtual void v90();
    virtual void v98();
    virtual void va0();
    virtual void va8();
    virtual void vb0();
    virtual void vb8();
    virtual void vc0();
    virtual void vc8();
    virtual void vd0();
    virtual void vd8();
    virtual void setMaxHistorySize(int size);

    char _pad[0x30 - 0x8];
    std::deque<std::string> m_history; // +0x30 .. +0x80
    int m_maxHistorySize;              // +0x80
};

void OldConsole::setMaxHistorySize(int size)
{
    m_maxHistorySize = size;
    while (m_history.size() > (unsigned int)m_maxHistorySize) {
        m_history.pop_front();
    }
}

} } }
