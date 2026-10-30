// FUNCTION: BF2 0x7f6ba0
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
enum GameInputMap { GameInputMap_0 };
std::ostream& operator<<(std::ostream& os, GameInputMap v);
 } } }

namespace dice { namespace hfe { namespace io { 
std::wistream& operator>>(std::wistream& is, GameInputMap& v)
{
    std::wstring ws;
    is >> ws;
    std::string s = makeNarrow(ws);
    std::ostringstream ss;
    if (s.size() <= 2) {
        int i = -1;
        if (sscanf(s.c_str(), "%d", &i) == 1)
            ss << (GameInputMap)i;
    }
    if (s == "GIMenu" || ss.str() == "GIMenu")
        v = GameInputMap(0);
    else if (s == "GIToggleConsole" || ss.str() == "GIToggleConsole")
        v = GameInputMap(1);
    else if (s == "GIEscape" || ss.str() == "GIEscape")
        v = GameInputMap(2);
    else if (s == "GIUp" || ss.str() == "GIUp")
        v = GameInputMap(3);
    else if (s == "GIDown" || ss.str() == "GIDown")
        v = GameInputMap(4);
    else if (s == "GILeft" || ss.str() == "GILeft")
        v = GameInputMap(5);
    else if (s == "GIRight" || ss.str() == "GIRight")
        v = GameInputMap(6);
    else if (s == "GIPageUp" || ss.str() == "GIPageUp")
        v = GameInputMap(7);
    else if (s == "GIPageDown" || ss.str() == "GIPageDown")
        v = GameInputMap(8);
    else if (s == "GIRightShift" || ss.str() == "GIRightShift")
        v = GameInputMap(9);
    else if (s == "GILeftShift" || ss.str() == "GILeftShift")
        v = GameInputMap(10);
    else if (s == "GILeftCtrl" || ss.str() == "GILeftCtrl")
        v = GameInputMap(11);
    else if (s == "GIRightCtrl" || ss.str() == "GIRightCtrl")
        v = GameInputMap(12);
    else if (s == "GILeftAlt" || ss.str() == "GILeftAlt")
        v = GameInputMap(13);
    else if (s == "GIRightAlt" || ss.str() == "GIRightAlt")
        v = GameInputMap(14);
    else if (s == "GIOk" || ss.str() == "GIOk")
        v = GameInputMap(15);
    else if (s == "GIAltOk" || ss.str() == "GIAltOk")
        v = GameInputMap(16);
    else if (s == "GICancel" || ss.str() == "GICancel")
        v = GameInputMap(17);
    else if (s == "GIScreenShot" || ss.str() == "GIScreenShot")
        v = GameInputMap(18);
    else if (s == "GITogglePause" || ss.str() == "GITogglePause")
        v = GameInputMap(19);
    else if (s == "GIMouseLookX" || ss.str() == "GIMouseLookX")
        v = GameInputMap(20);
    else if (s == "GIMouseLookY" || ss.str() == "GIMouseLookY")
        v = GameInputMap(21);
    else if (s == "GISayAll" || ss.str() == "GISayAll")
        v = GameInputMap(22);
    else if (s == "GISayTeam" || ss.str() == "GISayTeam")
        v = GameInputMap(23);
    else if (s == "GISaySquad" || ss.str() == "GISaySquad")
        v = GameInputMap(24);
    else if (s == "GIMouseWheelUp" || ss.str() == "GIMouseWheelUp")
        v = GameInputMap(25);
    else if (s == "GIMouseWheelDown" || ss.str() == "GIMouseWheelDown")
        v = GameInputMap(26);
    else if (s == "GIQuit" || ss.str() == "GIQuit")
        v = GameInputMap(27);
    else if (s == "GITab" || ss.str() == "GITab")
        v = GameInputMap(28);
    else if (s == "GIEnter" || ss.str() == "GIEnter")
        v = GameInputMap(29);
    else if (s == "GIDelete" || ss.str() == "GIDelete")
        v = GameInputMap(30);
    else if (s == "GIBack" || ss.str() == "GIBack")
        v = GameInputMap(31);
    else if (s == "GIAltEnter" || ss.str() == "GIAltEnter")
        v = GameInputMap(32);
    else if (s == "GITacticalComm" || ss.str() == "GITacticalComm")
        v = GameInputMap(33);
    else if (s == "GIRadioComm" || ss.str() == "GIRadioComm")
        v = GameInputMap(34);
    else if (s == "GIMapSize" || ss.str() == "GIMapSize")
        v = GameInputMap(35);
    else if (s == "GIMapZoom" || ss.str() == "GIMapZoom")
        v = GameInputMap(36);
    else if (s == "GIMenuSelect0" || ss.str() == "GIMenuSelect0")
        v = GameInputMap(37);
    else if (s == "GIMenuSelect1" || ss.str() == "GIMenuSelect1")
        v = GameInputMap(38);
    else if (s == "GIMenuSelect2" || ss.str() == "GIMenuSelect2")
        v = GameInputMap(39);
    else if (s == "GIMenuSelect3" || ss.str() == "GIMenuSelect3")
        v = GameInputMap(40);
    else if (s == "GIMenuSelect4" || ss.str() == "GIMenuSelect4")
        v = GameInputMap(41);
    else if (s == "GIMenuSelect5" || ss.str() == "GIMenuSelect5")
        v = GameInputMap(42);
    else if (s == "GIMenuSelect6" || ss.str() == "GIMenuSelect6")
        v = GameInputMap(43);
    else if (s == "GIMenuSelect7" || ss.str() == "GIMenuSelect7")
        v = GameInputMap(44);
    else if (s == "GIMenuSelect8" || ss.str() == "GIMenuSelect8")
        v = GameInputMap(45);
    else if (s == "GIMenuSelect9" || ss.str() == "GIMenuSelect9")
        v = GameInputMap(46);
    else if (s == "GIYes" || ss.str() == "GIYes")
        v = GameInputMap(47);
    else if (s == "GINo" || ss.str() == "GINo")
        v = GameInputMap(48);
    else if (s == "GIAutoAccept" || ss.str() == "GIAutoAccept")
        v = GameInputMap(49);
    else if (s == "GICreateSquad" || ss.str() == "GICreateSquad")
        v = GameInputMap(50);
    else if (s == "GIJoinSquad" || ss.str() == "GIJoinSquad")
        v = GameInputMap(51);
    else if (s == "GISelectSquad" || ss.str() == "GISelectSquad")
        v = GameInputMap(52);
    else if (s == "GIToggleFreeCamera" || ss.str() == "GIToggleFreeCamera")
        v = GameInputMap(53);
    else if (s == "GIHotRankUp" || ss.str() == "GIHotRankUp")
        v = GameInputMap(54);
    else if (s == "GIShowScoreboard" || ss.str() == "GIShowScoreboard")
        v = GameInputMap(55);
    else if (s == "GIVoipPushToTalk" || ss.str() == "GIVoipPushToTalk")
        v = GameInputMap(61);
    else if (s == "GIVoipUseLeaderChannel" || ss.str() == "GIVoipUseLeaderChannel")
        v = GameInputMap(56);
    else if (s == "GI3dMap" || ss.str() == "GI3dMap")
        v = GameInputMap(57);
    else if (s == "GIScript1" || ss.str() == "GIScript1")
        v = GameInputMap(62);
    else if (s == "GIScript2" || ss.str() == "GIScript2")
        v = GameInputMap(63);
    else if (s == "GIScript3" || ss.str() == "GIScript3")
        v = GameInputMap(64);
    else if (s == "GIScript4" || ss.str() == "GIScript4")
        v = GameInputMap(65);
    else if (s == "GIScript5" || ss.str() == "GIScript5")
        v = GameInputMap(66);
    else if (s == "GIScript6" || ss.str() == "GIScript6")
        v = GameInputMap(67);
    else if (s == "GIScript7" || ss.str() == "GIScript7")
        v = GameInputMap(68);
    else if (s == "GIScript8" || ss.str() == "GIScript8")
        v = GameInputMap(69);
    else if (s == "GIScript9" || ss.str() == "GIScript9")
        v = GameInputMap(70);
    else if (s == "GIScript10" || ss.str() == "GIScript10")
        v = GameInputMap(71);
    else if (s == "GIScript11" || ss.str() == "GIScript11")
        v = GameInputMap(72);
    else if (s == "GIScript12" || ss.str() == "GIScript12")
        v = GameInputMap(73);
    else if (s == "GISelectAll" || ss.str() == "GISelectAll")
        v = GameInputMap(58);
    else if (s == "GIDeselectAll" || ss.str() == "GIDeselectAll")
        v = GameInputMap(59);
    else if (s == "GILeader" || ss.str() == "GILeader")
        v = GameInputMap(60);
    else if (s == "GINumInput" || ss.str() == "GINumInput")
        v = GameInputMap(74);
    else if (s == "GINone" || ss.str() == "GINone")
        v = GameInputMap(74);
    else
        v = GameInputMap(74);
    return is;
}
 } } }

namespace dice { namespace hfe { namespace io { 
std::istream& operator>>(std::istream& is, GameInputMap& v)
{
    std::string s;
    is >> s;
    std::ostringstream ss;
    if (s.size() <= 2) {
        int i = -1;
        if (sscanf(s.c_str(), "%d", &i) == 1)
            ss << (GameInputMap)i;
    }
    if (s == "GIMenu" || ss.str() == "GIMenu")
        v = GameInputMap(0);
    else if (s == "GIToggleConsole" || ss.str() == "GIToggleConsole")
        v = GameInputMap(1);
    else if (s == "GIEscape" || ss.str() == "GIEscape")
        v = GameInputMap(2);
    else if (s == "GIUp" || ss.str() == "GIUp")
        v = GameInputMap(3);
    else if (s == "GIDown" || ss.str() == "GIDown")
        v = GameInputMap(4);
    else if (s == "GILeft" || ss.str() == "GILeft")
        v = GameInputMap(5);
    else if (s == "GIRight" || ss.str() == "GIRight")
        v = GameInputMap(6);
    else if (s == "GIPageUp" || ss.str() == "GIPageUp")
        v = GameInputMap(7);
    else if (s == "GIPageDown" || ss.str() == "GIPageDown")
        v = GameInputMap(8);
    else if (s == "GIRightShift" || ss.str() == "GIRightShift")
        v = GameInputMap(9);
    else if (s == "GILeftShift" || ss.str() == "GILeftShift")
        v = GameInputMap(10);
    else if (s == "GILeftCtrl" || ss.str() == "GILeftCtrl")
        v = GameInputMap(11);
    else if (s == "GIRightCtrl" || ss.str() == "GIRightCtrl")
        v = GameInputMap(12);
    else if (s == "GILeftAlt" || ss.str() == "GILeftAlt")
        v = GameInputMap(13);
    else if (s == "GIRightAlt" || ss.str() == "GIRightAlt")
        v = GameInputMap(14);
    else if (s == "GIOk" || ss.str() == "GIOk")
        v = GameInputMap(15);
    else if (s == "GIAltOk" || ss.str() == "GIAltOk")
        v = GameInputMap(16);
    else if (s == "GICancel" || ss.str() == "GICancel")
        v = GameInputMap(17);
    else if (s == "GIScreenShot" || ss.str() == "GIScreenShot")
        v = GameInputMap(18);
    else if (s == "GITogglePause" || ss.str() == "GITogglePause")
        v = GameInputMap(19);
    else if (s == "GIMouseLookX" || ss.str() == "GIMouseLookX")
        v = GameInputMap(20);
    else if (s == "GIMouseLookY" || ss.str() == "GIMouseLookY")
        v = GameInputMap(21);
    else if (s == "GISayAll" || ss.str() == "GISayAll")
        v = GameInputMap(22);
    else if (s == "GISayTeam" || ss.str() == "GISayTeam")
        v = GameInputMap(23);
    else if (s == "GISaySquad" || ss.str() == "GISaySquad")
        v = GameInputMap(24);
    else if (s == "GIMouseWheelUp" || ss.str() == "GIMouseWheelUp")
        v = GameInputMap(25);
    else if (s == "GIMouseWheelDown" || ss.str() == "GIMouseWheelDown")
        v = GameInputMap(26);
    else if (s == "GIQuit" || ss.str() == "GIQuit")
        v = GameInputMap(27);
    else if (s == "GITab" || ss.str() == "GITab")
        v = GameInputMap(28);
    else if (s == "GIEnter" || ss.str() == "GIEnter")
        v = GameInputMap(29);
    else if (s == "GIDelete" || ss.str() == "GIDelete")
        v = GameInputMap(30);
    else if (s == "GIBack" || ss.str() == "GIBack")
        v = GameInputMap(31);
    else if (s == "GIAltEnter" || ss.str() == "GIAltEnter")
        v = GameInputMap(32);
    else if (s == "GITacticalComm" || ss.str() == "GITacticalComm")
        v = GameInputMap(33);
    else if (s == "GIRadioComm" || ss.str() == "GIRadioComm")
        v = GameInputMap(34);
    else if (s == "GIMapSize" || ss.str() == "GIMapSize")
        v = GameInputMap(35);
    else if (s == "GIMapZoom" || ss.str() == "GIMapZoom")
        v = GameInputMap(36);
    else if (s == "GIMenuSelect0" || ss.str() == "GIMenuSelect0")
        v = GameInputMap(37);
    else if (s == "GIMenuSelect1" || ss.str() == "GIMenuSelect1")
        v = GameInputMap(38);
    else if (s == "GIMenuSelect2" || ss.str() == "GIMenuSelect2")
        v = GameInputMap(39);
    else if (s == "GIMenuSelect3" || ss.str() == "GIMenuSelect3")
        v = GameInputMap(40);
    else if (s == "GIMenuSelect4" || ss.str() == "GIMenuSelect4")
        v = GameInputMap(41);
    else if (s == "GIMenuSelect5" || ss.str() == "GIMenuSelect5")
        v = GameInputMap(42);
    else if (s == "GIMenuSelect6" || ss.str() == "GIMenuSelect6")
        v = GameInputMap(43);
    else if (s == "GIMenuSelect7" || ss.str() == "GIMenuSelect7")
        v = GameInputMap(44);
    else if (s == "GIMenuSelect8" || ss.str() == "GIMenuSelect8")
        v = GameInputMap(45);
    else if (s == "GIMenuSelect9" || ss.str() == "GIMenuSelect9")
        v = GameInputMap(46);
    else if (s == "GIYes" || ss.str() == "GIYes")
        v = GameInputMap(47);
    else if (s == "GINo" || ss.str() == "GINo")
        v = GameInputMap(48);
    else if (s == "GIAutoAccept" || ss.str() == "GIAutoAccept")
        v = GameInputMap(49);
    else if (s == "GICreateSquad" || ss.str() == "GICreateSquad")
        v = GameInputMap(50);
    else if (s == "GIJoinSquad" || ss.str() == "GIJoinSquad")
        v = GameInputMap(51);
    else if (s == "GISelectSquad" || ss.str() == "GISelectSquad")
        v = GameInputMap(52);
    else if (s == "GIToggleFreeCamera" || ss.str() == "GIToggleFreeCamera")
        v = GameInputMap(53);
    else if (s == "GIHotRankUp" || ss.str() == "GIHotRankUp")
        v = GameInputMap(54);
    else if (s == "GIShowScoreboard" || ss.str() == "GIShowScoreboard")
        v = GameInputMap(55);
    else if (s == "GIVoipPushToTalk" || ss.str() == "GIVoipPushToTalk")
        v = GameInputMap(61);
    else if (s == "GIVoipUseLeaderChannel" || ss.str() == "GIVoipUseLeaderChannel")
        v = GameInputMap(56);
    else if (s == "GI3dMap" || ss.str() == "GI3dMap")
        v = GameInputMap(57);
    else if (s == "GIScript1" || ss.str() == "GIScript1")
        v = GameInputMap(62);
    else if (s == "GIScript2" || ss.str() == "GIScript2")
        v = GameInputMap(63);
    else if (s == "GIScript3" || ss.str() == "GIScript3")
        v = GameInputMap(64);
    else if (s == "GIScript4" || ss.str() == "GIScript4")
        v = GameInputMap(65);
    else if (s == "GIScript5" || ss.str() == "GIScript5")
        v = GameInputMap(66);
    else if (s == "GIScript6" || ss.str() == "GIScript6")
        v = GameInputMap(67);
    else if (s == "GIScript7" || ss.str() == "GIScript7")
        v = GameInputMap(68);
    else if (s == "GIScript8" || ss.str() == "GIScript8")
        v = GameInputMap(69);
    else if (s == "GIScript9" || ss.str() == "GIScript9")
        v = GameInputMap(70);
    else if (s == "GIScript10" || ss.str() == "GIScript10")
        v = GameInputMap(71);
    else if (s == "GIScript11" || ss.str() == "GIScript11")
        v = GameInputMap(72);
    else if (s == "GIScript12" || ss.str() == "GIScript12")
        v = GameInputMap(73);
    else if (s == "GISelectAll" || ss.str() == "GISelectAll")
        v = GameInputMap(58);
    else if (s == "GIDeselectAll" || ss.str() == "GIDeselectAll")
        v = GameInputMap(59);
    else if (s == "GILeader" || ss.str() == "GILeader")
        v = GameInputMap(60);
    else if (s == "GINumInput" || ss.str() == "GINumInput")
        v = GameInputMap(74);
    else if (s == "GINone" || ss.str() == "GINone")
        v = GameInputMap(74);
    else
        v = GameInputMap(74);
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
