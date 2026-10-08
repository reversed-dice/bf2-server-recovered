// FUNCTION: BF2 0x6a77f0
#include <string>

namespace dice { namespace hfe { namespace tool {

class ObjectTemplateAdm {
public:
    struct Layer { void* pad0; std::string name; };
    Layer m_layers[128];
    int getLayerId(std::string const& name);
    void renameLayer(std::string const& newName, std::string const& oldName);
};

} } }

void dice::hfe::tool::ObjectTemplateAdm::renameLayer(std::string const& newName, std::string const& oldName) {
    int id = getLayerId(oldName);
    if (id > 0) {
        m_layers[id].name.assign(newName);
    }
}
