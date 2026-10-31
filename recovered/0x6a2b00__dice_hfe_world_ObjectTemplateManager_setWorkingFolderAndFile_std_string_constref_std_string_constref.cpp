// FUNCTION: BF2 0x6a2b00
#include <map>
#include <string>
#include <utility>

namespace dice { namespace hfe { namespace world {

class IObjectTemplate {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16();
    virtual unsigned int getClassID();
};

class ObjectTemplateManager {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8();
    virtual IObjectTemplate* getTemplate(std::string const& name);
    bool setWorkingFolderAndFile(std::string const& folder, std::string const& file);
    unsigned char _pad[0x40];
    std::map<unsigned int, std::string> m_map;
};

bool ObjectTemplateManager::setWorkingFolderAndFile(std::string const& folder, std::string const& file)
{
    IObjectTemplate* tmpl = getTemplate(folder);
    if (tmpl == 0)
        return false;
    if (m_map.find(tmpl->getClassID()) == m_map.end())
        m_map.insert(std::make_pair(tmpl->getClassID(), file));
    else
        m_map[tmpl->getClassID()] = file;
    return true;
}

} } }
