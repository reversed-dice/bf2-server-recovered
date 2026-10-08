// FUNCTION: BF2 0x6a7750
#include <string>

namespace dice { namespace hfe { namespace tool {

class ObjectTemplateAdm {
public:
    int getLayerId(std::string const& name);
    void setActiveLayerId(int id);
    void createNewLayer(std::string const& name);
private:
    char pad_0[8];
    struct LayerEntry {
        std::string name;
        bool flag;
        char pad[7];
    } layers[0x80];
};

void ObjectTemplateAdm::createNewLayer(std::string const& name) {
    if (getLayerId(name) < 1) {
        for (int i = 0; i < 0x80; i++) {
            if (layers[i].name.empty()) {
                layers[i].name = name;
                layers[i].flag = false;
                setActiveLayerId(i);
                return;
            }
        }
    }
}

} } }
