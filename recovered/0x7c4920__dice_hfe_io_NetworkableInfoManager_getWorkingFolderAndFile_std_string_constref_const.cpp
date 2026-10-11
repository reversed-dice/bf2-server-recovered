// FUNCTION: BF2 0x7c4920
#include <map>
#include <string>

namespace dice { namespace hfe { namespace io {

class INetworkableInfo {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual int getID();
};

class NetworkableInfoManager {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual INetworkableInfo* getInfo(std::string const&) const;
    char _pad0[0x70];
    std::map<int, std::string> m_map;
    std::string const& getWorkingFolderAndFile(std::string const&) const;
};

std::string const& NetworkableInfoManager::getWorkingFolderAndFile(std::string const& name) const
{
    static std::string emptyString;
    INetworkableInfo* info = getInfo(name);
    if (info == 0)
        return emptyString;
    int id = info->getID();
    std::map<int, std::string>::const_iterator it = m_map.find(id);
    return it != m_map.end() ? it->second : emptyString;
}

} } }
