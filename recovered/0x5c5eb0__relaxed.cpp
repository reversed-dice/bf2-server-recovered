// FUNCTION: BF2 0x5c5eb0
#include <string>

namespace dice { namespace hfe { namespace world {
class Material {
public:
    unsigned char _pad[0xc0];
    std::string m_str;
    std::string Material_getName() const;
};
std::string Material::Material_getName() const {
    return m_str;
}
} } }
