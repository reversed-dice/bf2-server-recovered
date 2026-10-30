// FUNCTION: BF2 0x7fe870
// BF2_FLAGS: -fcrossjumping --param large-function-growth=105
// TRICK: 384
namespace std {
template<class C> struct char_traits;
template<class T> class allocator;
template<class C, class T, class A> class basic_string;
template<class C, class T, class A>
bool operator==(const basic_string<C, T, A>&, const C*) __attribute__((noinline));
}
#include <cstdio>
#include <sstream>
#include <string>
#include <ostream>

namespace dice { namespace hfe {
std::string makeNarrow(const std::wstring& s);
namespace io { 
enum PlayerInputMap { PlayerInputMap_0 };
std::ostream& operator<<(std::ostream& os, PlayerInputMap v);
 } } }

namespace dice { namespace hfe { namespace io { 
std::istream& operator>>(std::istream& is, PlayerInputMap& v)
{
    std::string s;
    is >> s;
    std::ostringstream ss;
    if (s.size() <= 2) {
        int i = -1;
        if (sscanf(s.c_str(), "%d", &i) == 1)
            ss << (PlayerInputMap)i;
    }
    if (s == "PIYaw" || ss.str() == "PIYaw")
        v = PlayerInputMap(0);
    else if (s == "PIPitch" || ss.str() == "PIPitch")
        v = PlayerInputMap(1);
    else if (s == "PIRoll" || ss.str() == "PIRoll")
        v = PlayerInputMap(2);
    else if (s == "PIThrottle" || ss.str() == "PIThrottle")
        v = PlayerInputMap(3);
    else if (s == "PIMouseLookX" || ss.str() == "PIMouseLookX")
        v = PlayerInputMap(4);
    else if (s == "PIMouseLookY" || ss.str() == "PIMouseLookY")
        v = PlayerInputMap(5);
    else if (s == "PICameraX" || ss.str() == "PICameraX")
        v = PlayerInputMap(6);
    else if (s == "PICameraY" || ss.str() == "PICameraY")
        v = PlayerInputMap(7);
    else if (s == "PIFire" || ss.str() == "PIFire")
        v = PlayerInputMap(8);
    else if (s == "PIAction" || ss.str() == "PIAction")
        v = PlayerInputMap(9);
    else if (s == "PIUse" || ss.str() == "PIUse")
        v = PlayerInputMap(10);
    else if (s == "PIMouseLook" || ss.str() == "PIMouseLook")
        v = PlayerInputMap(11);
    else if (s == "PIAltSprint" || ss.str() == "PIAltSprint")
        v = PlayerInputMap(12);
    else if (s == "PISprint" || ss.str() == "PISprint")
        v = PlayerInputMap(13);
    else if (s == "PIWeaponSelect1" || ss.str() == "PIWeaponSelect1")
        v = PlayerInputMap(14);
    else if (s == "PIWeaponSelect2" || ss.str() == "PIWeaponSelect2")
        v = PlayerInputMap(15);
    else if (s == "PIWeaponSelect3" || ss.str() == "PIWeaponSelect3")
        v = PlayerInputMap(16);
    else if (s == "PIWeaponSelect4" || ss.str() == "PIWeaponSelect4")
        v = PlayerInputMap(17);
    else if (s == "PIWeaponSelect5" || ss.str() == "PIWeaponSelect5")
        v = PlayerInputMap(18);
    else if (s == "PIWeaponSelect6" || ss.str() == "PIWeaponSelect6")
        v = PlayerInputMap(19);
    else if (s == "PIWeaponSelect7" || ss.str() == "PIWeaponSelect7")
        v = PlayerInputMap(20);
    else if (s == "PIWeaponSelect8" || ss.str() == "PIWeaponSelect8")
        v = PlayerInputMap(21);
    else if (s == "PIWeaponSelect9" || ss.str() == "PIWeaponSelect9")
        v = PlayerInputMap(22);
    else if (s == "PIPositionSelect1" || ss.str() == "PIPositionSelect1")
        v = PlayerInputMap(23);
    else if (s == "PIPositionSelect2" || ss.str() == "PIPositionSelect2")
        v = PlayerInputMap(24);
    else if (s == "PIPositionSelect3" || ss.str() == "PIPositionSelect3")
        v = PlayerInputMap(25);
    else if (s == "PIPositionSelect4" || ss.str() == "PIPositionSelect4")
        v = PlayerInputMap(26);
    else if (s == "PIPositionSelect5" || ss.str() == "PIPositionSelect5")
        v = PlayerInputMap(27);
    else if (s == "PIPositionSelect6" || ss.str() == "PIPositionSelect6")
        v = PlayerInputMap(28);
    else if (s == "PIPositionSelect7" || ss.str() == "PIPositionSelect7")
        v = PlayerInputMap(29);
    else if (s == "PIPositionSelect8" || ss.str() == "PIPositionSelect8")
        v = PlayerInputMap(30);
    else if (s == "PIAltFire" || ss.str() == "PIAltFire")
        v = PlayerInputMap(31);
    else if (s == "PIReload" || ss.str() == "PIReload")
        v = PlayerInputMap(32);
    else if (s == "PISelectFunc" || ss.str() == "PISelectFunc")
        v = PlayerInputMap(33);
    else if (s == "PIDrop" || ss.str() == "PIDrop")
        v = PlayerInputMap(34);
    else if (s == "PIToggleCameraMode" || ss.str() == "PIToggleCameraMode")
        v = PlayerInputMap(35);
    else if (s == "PIToggleCamera" || ss.str() == "PIToggleCamera")
        v = PlayerInputMap(36);
    else if (s == "PILie" || ss.str() == "PILie")
        v = PlayerInputMap(37);
    else if (s == "PICrouch" || ss.str() == "PICrouch")
        v = PlayerInputMap(38);
    else if (s == "PICameraMode1" || ss.str() == "PICameraMode1")
        v = PlayerInputMap(39);
    else if (s == "PICameraMode2" || ss.str() == "PICameraMode2")
        v = PlayerInputMap(40);
    else if (s == "PICameraMode3" || ss.str() == "PICameraMode3")
        v = PlayerInputMap(41);
    else if (s == "PICameraMode4" || ss.str() == "PICameraMode4")
        v = PlayerInputMap(42);
    else if (s == "PISelectPrimWeapon" || ss.str() == "PISelectPrimWeapon")
        v = PlayerInputMap(43);
    else if (s == "PISelectSecWeapon" || ss.str() == "PISelectSecWeapon")
        v = PlayerInputMap(44);
    else if (s == "PIToggleWeapon" || ss.str() == "PIToggleWeapon")
        v = PlayerInputMap(45);
    else if (s == "PIToggleFireRate" || ss.str() == "PIToggleFireRate")
        v = PlayerInputMap(46);
    else if (s == "PIFlareFire" || ss.str() == "PIFlareFire")
        v = PlayerInputMap(47);
    else if (s == "PIRadio1" || ss.str() == "PIRadio1")
        v = PlayerInputMap(48);
    else if (s == "PIRadio2" || ss.str() == "PIRadio2")
        v = PlayerInputMap(49);
    else if (s == "PIRadio3" || ss.str() == "PIRadio3")
        v = PlayerInputMap(50);
    else if (s == "PIRadio4" || ss.str() == "PIRadio4")
        v = PlayerInputMap(51);
    else if (s == "PIRadio5" || ss.str() == "PIRadio5")
        v = PlayerInputMap(52);
    else if (s == "PIRadio6" || ss.str() == "PIRadio6")
        v = PlayerInputMap(53);
    else if (s == "PIRadio7" || ss.str() == "PIRadio7")
        v = PlayerInputMap(54);
    else if (s == "PIRadio8" || ss.str() == "PIRadio8")
        v = PlayerInputMap(55);
    else if (s == "PIScreenShot" || ss.str() == "PIScreenShot")
        v = PlayerInputMap(56);
    else if (s == "PIToolTip" || ss.str() == "PIToolTip")
        v = PlayerInputMap(57);
    else if (s == "PISayAll" || ss.str() == "PISayAll")
        v = PlayerInputMap(58);
    else if (s == "PISayTeam" || ss.str() == "PISayTeam")
        v = PlayerInputMap(59);
    else if (s == "PINextItem" || ss.str() == "PINextItem")
        v = PlayerInputMap(60);
    else if (s == "PIPrevItem" || ss.str() == "PIPrevItem")
        v = PlayerInputMap(61);
    else if (s == "PICommunication" || ss.str() == "PICommunication")
        v = PlayerInputMap(62);
    else if (s == "PIShowScoreBoard" || ss.str() == "PIShowScoreBoard")
        v = PlayerInputMap(63);
    else if (s == "PINumInput" || ss.str() == "PINumInput")
        v = PlayerInputMap(64);
    else if (s == "PINotInUse" || ss.str() == "PINotInUse")
        v = PlayerInputMap(64);
    else if (s == "PINone" || ss.str() == "PINone")
        v = PlayerInputMap(64);
    else
        v = PlayerInputMap(64);
    return is;
}
 } } }

namespace dice { namespace hfe { namespace io { 
std::wistream& operator>>(std::wistream& is, PlayerInputMap& v)
{
    std::wstring ws;
    is >> ws;
    std::string s = makeNarrow(ws);
    std::ostringstream ss;
    if (s.size() <= 2) {
        int i = -1;
        if (sscanf(s.c_str(), "%d", &i) == 1)
            ss << (PlayerInputMap)i;
    }
    if (s == "PIYaw" || ss.str() == "PIYaw")
        v = PlayerInputMap(0);
    else if (s == "PIPitch" || ss.str() == "PIPitch")
        v = PlayerInputMap(1);
    else if (s == "PIRoll" || ss.str() == "PIRoll")
        v = PlayerInputMap(2);
    else if (s == "PIThrottle" || ss.str() == "PIThrottle")
        v = PlayerInputMap(3);
    else if (s == "PIMouseLookX" || ss.str() == "PIMouseLookX")
        v = PlayerInputMap(4);
    else if (s == "PIMouseLookY" || ss.str() == "PIMouseLookY")
        v = PlayerInputMap(5);
    else if (s == "PICameraX" || ss.str() == "PICameraX")
        v = PlayerInputMap(6);
    else if (s == "PICameraY" || ss.str() == "PICameraY")
        v = PlayerInputMap(7);
    else if (s == "PIFire" || ss.str() == "PIFire")
        v = PlayerInputMap(8);
    else if (s == "PIAction" || ss.str() == "PIAction")
        v = PlayerInputMap(9);
    else if (s == "PIUse" || ss.str() == "PIUse")
        v = PlayerInputMap(10);
    else if (s == "PIMouseLook" || ss.str() == "PIMouseLook")
        v = PlayerInputMap(11);
    else if (s == "PIAltSprint" || ss.str() == "PIAltSprint")
        v = PlayerInputMap(12);
    else if (s == "PISprint" || ss.str() == "PISprint")
        v = PlayerInputMap(13);
    else if (s == "PIWeaponSelect1" || ss.str() == "PIWeaponSelect1")
        v = PlayerInputMap(14);
    else if (s == "PIWeaponSelect2" || ss.str() == "PIWeaponSelect2")
        v = PlayerInputMap(15);
    else if (s == "PIWeaponSelect3" || ss.str() == "PIWeaponSelect3")
        v = PlayerInputMap(16);
    else if (s == "PIWeaponSelect4" || ss.str() == "PIWeaponSelect4")
        v = PlayerInputMap(17);
    else if (s == "PIWeaponSelect5" || ss.str() == "PIWeaponSelect5")
        v = PlayerInputMap(18);
    else if (s == "PIWeaponSelect6" || ss.str() == "PIWeaponSelect6")
        v = PlayerInputMap(19);
    else if (s == "PIWeaponSelect7" || ss.str() == "PIWeaponSelect7")
        v = PlayerInputMap(20);
    else if (s == "PIWeaponSelect8" || ss.str() == "PIWeaponSelect8")
        v = PlayerInputMap(21);
    else if (s == "PIWeaponSelect9" || ss.str() == "PIWeaponSelect9")
        v = PlayerInputMap(22);
    else if (s == "PIPositionSelect1" || ss.str() == "PIPositionSelect1")
        v = PlayerInputMap(23);
    else if (s == "PIPositionSelect2" || ss.str() == "PIPositionSelect2")
        v = PlayerInputMap(24);
    else if (s == "PIPositionSelect3" || ss.str() == "PIPositionSelect3")
        v = PlayerInputMap(25);
    else if (s == "PIPositionSelect4" || ss.str() == "PIPositionSelect4")
        v = PlayerInputMap(26);
    else if (s == "PIPositionSelect5" || ss.str() == "PIPositionSelect5")
        v = PlayerInputMap(27);
    else if (s == "PIPositionSelect6" || ss.str() == "PIPositionSelect6")
        v = PlayerInputMap(28);
    else if (s == "PIPositionSelect7" || ss.str() == "PIPositionSelect7")
        v = PlayerInputMap(29);
    else if (s == "PIPositionSelect8" || ss.str() == "PIPositionSelect8")
        v = PlayerInputMap(30);
    else if (s == "PIAltFire" || ss.str() == "PIAltFire")
        v = PlayerInputMap(31);
    else if (s == "PIReload" || ss.str() == "PIReload")
        v = PlayerInputMap(32);
    else if (s == "PISelectFunc" || ss.str() == "PISelectFunc")
        v = PlayerInputMap(33);
    else if (s == "PIDrop" || ss.str() == "PIDrop")
        v = PlayerInputMap(34);
    else if (s == "PIToggleCameraMode" || ss.str() == "PIToggleCameraMode")
        v = PlayerInputMap(35);
    else if (s == "PIToggleCamera" || ss.str() == "PIToggleCamera")
        v = PlayerInputMap(36);
    else if (s == "PILie" || ss.str() == "PILie")
        v = PlayerInputMap(37);
    else if (s == "PICrouch" || ss.str() == "PICrouch")
        v = PlayerInputMap(38);
    else if (s == "PICameraMode1" || ss.str() == "PICameraMode1")
        v = PlayerInputMap(39);
    else if (s == "PICameraMode2" || ss.str() == "PICameraMode2")
        v = PlayerInputMap(40);
    else if (s == "PICameraMode3" || ss.str() == "PICameraMode3")
        v = PlayerInputMap(41);
    else if (s == "PICameraMode4" || ss.str() == "PICameraMode4")
        v = PlayerInputMap(42);
    else if (s == "PISelectPrimWeapon" || ss.str() == "PISelectPrimWeapon")
        v = PlayerInputMap(43);
    else if (s == "PISelectSecWeapon" || ss.str() == "PISelectSecWeapon")
        v = PlayerInputMap(44);
    else if (s == "PIToggleWeapon" || ss.str() == "PIToggleWeapon")
        v = PlayerInputMap(45);
    else if (s == "PIToggleFireRate" || ss.str() == "PIToggleFireRate")
        v = PlayerInputMap(46);
    else if (s == "PIFlareFire" || ss.str() == "PIFlareFire")
        v = PlayerInputMap(47);
    else if (s == "PIRadio1" || ss.str() == "PIRadio1")
        v = PlayerInputMap(48);
    else if (s == "PIRadio2" || ss.str() == "PIRadio2")
        v = PlayerInputMap(49);
    else if (s == "PIRadio3" || ss.str() == "PIRadio3")
        v = PlayerInputMap(50);
    else if (s == "PIRadio4" || ss.str() == "PIRadio4")
        v = PlayerInputMap(51);
    else if (s == "PIRadio5" || ss.str() == "PIRadio5")
        v = PlayerInputMap(52);
    else if (s == "PIRadio6" || ss.str() == "PIRadio6")
        v = PlayerInputMap(53);
    else if (s == "PIRadio7" || ss.str() == "PIRadio7")
        v = PlayerInputMap(54);
    else if (s == "PIRadio8" || ss.str() == "PIRadio8")
        v = PlayerInputMap(55);
    else if (s == "PIScreenShot" || ss.str() == "PIScreenShot")
        v = PlayerInputMap(56);
    else if (s == "PIToolTip" || ss.str() == "PIToolTip")
        v = PlayerInputMap(57);
    else if (s == "PISayAll" || ss.str() == "PISayAll")
        v = PlayerInputMap(58);
    else if (s == "PISayTeam" || ss.str() == "PISayTeam")
        v = PlayerInputMap(59);
    else if (s == "PINextItem" || ss.str() == "PINextItem")
        v = PlayerInputMap(60);
    else if (s == "PIPrevItem" || ss.str() == "PIPrevItem")
        v = PlayerInputMap(61);
    else if (s == "PICommunication" || ss.str() == "PICommunication")
        v = PlayerInputMap(62);
    else if (s == "PIShowScoreBoard" || ss.str() == "PIShowScoreBoard")
        v = PlayerInputMap(63);
    else if (s == "PINumInput" || ss.str() == "PINumInput")
        v = PlayerInputMap(64);
    else if (s == "PINotInUse" || ss.str() == "PINotInUse")
        v = PlayerInputMap(64);
    else if (s == "PINone" || ss.str() == "PINone")
        v = PlayerInputMap(64);
    else
        v = PlayerInputMap(64);
    return is;
}
 } } }

namespace { 
// keep a second call site alive for the stream destructors of this unit
void bf2UnitKeepAlive()
{
    std::ostringstream o(std::ios_base::out);
    std::string t("x");
    o << t;
}
}
