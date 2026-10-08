// FUNCTION: BF2 0x6a76e0
// BF2_FLAGS: -fcrossjumping
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
    void activateNextLayer();
};

void ObjectTemplateAdm::activateNextLayer() {
    for (int i = mActiveLayerId + 1; i < 0x80; ++i) {
        if (m_layers[i].name.size() != 0) {
            setActiveLayerId(i);
            return;
        }
    }
    for (int i = 0; i < mActiveLayerId; ++i) {
        if (m_layers[i].name.size() != 0) {
            setActiveLayerId(i);
            return;
        }
    }
}

} } }
