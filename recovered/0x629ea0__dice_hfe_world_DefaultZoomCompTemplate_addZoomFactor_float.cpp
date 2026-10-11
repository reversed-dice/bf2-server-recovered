// FUNCTION: BF2 0x629ea0
// BF2_FLAGS: -fno-strict-aliasing
#include <vector>

namespace dice {
namespace hfe {
namespace world {

class DefaultZoomCompTemplate {
public:
    virtual ~DefaultZoomCompTemplate();
    char pad[0x18];
    std::vector<float> m_zoomFactors;

    void addZoomFactor(float v);
};

void DefaultZoomCompTemplate::addZoomFactor(float v) {
    std::vector<float>& factors = m_zoomFactors;
    for (unsigned int i = 0; i < factors.size(); ++i) {
        if (factors[i] == v) {
            return;
        }
    }
    factors.push_back(v);
}

} } }
