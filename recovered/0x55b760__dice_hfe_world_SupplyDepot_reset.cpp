// FUNCTION: BF2 0x55b760
// BF2_FLAGS: -fno-strict-aliasing
#include <vector>
#include <stdlib.h>

namespace dice { namespace hfe { namespace world {

class DepotTemplate {
public:
    char pad0[0x1f0];                  // 0x0
    std::vector<float> m_1f0;          // 0x1f0
    char pad1[0x268 - 0x208];          // 0x208
    float m_268;                       // 0x268
    char pad2[4];                      // 0x26c
    int m_270;                         // 0x270
    char pad3[0x298 - 0x274];          // 0x274
    std::vector<float> m_298;          // 0x298
};

class SupplyDepot {
public:
    char pad0[0x230];                  // 0x0
    DepotTemplate* m_230;              // 0x230
    char pad1[8];                      // 0x238
    std::vector<float> m_240;          // 0x240
    char pad2[0x270 - 0x258];          // 0x258
    std::vector<float> m_270;          // 0x270
    int m_288;                         // 0x288
    char pad3[4];                      // 0x28c
    std::vector<float> m_290;          // 0x290
    char pad4[0x2c4 - 0x2a8];          // 0x2a8
    bool m_2c4;                        // 0x2c4
    char pad5;
    bool m_2c6;                        // 0x2c6
    char pad6;
    float m_2c8;                       // 0x2c8

    void reset();
};

void SupplyDepot::reset()
{
    m_240 = m_230->m_1f0;
    for (unsigned int i = 0; i < m_240.size(); ++i)
        m_270[i] = 0;
    m_288 = m_230->m_270;
    m_290 = m_230->m_298;
    m_2c6 = (m_230->m_268 != 0.0f);
    m_2c4 = (m_290.size() != 0);
    m_2c8 = (rand() % 30) / 30.0f;
}

} } }
