// FUNCTION: BF2 0x4b69d0
#include <map>
#include <cstdlib>

namespace dice {
namespace hfe {
namespace world {

class IMaterial {
public:
    virtual ~IMaterial();
};

class IMaterialManager {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void queryInterface(unsigned int) const;
};

class MaterialManager : public IMaterialManager {
public:
    char pad[8];
    std::map<unsigned int, IMaterial*> m_materials;
    void removeMaterial(unsigned int id);
};

void MaterialManager::removeMaterial(unsigned int id)
{
    if (id > 9999)
        abort();
    std::map<unsigned int, IMaterial*>::iterator it = m_materials.find(id);
    if (it != m_materials.end()) {
        delete it->second;
        m_materials.erase(it);
    }
}

}
}
}
