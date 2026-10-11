// FUNCTION: BF2 0x791df0
namespace dice { namespace hfe { namespace ai {

class ITimer {
public:
    virtual void v0();
    virtual void v1();
    virtual double getTime(); // slot 0x10 (slot 2)
};

namespace CommonSingletonServer {
extern ITimer* m_iBFTimer;
}

struct WeaponData {
    char _pad[0x30];
    float val30; // +0x30
    float val34; // +0x34
    float val38; // +0x38
};

class WeaponObject {
public:
    char _pad[0x18];
    WeaponData* m_data; // +0x18

    float calculateDeviation(float param1, double param2);
};

float WeaponObject::calculateDeviation(float param1, double param2) {
    float diff1 = 1.0f - param1;
    double t = CommonSingletonServer::m_iBFTimer->getTime();
    WeaponData* data = m_data;
    double timeDiff = t - param2;
    float term = diff1 * data->val34 - (float)timeDiff;
    float clamped = term > 0.0f ? term : 0.0f;
    float result = (clamped * data->val38 + diff1 * 0.25f) * data->val30;
    return result;
}

} } }
