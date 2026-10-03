// FUNCTION: BF2 0x5c5e90
#include <string>

namespace dice { namespace hfe { namespace world {
class Material {
public:
    unsigned char _pad[0xb8];
    std::string m_str;
    std::string Material_getName() const;
};
std::string Material::Material_getName() const {
    return m_str;
}
} } }
