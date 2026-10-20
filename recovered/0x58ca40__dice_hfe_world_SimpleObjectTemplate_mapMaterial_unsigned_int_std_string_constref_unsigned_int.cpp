// FUNCTION: BF2 0x58ca40
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <vector>
#include <utility>

namespace dice {
namespace hfe {
namespace world {

class SimpleObjectTemplate {
public:
    char _pad[0x118];
    std::vector<std::pair<std::string, unsigned int> > m_materials;

    void mapMaterial(unsigned int index, const std::string& name, unsigned int material);
};

void SimpleObjectTemplate::mapMaterial(unsigned int index, const std::string& name, unsigned int material)
{
    if (index >= m_materials.size()) {
        std::vector<std::pair<std::string, unsigned int> >::size_type n = index + 1;
        m_materials.resize(n > m_materials.size() ? n : m_materials.size());
        m_materials[index] = std::make_pair(name, material);
    } else {
        m_materials[index].second = material;
    }
}

}
}
}
