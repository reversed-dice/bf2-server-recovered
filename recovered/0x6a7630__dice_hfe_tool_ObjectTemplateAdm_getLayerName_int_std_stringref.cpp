// FUNCTION: BF2 0x6a7630
#include <string>
namespace dice { namespace hfe { namespace tool {

class ObjectTemplateAdm {
public:
    struct Layer {
        void* pad0;
        std::string name;
    };
    Layer m_layers[128];

    bool getLayerName(int i, std::string& out) const;
};

bool ObjectTemplateAdm::getLayerName(int i, std::string& out) const {
    if ((unsigned int)i > 0x7f) return false;
    out.assign(m_layers[i].name);
    return true;
}

} } }
