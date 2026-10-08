// FUNCTION: BF2 0x6a76a0
#include <string>
namespace dice { namespace hfe { namespace tool {

class ObjectTemplateAdm {
public:
    struct Layer {
        void* pad0;
        std::string name;
    };
    Layer m_layers[128];
    static std::string mActiveLayer;
    static int mActiveLayerId;

    void setActiveLayerId(int id);
};

void ObjectTemplateAdm::setActiveLayerId(int id) {
    if ((unsigned int)id > 0x7f) return;
    std::string& n = m_layers[id].name;
    if (n.size() != 0) {
        mActiveLayer.assign(n);
        mActiveLayerId = id;
    }
}

} } }
