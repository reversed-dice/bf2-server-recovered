// FUNCTION: BF2 0x558540
// BF2_FLAGS: -fno-strict-aliasing
#include <string>

namespace dice {
namespace hfe {
namespace world {

class BundleTemplate {
public:
    virtual void vf();
    char _pad0[8];
    virtual ~BundleTemplate();
};

class I1 {
public:
    virtual void v0();
    char _pad[0x50];
};

class I2 {
public:
    virtual void v0();
    char _pad[0x158];
};

class I3 {
public:
    virtual void v0();
    char _pad[0x28];
};

class ISoldierTemplate {
public:
    virtual void v0();
    char _pad[0x88];
};

struct Clump {
    void* m_a;
    void* m_b;
    std::string m_s;
};

class SoldierTemplate : public BundleTemplate, public I1, public I2, public I3, public ISoldierTemplate {
public:
    std::string m_288;
    char _p1[0x18];
    Clump m_arr[2];
    char _p2[0x330 - 0x2d8];
    std::string m_330;

    void releaseAnimation();
    virtual ~SoldierTemplate();
};

SoldierTemplate::~SoldierTemplate()
{
    releaseAnimation();
}

} } }
