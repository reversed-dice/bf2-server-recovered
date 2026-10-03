// FUNCTION: BF2 0x88e630
#include <string>

// dice_hfe_anonymous_namespace_ConsoleClass322_isObjectActive_const
// The console object is active when the settings flag "GSIsServer" is set and
// the game-logic singleton exists. The flag accessor is virtual slot
// +0xa0 of the settings object (0x010a5138); the guarded
// singleton is 0x010b8c08.
//
// The default-value parameter is a BYTE type (char), not bool: with a bool the
// temporary's store stays pinned ahead of the vptr loads and the function tops
// out at 97.44%. Returning the selected pointer and testing it (rather than
// `flag && guard`) is what produces the target's CMOV instead of a branch.

namespace dice { namespace hfe {

struct GameLogic;

struct Settings {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void slot7();
    virtual void slot8();
    virtual void slot9();
    virtual void slot10();
    virtual void slot11();
    virtual void slot12();
    virtual void slot13();
    virtual void slot14();
    virtual void slot15();
    virtual void slot16();
    virtual void slot17();
    virtual void slot18();
    virtual void slot19();
    virtual const char* getFlag(const std::string& name, const char& def) const;
};

extern Settings* settings;
extern GameLogic* gameLogic;

} }

extern "C" bool isObjectActive_88e630()
{
    char flag = *dice::hfe::settings->getFlag(std::string("GSIsServer"), (char)0);
    dice::hfe::GameLogic* gl = flag ? dice::hfe::gameLogic : 0;
    return gl != 0;
}
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass322_isObjectActive_const (0x88e630)
