// FUNCTION: BF2 0x55a800
namespace dice {
namespace hfe {

class WorldPref {
public:
    static double getWorldTime();
};

namespace world {

struct SupplyDepotTemplate {
    char pad[0x310];
    float m_updateInterval;
};

class SupplyDepot {
public:
    virtual void handleUpdate(float dt, unsigned int frame);
    char pad[0x230 - 8];
    SupplyDepotTemplate* m_template;
    char pad2[0x2c8 - 0x230 - 8];
    float m_lastUpdateTime;

    void update(float dt);
};

void SupplyDepot::handleUpdate(float dt, unsigned int frame) {
    if ((float)WorldPref::getWorldTime() - m_lastUpdateTime > m_template->m_updateInterval) {
        update((float)WorldPref::getWorldTime() - m_lastUpdateTime);
        m_lastUpdateTime = (float)WorldPref::getWorldTime();
    }
}

}
}
}
