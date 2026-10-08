// FUNCTION: BF2 0x6a7190
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
namespace dice { namespace hfe { namespace tool {

class ObjectTemplateAdm {
public:
    struct Layer {
        void* pad0;
        std::string name;
    };
    Layer m_layers[128];

    int getLayerId(std::string const& name) const;
};

int ObjectTemplateAdm::getLayerId(std::string const& name) const {
    int i = 0;
    do {
        if (m_layers[i].name == name) return i;
        ++i;
    } while (i != 0x80);
    return -1;
}

} } }
