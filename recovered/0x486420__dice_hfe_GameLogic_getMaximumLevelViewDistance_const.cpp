// FUNCTION: BF2 0x486420
// BF2_FLAGS: -fno-strict-aliasing
#include <string>

namespace dice { namespace hfe {

class Settings {
public:
    virtual void vt0();
    virtual void vt1();
    virtual void vt2();
    virtual void vt3();
    virtual int* getInt(std::string const& key, int const& def);
};

extern Settings* settings;

class GameLogic {
public:
    float getMaximumLevelViewDistance() const;
};

float GameLogic::getMaximumLevelViewDistance() const {
    return (float)*settings->getInt(std::string("GSViewDistance"), 0x352);
}

} }
