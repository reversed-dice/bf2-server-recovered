// FUNCTION: BF2 0x6a11d0
#include <string>
#include <map>
namespace dice { namespace hfe { namespace world {

class IObjectTemplate {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual IObjectTemplate* getTemplateFromFile(const std::string& file);
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual unsigned int getClassID() const;
};

class ObjectTemplateManager {
public:
    char _pad0[0x48];
    std::map<unsigned int, std::string> m_map;
    const std::string& getWorkingFolderAndFile(const std::string& file) const;
};

const std::string& ObjectTemplateManager::getWorkingFolderAndFile(const std::string& file) const {
    static std::string emptyString;
    IObjectTemplate* t = ((IObjectTemplate*)this)->getTemplateFromFile(file);
    if (!t)
        return emptyString;
    unsigned int cid = t->getClassID();
    std::map<unsigned int, std::string>::const_iterator it = m_map.find(cid);
    if (it == m_map.end())
        return emptyString;
    return it->second;
}

} } }
