// FUNCTION: BF2 0x629d00
#include <vector>

namespace dice {
namespace hfe {
namespace world {

struct ZoomTemplate {
    char pad[0x20];
    std::vector<float> m_zoomFactors;
};

class DefaultZoomComp {
public:
    char pad[0x48];
    ZoomTemplate* m_template;

    float getZoomFactor(unsigned int index) const;
};

float DefaultZoomComp::getZoomFactor(unsigned int index) const {
    const std::vector<float>& v = m_template->m_zoomFactors;
    return index < v.size() ? v[index] : -1.0f;
}

}
}
}
