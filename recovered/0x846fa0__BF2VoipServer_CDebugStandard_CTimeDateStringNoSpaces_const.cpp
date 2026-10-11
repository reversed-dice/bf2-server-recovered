// FUNCTION: BF2 0x846fa0
#include <string>

namespace dice { namespace hfe {
class SystemInfo;
SystemInfo* systemInfo();
}}

class CDebugStandard
{
public:
    std::string m_str;
    const std::string& CTimeDateStringNoSpaces() const;
};

const std::string& CDebugStandard::CTimeDateStringNoSpaces() const
{
    typedef void (*Vfn)(void*, void*);
    dice::hfe::SystemInfo* si = dice::hfe::systemInfo();
    ((Vfn)((*(void***)si)[3]))((void*)this, si);
    std::string& s = *(std::string*)(void*)this;
    for (std::string::size_type p = s.find_first_not_of("0123456789_", 0, 11);
         p != std::string::npos;
         p = s.find_first_not_of("0123456789_", 0, 11))
    {
        s[p] = '_';
    }
    return s;
}
