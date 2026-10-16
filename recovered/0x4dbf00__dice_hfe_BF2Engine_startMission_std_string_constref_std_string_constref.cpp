// FUNCTION: BF2 0x4dbf00
// BF2_FLAGS: -fno-strict-aliasing
#include <string>

namespace dice { namespace hfe {

struct Settings {
    virtual void s0(); virtual void s1(); virtual void s2();
    virtual void s3(); virtual void s4(); virtual void s5();
    virtual void s6(); virtual void s7(); virtual void s8();
    virtual void s9(); virtual void s10(); virtual void s11();
    virtual void s12(); virtual void s13(); virtual void s14();
    virtual void s15(); virtual void s16();
    virtual void setString(const std::string& name, const std::string& value); // slot 17 (+0x88)
    virtual void s18(); virtual void s19(); virtual void s20();
    virtual const char* getFlag(const std::string& name, const char& def) const; // slot 21 (+0xa8)
};
extern Settings* settings;

class BF2Engine {
public:
    void shutdownGame(bool b);
    bool startGame(bool a, bool b);
    bool startMission(const std::string& a, const std::string& b);
};

bool BF2Engine::startMission(const std::string& a, const std::string& b) {
    shutdownGame(false);
    settings->getFlag(std::string("GSIsServer"), (char)1);
    settings->setString(std::string("GSLoadLevel"), a.c_str());
    return startGame(false, false);
}

} }
