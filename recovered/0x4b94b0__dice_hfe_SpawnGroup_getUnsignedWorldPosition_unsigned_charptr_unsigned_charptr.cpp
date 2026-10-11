// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x4b94b0

#include <string>

namespace dice {
namespace hfe {

struct Vec3 {
    float x, y, z;
};

class Settings {
public:
    virtual ~Settings();
    virtual void dummy1();
    virtual void dummy2();
    virtual int* get(std::string const& name, int* defVal);
};

extern Settings* settings;

class ISpawnGroup {
public:
    virtual ~ISpawnGroup();
};

namespace io {
class NetworkableBase {
public:
    virtual ~NetworkableBase();
};
}

class SpawnGroup : public ISpawnGroup, public io::NetworkableBase {
public:
    virtual void dummy1();
    virtual void dummy2();
    virtual void dummy3();
    virtual void dummy4();
    virtual void dummy5();
    virtual void dummy6();
    virtual void dummy7();
    virtual void dummy8();
    virtual void dummy9();
    virtual void dummy10();
    virtual void dummy11();
    virtual Vec3 const& getPosition() const;

    void getUnsignedWorldPosition(unsigned char* outX, unsigned char* outZ);
};

void SpawnGroup::getUnsignedWorldPosition(unsigned char* outX, unsigned char* outZ) {
    int defZ;
    int defX;
    int halfX = *settings->get(std::string("GLSWorldSizeX"), (defX = 1024, &defX)) / 2;
    int halfZ = *settings->get(std::string("GLSWorldSizeZ"), (defZ = 1024, &defZ)) / 2;

    float posX = getPosition().x;
    if (posX > (float)halfX) {
        *outX = 255;
    } else if (posX < (float)-halfX) {
        *outX = 0;
    } else {
        *outX = (unsigned char)(int)(((posX + (float)halfX) / (float)(halfX * 2)) * 255.0f);
    }

    float posZ = getPosition().z;
    if (posZ > (float)halfZ) {
        *outZ = 255;
    } else if (posZ < (float)-halfZ) {
        *outZ = 0;
    } else {
        *outZ = (unsigned char)(int)(((posZ + (float)halfZ) / (float)(halfZ * 2)) * 255.0f);
    }
}

}
}
