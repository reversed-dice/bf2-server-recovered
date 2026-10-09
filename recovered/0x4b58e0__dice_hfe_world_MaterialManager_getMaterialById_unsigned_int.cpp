// FUNCTION: BF2 0x4b58e0
#include <map>

namespace dice { namespace hfe { namespace world {

class IMaterial;

class MaterialManager {
public:
    char _pad[0x10];
    std::map<unsigned int, IMaterial*> m_materials;

    IMaterial* getMaterialById(unsigned int id);
};

IMaterial* MaterialManager::getMaterialById(unsigned int id)
{
    std::map<unsigned int, IMaterial*>::const_iterator it = m_materials.begin();
    std::map<unsigned int, IMaterial*>::const_iterator end = m_materials.end();
    while (it != end) {
        if (it->first == id) {
            return it->second;
        }
        ++it;
    }
    return 0;
}

} } }
