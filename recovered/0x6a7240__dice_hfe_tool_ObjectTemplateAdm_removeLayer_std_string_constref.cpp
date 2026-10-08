// FUNCTION: BF2 0x6a7240
#include <string>

namespace dice { namespace hfe { namespace tool {

class ObjectTemplateAdm {
public:
    struct Layer { void* pad0; std::string name; };
    Layer m_layers[128];
    int getLayerId(std::string const& name);
    void removeLayer(std::string const& name);
};

} } }

void dice::hfe::tool::ObjectTemplateAdm::removeLayer(std::string const& name) {
    int id = getLayerId(name);
    if (id > 0) {
        m_layers[id].name.clear();
    }
}
