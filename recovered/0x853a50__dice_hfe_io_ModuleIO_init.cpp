// FUNCTION: BF2 0x853a50
#include <list>
#include <string>

namespace dice { namespace hfe {

class ConsoleObject;

class ConsoleObjects {
public:
    void registerConsoleObjects(std::list<ConsoleObject*>& objects);
    void registerTypeConversion(const std::string& to, const std::string& from);
};

class System {
public:
    void resetExactTime();
};

namespace io {

void addConstantHelper(const std::string& name, unsigned int value);
void addConstantFloatHelper(const std::string& name, float value);
void addConstantToAllConsoles(const std::string& name, const std::string& value);

class ModuleIO {
public:
    bool init();
};

} } }

namespace dice { namespace hfe {
extern ConsoleObjects* g_consoleObjects;
extern std::list<ConsoleObject*> g_consoleObjectList;
extern System* g_system;
} }

bool dice::hfe::io::ModuleIO::init()
{
    g_consoleObjects->registerConsoleObjects(g_consoleObjectList);
    g_consoleObjects->registerTypeConversion(std::string("std::string"), std::string("string"));
    g_system->resetExactTime();
    addConstantToAllConsoles(std::string("c_Debug"), std::string("0"));
    addConstantToAllConsoles(std::string("c_Release"), std::string("1"));
    addConstantToAllConsoles(std::string("c_Xbox"), std::string("0"));
    addConstantToAllConsoles(std::string("c_Win32"), std::string("1"));
    addConstantToAllConsoles(std::string("c_DTDebug"), std::string("0"));
    addConstantToAllConsoles(std::string("c_DTInfo"), std::string("1"));
    addConstantToAllConsoles(std::string("c_DTWarning"), std::string("2"));
    addConstantToAllConsoles(std::string("c_DTAssert"), std::string("3"));
    addConstantToAllConsoles(std::string("c_DTError"), std::string("4"));
    addConstantFloatHelper(std::string("c_CMMinFallTime"), 0.0010000000474974513f);
    addConstantFloatHelper(std::string("c_CMNonRepetive"), 10000.0f);
    addConstantFloatHelper(std::string("c_CMPushAndHold"), 0.0f);
    addConstantFloatHelper(std::string("c_CMDoubleTap"), 1000.0f);
    addConstantHelper(std::string("c_noAccess"), 0u);
    addConstantHelper(std::string("c_endUserAccess"), 1u);
    addConstantHelper(std::string("c_fullAccess"), 2u);
    addConstantHelper(std::string("c_totalAccess"), 7u);
    addConstantHelper(std::string("c_GIMenu"), 0u);
    addConstantHelper(std::string("c_GIToggleConsole"), 1u);
    addConstantHelper(std::string("c_GIEscape"), 2u);
    addConstantHelper(std::string("c_GIUp"), 3u);
    addConstantHelper(std::string("c_GIDown"), 4u);
    addConstantHelper(std::string("c_GILeft"), 5u);
    addConstantHelper(std::string("c_GIRight"), 6u);
    addConstantHelper(std::string("c_GIDelete"), 30u);
    addConstantHelper(std::string("c_GIBack"), 31u);
    addConstantHelper(std::string("c_GIPageUp"), 7u);
    addConstantHelper(std::string("c_GIPageDown"), 8u);
    addConstantHelper(std::string("c_GIRightShift"), 9u);
    addConstantHelper(std::string("c_GILeftShift"), 10u);
    addConstantHelper(std::string("c_GILeftCtrl"), 11u);
    addConstantHelper(std::string("c_GIRightCtrl"), 12u);
    addConstantHelper(std::string("c_GILeftAlt"), 13u);
    addConstantHelper(std::string("c_GIRightAlt"), 14u);
    addConstantHelper(std::string("c_GIOk"), 15u);
    addConstantHelper(std::string("c_GIAltOk"), 16u);
    addConstantHelper(std::string("c_GITab"), 28u);
    addConstantHelper(std::string("c_GIEnter"), 29u);
    addConstantHelper(std::string("c_GICancel"), 17u);
    addConstantHelper(std::string("c_GIMenuSelect0"), 37u);
    addConstantHelper(std::string("c_GIMenuSelect1"), 38u);
    addConstantHelper(std::string("c_GIMenuSelect2"), 39u);
    addConstantHelper(std::string("c_GIMenuSelect3"), 40u);
    addConstantHelper(std::string("c_GIMenuSelect4"), 41u);
    addConstantHelper(std::string("c_GIMenuSelect5"), 42u);
    addConstantHelper(std::string("c_GIMenuSelect6"), 43u);
    addConstantHelper(std::string("c_GIMenuSelect7"), 44u);
    addConstantHelper(std::string("c_GIMenuSelect8"), 45u);
    addConstantHelper(std::string("c_GIMenuSelect9"), 46u);
    addConstantHelper(std::string("c_GIQuit"), 27u);
    addConstantHelper(std::string("c_GIMouseLookX"), 20u);
    addConstantHelper(std::string("c_GIMouseLookY"), 21u);
    addConstantHelper(std::string("c_GIMouseWheelDown"), 26u);
    addConstantHelper(std::string("c_GIMouseWheelUp"), 25u);
    addConstantHelper(std::string("c_GISayAll"), 22u);
    addConstantHelper(std::string("c_GISayTeam"), 23u);
    addConstantHelper(std::string("c_GISaySquad"), 24u);
    addConstantHelper(std::string("c_GIVoipPushToTalk"), 61u);
    addConstantHelper(std::string("c_GIVoipUseLeaderChannel"), 56u);
    addConstantHelper(std::string("c_GIScreenShot"), 18u);
    addConstantHelper(std::string("c_GITogglePause"), 19u);
    addConstantHelper(std::string("c_GITacticalComm"), 33u);
    addConstantHelper(std::string("c_GIRadioComm"), 34u);
    addConstantHelper(std::string("c_GIMapZoom"), 36u);
    addConstantHelper(std::string("c_GIMapSize"), 35u);
    addConstantHelper(std::string("c_GI3dMap"), 57u);
    addConstantHelper(std::string("c_GIYes"), 47u);
    addConstantHelper(std::string("c_GINo"), 48u);
    addConstantHelper(std::string("c_GIAutoAccept"), 49u);
    addConstantHelper(std::string("c_GICreateSquad"), 50u);
    addConstantHelper(std::string("c_GIJoinSquad"), 51u);
    addConstantHelper(std::string("c_GISelectSquad"), 52u);
    addConstantHelper(std::string("c_GIHotRankUp"), 54u);
    addConstantHelper(std::string("c_GIShowScoreboard"), 55u);
    addConstantHelper(std::string("c_GIDeselectAll"), 59u);
    addConstantHelper(std::string("c_GISelectAll"), 58u);
    addConstantHelper(std::string("c_GILeader"), 60u);
    addConstantHelper(std::string("c_GIToggleFreeCamera"), 53u);
    addConstantHelper(std::string("c_GINone"), 74u);
    addConstantFloatHelper(std::string("c_NIGhostAlways"), -1.0f);
    addConstantHelper(std::string("c_PIShowScoreBoard"), 63u);
    addConstantHelper(std::string("c_PILie"), 37u);
    addConstantHelper(std::string("c_PICrouch"), 38u);
    addConstantHelper(std::string("c_PIYaw"), 0u);
    addConstantHelper(std::string("c_PIPitch"), 1u);
    addConstantHelper(std::string("c_PIRoll"), 2u);
    addConstantHelper(std::string("c_PIThrottle"), 3u);
    addConstantHelper(std::string("c_PIMouseLookX"), 4u);
    addConstantHelper(std::string("c_PIMouseLookY"), 5u);
    addConstantHelper(std::string("c_PICameraX"), 6u);
    addConstantHelper(std::string("c_PICameraY"), 7u);
    addConstantHelper(std::string("c_PINumInput"), 64u);
    addConstantHelper(std::string("c_PIFire"), 8u);
    addConstantHelper(std::string("c_PIAltFire"), 31u);
    addConstantHelper(std::string("c_PIFlareFire"), 47u);
    addConstantHelper(std::string("c_PIReload"), 32u);
    addConstantHelper(std::string("c_PISelectFunc"), 33u);
    addConstantHelper(std::string("c_PIAction"), 9u);
    addConstantHelper(std::string("c_PIUse"), 10u);
    addConstantHelper(std::string("c_PIMouseLook"), 11u);
    addConstantHelper(std::string("c_PIDrop"), 34u);
    addConstantHelper(std::string("c_PINextItem"), 60u);
    addConstantHelper(std::string("c_PIPrevItem"), 61u);
    addConstantHelper(std::string("c_PICommunication"), 62u);
    addConstantHelper(std::string("c_PIAltSprint"), 12u);
    addConstantHelper(std::string("c_PISprint"), 13u);
    addConstantHelper(std::string("c_PIToggleCameraMode"), 35u);
    addConstantHelper(std::string("c_PICameraMode1"), 39u);
    addConstantHelper(std::string("c_PICameraMode2"), 40u);
    addConstantHelper(std::string("c_PICameraMode3"), 41u);
    addConstantHelper(std::string("c_PICameraMode4"), 42u);
    addConstantHelper(std::string("c_PIToggleCamera"), 36u);
    addConstantHelper(std::string("c_PINone"), 64u);
    addConstantHelper(std::string("c_PIWeaponSelect1"), 14u);
    addConstantHelper(std::string("c_PIWeaponSelect2"), 15u);
    addConstantHelper(std::string("c_PIWeaponSelect3"), 16u);
    addConstantHelper(std::string("c_PIWeaponSelect4"), 17u);
    addConstantHelper(std::string("c_PIWeaponSelect5"), 18u);
    addConstantHelper(std::string("c_PIWeaponSelect6"), 19u);
    addConstantHelper(std::string("c_PIWeaponSelect7"), 20u);
    addConstantHelper(std::string("c_PIWeaponSelect8"), 21u);
    addConstantHelper(std::string("c_PIWeaponSelect9"), 22u);
    addConstantHelper(std::string("c_PIPositionSelect1"), 23u);
    addConstantHelper(std::string("c_PIPositionSelect2"), 24u);
    addConstantHelper(std::string("c_PIPositionSelect3"), 25u);
    addConstantHelper(std::string("c_PIPositionSelect4"), 26u);
    addConstantHelper(std::string("c_PIPositionSelect5"), 27u);
    addConstantHelper(std::string("c_PIPositionSelect6"), 28u);
    addConstantHelper(std::string("c_PIPositionSelect7"), 29u);
    addConstantHelper(std::string("c_PIPositionSelect8"), 30u);
    addConstantHelper(std::string("c_PIRadio1"), 48u);
    addConstantHelper(std::string("c_PIRadio2"), 49u);
    addConstantHelper(std::string("c_PIRadio3"), 50u);
    addConstantHelper(std::string("c_PIRadio4"), 51u);
    addConstantHelper(std::string("c_PIRadio5"), 52u);
    addConstantHelper(std::string("c_PIRadio6"), 53u);
    addConstantHelper(std::string("c_PIRadio7"), 54u);
    addConstantHelper(std::string("c_PIRadio8"), 55u);
    addConstantHelper(std::string("c_PIScreenShot"), 56u);
    addConstantHelper(std::string("c_PIToolTip"), 57u);
    addConstantHelper(std::string("c_PISayAll"), 58u);
    addConstantHelper(std::string("c_PISayTeam"), 59u);
    addConstantHelper(std::string("c_PISelectPrimWeapon"), 43u);
    addConstantHelper(std::string("c_PISelectSecWeapon"), 44u);
    addConstantHelper(std::string("c_PIToggleWeapon"), 45u);
    addConstantHelper(std::string("c_PIToggleFireRate"), 46u);
    return true;
}
