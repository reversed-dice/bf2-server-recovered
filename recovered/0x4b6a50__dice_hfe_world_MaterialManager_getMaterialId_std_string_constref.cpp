// FUNCTION: BF2 0x4b6a50
#include <map>
#include <string>

namespace dice { namespace hfe { namespace world {

class IMaterial {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual std::string getName();
};

class MaterialManager {
public:
    char _pad[0x10];
    std::map<unsigned int, IMaterial*> m_materials;

    unsigned int getMaterialId(std::string const& name);
};

} } }

namespace dice { namespace hfe {
int compareIgnoreCase(std::string const& a, std::string const& b);
} }

namespace dice { namespace hfe { namespace world {

unsigned int MaterialManager::getMaterialId(std::string const& name)
{
    for (std::map<unsigned int, IMaterial*>::iterator it = m_materials.begin();
         it != m_materials.end(); ++it) {
        if (dice::hfe::compareIgnoreCase(it->second->getName(), name) == 0)
            return it->first;
    }
    return 0;
}

} } }
