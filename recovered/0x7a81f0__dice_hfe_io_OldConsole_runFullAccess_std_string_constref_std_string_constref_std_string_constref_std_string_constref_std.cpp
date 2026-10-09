// FUNCTION: BF2 0x7a81f0
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
    virtual bool run(std::string const&, std::string const&, std::string const&, std::string const&, std::string const&, std::string const&, std::string const&, std::string const&, std::string const&, std::string&); // slot 9 (+0x48) -> wait, index 9 * 8 = 0x48? No, slot 10 * 8 = 0x50!
    virtual bool runFullAccess(std::string const& a1, std::string const& a2, std::string const& a3, std::string const& a4, std::string const& a5, std::string const& a6, std::string const& a7, std::string const& a8, std::string const& a9, std::string& out);

    char _pad[0x168 - 0x8];
    bool m_fullAccess; // +0x168
};

bool OldConsole::runFullAccess(std::string const& a1, std::string const& a2, std::string const& a3, std::string const& a4, std::string const& a5, std::string const& a6, std::string const& a7, std::string const& a8, std::string const& a9, std::string& out)
{
    m_fullAccess = true;
    bool res = run(a1, a2, a3, a4, a5, a6, a7, a8, a9, out);
    m_fullAccess = false;
    return res;
}

} } }
