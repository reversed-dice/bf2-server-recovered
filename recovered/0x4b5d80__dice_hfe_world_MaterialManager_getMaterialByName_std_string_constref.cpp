// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x4b5d80
#include <string>
#include <map>
namespace dice { namespace hfe {

int compareIgnoreCase(std::string const& a, std::string const& b);

class IMaterial {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual std::string getName() const;
    virtual ~IMaterial();
};

class MaterialManager {
public:
    virtual void dummy();
    IMaterial* getMaterialByName(std::string const& name);
private:
    char _pad[0x8];
    std::map<unsigned int, IMaterial*> m_materials;
};

IMaterial* MaterialManager::getMaterialByName(std::string const& name)
{
    std::map<unsigned int, IMaterial*>::iterator it = m_materials.begin();
    while (it != m_materials.end())
    {
        IMaterial* mat = it->second;
        if (compareIgnoreCase(mat->getName(), name) == 0)
            return mat;
        ++it;
    }
    return 0;
}

} }
