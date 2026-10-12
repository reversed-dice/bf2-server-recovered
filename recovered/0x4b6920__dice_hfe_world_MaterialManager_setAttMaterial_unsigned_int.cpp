// FUNCTION: BF2 0x4b6920
#include <map>
#include <cstdlib>

namespace dice {
namespace hfe {
namespace world {

class IMaterial {
public:
    virtual ~IMaterial();
};

class Material : public IMaterial {
public:
    Material();
    char _pad[0x38]; // size 0x40
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
    unsigned int m_attMaterial; // +0x40

    void setAttMaterial(unsigned int id);
};

void MaterialManager::setAttMaterial(unsigned int id)
{
    if (id > 9999)
        abort();
    std::map<unsigned int, IMaterial*>::iterator it = m_materials.find(id);
    if (it == m_materials.end()) {
        Material* m = new Material();
        if (m == 0)
            return;
        m_materials.insert(std::make_pair(id, (IMaterial*)m));
    }
    m_attMaterial = id;
}

}
}
}
