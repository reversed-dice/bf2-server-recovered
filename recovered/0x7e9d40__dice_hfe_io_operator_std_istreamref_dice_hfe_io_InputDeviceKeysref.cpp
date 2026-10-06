// FUNCTION: BF2 0x7e9d40
#include <istream>
#include <string>

namespace dice { namespace hfe { namespace io {
enum InputDeviceKeys { InputDeviceKeys_0 };

std::istream& operator>>(std::istream& is, InputDeviceKeys& v)
{
    std::string s;
    is >> s;
    v = InputDeviceKeys(255);
    if (s.compare("IDKey_Escape") == 0)
        v = InputDeviceKeys(1);
    else if (s.compare("IDKey_1") == 0)
        v = InputDeviceKeys(2);
    else if (s.compare("IDKey_2") == 0)
        v = InputDeviceKeys(3);
    else if (s.compare("IDKey_3") == 0)
        v = InputDeviceKeys(4);
    else if (s.compare("IDKey_4") == 0)
        v = InputDeviceKeys(5);
    else if (s.compare("IDKey_5") == 0)
        v = InputDeviceKeys(6);
    else if (s.compare("IDKey_6") == 0)
        v = InputDeviceKeys(7);
    else if (s.compare("IDKey_7") == 0)
        v = InputDeviceKeys(8);
    else if (s.compare("IDKey_8") == 0)
        v = InputDeviceKeys(9);
    else if (s.compare("IDKey_9") == 0)
        v = InputDeviceKeys(10);
    else if (s.compare("IDKey_0") == 0)
        v = InputDeviceKeys(11);
    else if (s.compare("IDKey_Minus") == 0)
        v = InputDeviceKeys(12);
    else if (s.compare("IDKey_Equals") == 0)
        v = InputDeviceKeys(13);
    else if (s.compare("IDKey_Backspace") == 0)
        v = InputDeviceKeys(14);
    else if (s.compare("IDKey_Tab") == 0)
        v = InputDeviceKeys(15);
    else if (s.compare("IDKey_Q") == 0)
        v = InputDeviceKeys(16);
    else if (s.compare("IDKey_W") == 0)
        v = InputDeviceKeys(17);
    else if (s.compare("IDKey_E") == 0)
        v = InputDeviceKeys(18);
    else if (s.compare("IDKey_R") == 0)
        v = InputDeviceKeys(19);
    else if (s.compare("IDKey_T") == 0)
        v = InputDeviceKeys(20);
    else if (s.compare("IDKey_Y") == 0)
        v = InputDeviceKeys(21);
    else if (s.compare("IDKey_U") == 0)
        v = InputDeviceKeys(22);
    else if (s.compare("IDKey_I") == 0)
        v = InputDeviceKeys(23);
    else if (s.compare("IDKey_O") == 0)
        v = InputDeviceKeys(24);
    else if (s.compare("IDKey_P") == 0)
        v = InputDeviceKeys(25);
    else if (s.compare("IDKey_LeftBracket") == 0)
        v = InputDeviceKeys(26);
    else if (s.compare("IDKey_RightBracket") == 0)
        v = InputDeviceKeys(27);
    else if (s.compare("IDKey_Enter") == 0)
        v = InputDeviceKeys(28);
    else if (s.compare("IDKey_LeftCtrl") == 0)
        v = InputDeviceKeys(29);
    else if (s.compare("IDKey_A") == 0)
        v = InputDeviceKeys(30);
    else if (s.compare("IDKey_S") == 0)
        v = InputDeviceKeys(31);
    else if (s.compare("IDKey_D") == 0)
        v = InputDeviceKeys(32);
    else if (s.compare("IDKey_F") == 0)
        v = InputDeviceKeys(33);
    else if (s.compare("IDKey_G") == 0)
        v = InputDeviceKeys(34);
    else if (s.compare("IDKey_H") == 0)
        v = InputDeviceKeys(35);
    else if (s.compare("IDKey_J") == 0)
        v = InputDeviceKeys(36);
    else if (s.compare("IDKey_K") == 0)
        v = InputDeviceKeys(37);
    else if (s.compare("IDKey_L") == 0)
        v = InputDeviceKeys(38);
    else if (s.compare("IDKey_Semicolon") == 0)
        v = InputDeviceKeys(39);
    else if (s.compare("IDKey_Apostrophe") == 0)
        v = InputDeviceKeys(40);
    else if (s.compare("IDKey_Grave") == 0)
        v = InputDeviceKeys(41);
    else if (s.compare("IDKey_LeftShift") == 0)
        v = InputDeviceKeys(42);
    else if (s.compare("IDKey_Backslash") == 0)
        v = InputDeviceKeys(43);
    else if (s.compare("IDKey_Z") == 0)
        v = InputDeviceKeys(44);
    else if (s.compare("IDKey_X") == 0)
        v = InputDeviceKeys(45);
    else if (s.compare("IDKey_C") == 0)
        v = InputDeviceKeys(46);
    else if (s.compare("IDKey_V") == 0)
        v = InputDeviceKeys(47);
    else if (s.compare("IDKey_B") == 0)
        v = InputDeviceKeys(48);
    else if (s.compare("IDKey_N") == 0)
        v = InputDeviceKeys(49);
    else if (s.compare("IDKey_M") == 0)
        v = InputDeviceKeys(50);
    else if (s.compare("IDKey_Comma") == 0)
        v = InputDeviceKeys(51);
    else if (s.compare("IDKey_Period") == 0)
        v = InputDeviceKeys(52);
    else if (s.compare("IDKey_Slash") == 0)
        v = InputDeviceKeys(53);
    else if (s.compare("IDKey_RightShift") == 0)
        v = InputDeviceKeys(54);
    else if (s.compare("IDKey_Multiply") == 0)
        v = InputDeviceKeys(55);
    else if (s.compare("IDKey_LeftAlt") == 0)
        v = InputDeviceKeys(56);
    else if (s.compare("IDKey_Space") == 0)
        v = InputDeviceKeys(57);
    else if (s.compare("IDKey_Capital") == 0)
        v = InputDeviceKeys(58);
    else if (s.compare("IDKey_F1") == 0)
        v = InputDeviceKeys(59);
    else if (s.compare("IDKey_F2") == 0)
        v = InputDeviceKeys(60);
    else if (s.compare("IDKey_F3") == 0)
        v = InputDeviceKeys(61);
    else if (s.compare("IDKey_F4") == 0)
        v = InputDeviceKeys(62);
    else if (s.compare("IDKey_F5") == 0)
        v = InputDeviceKeys(63);
    else if (s.compare("IDKey_F6") == 0)
        v = InputDeviceKeys(64);
    else if (s.compare("IDKey_F7") == 0)
        v = InputDeviceKeys(65);
    else if (s.compare("IDKey_F8") == 0)
        v = InputDeviceKeys(66);
    else if (s.compare("IDKey_F9") == 0)
        v = InputDeviceKeys(67);
    else if (s.compare("IDKey_F10") == 0)
        v = InputDeviceKeys(68);
    else if (s.compare("IDKey_f1") == 0)
        v = InputDeviceKeys(59);
    else if (s.compare("IDKey_f2") == 0)
        v = InputDeviceKeys(60);
    else if (s.compare("IDKey_f3") == 0)
        v = InputDeviceKeys(61);
    else if (s.compare("IDKey_f4") == 0)
        v = InputDeviceKeys(62);
    else if (s.compare("IDKey_f5") == 0)
        v = InputDeviceKeys(63);
    else if (s.compare("IDKey_f6") == 0)
        v = InputDeviceKeys(64);
    else if (s.compare("IDKey_f7") == 0)
        v = InputDeviceKeys(65);
    else if (s.compare("IDKey_f8") == 0)
        v = InputDeviceKeys(66);
    else if (s.compare("IDKey_f9") == 0)
        v = InputDeviceKeys(67);
    else if (s.compare("IDKey_f10") == 0)
        v = InputDeviceKeys(68);
    else if (s.compare("IDKey_Numlock") == 0)
        v = InputDeviceKeys(69);
    else if (s.compare("IDKey_ScrollLock") == 0)
        v = InputDeviceKeys(70);
    else if (s.compare("IDKey_Numpad7") == 0)
        v = InputDeviceKeys(71);
    else if (s.compare("IDKey_Numpad8") == 0)
        v = InputDeviceKeys(72);
    else if (s.compare("IDKey_Numpad9") == 0)
        v = InputDeviceKeys(73);
    else if (s.compare("IDKey_Subtract") == 0)
        v = InputDeviceKeys(74);
    else if (s.compare("IDKey_Numpad4") == 0)
        v = InputDeviceKeys(75);
    else if (s.compare("IDKey_Numpad5") == 0)
        v = InputDeviceKeys(76);
    else if (s.compare("IDKey_Numpad6") == 0)
        v = InputDeviceKeys(77);
    else if (s.compare("IDKey_Add") == 0)
        v = InputDeviceKeys(78);
    else if (s.compare("IDKey_Numpad1") == 0)
        v = InputDeviceKeys(79);
    else if (s.compare("IDKey_Numpad2") == 0)
        v = InputDeviceKeys(80);
    else if (s.compare("IDKey_Numpad3") == 0)
        v = InputDeviceKeys(81);
    else if (s.compare("IDKey_Numpad0") == 0)
        v = InputDeviceKeys(82);
    else if (s.compare("IDKey_Decimal") == 0)
        v = InputDeviceKeys(83);
    else if (s.compare("IDKey_OEM_102") == 0)
        v = InputDeviceKeys(86);
    else if (s.compare("IDKey_F11") == 0)
        v = InputDeviceKeys(87);
    else if (s.compare("IDKey_F12") == 0)
        v = InputDeviceKeys(88);
    else if (s.compare("IDKey_F13") == 0)
        v = InputDeviceKeys(100);
    else if (s.compare("IDKey_F14") == 0)
        v = InputDeviceKeys(101);
    else if (s.compare("IDKey_F15") == 0)
        v = InputDeviceKeys(102);
    else if (s.compare("IDKey_f11") == 0)
        v = InputDeviceKeys(87);
    else if (s.compare("IDKey_f12") == 0)
        v = InputDeviceKeys(88);
    else if (s.compare("IDKey_f13") == 0)
        v = InputDeviceKeys(100);
    else if (s.compare("IDKey_f14") == 0)
        v = InputDeviceKeys(101);
    else if (s.compare("IDKey_f15") == 0)
        v = InputDeviceKeys(102);
    else if (s.compare("IDKey_Kana") == 0)
        v = InputDeviceKeys(112);
    else if (s.compare("IDKey_Convert") == 0)
        v = InputDeviceKeys(121);
    else if (s.compare("IDKey_NoConvert") == 0)
        v = InputDeviceKeys(123);
    else if (s.compare("IDKey_Yen") == 0)
        v = InputDeviceKeys(125);
    else if (s.compare("IDKey_NumpadEquals") == 0)
        v = InputDeviceKeys(141);
    else if (s.compare("IDKey_PrevTrack") == 0)
        v = InputDeviceKeys(144);
    else if (s.compare("IDKey_At") == 0)
        v = InputDeviceKeys(145);
    else if (s.compare("IDKey_Colon") == 0)
        v = InputDeviceKeys(146);
    else if (s.compare("IDKey_Underline") == 0)
        v = InputDeviceKeys(147);
    else if (s.compare("IDKey_Kanji") == 0)
        v = InputDeviceKeys(148);
    else if (s.compare("IDKey_Stop") == 0)
        v = InputDeviceKeys(149);
    else if (s.compare("IDKey_Ax") == 0)
        v = InputDeviceKeys(150);
    else if (s.compare("IDKey_Unlabeled") == 0)
        v = InputDeviceKeys(151);
    else if (s.compare("IDKey_NextTrack") == 0)
        v = InputDeviceKeys(153);
    else if (s.compare("IDKey_NumpadEnter") == 0)
        v = InputDeviceKeys(156);
    else if (s.compare("IDKey_RightCtrl") == 0)
        v = InputDeviceKeys(157);
    if (s.compare("IDKey_Mute") == 0)
        v = InputDeviceKeys(160);
    else if (s.compare("IDKey_Calculator") == 0)
        v = InputDeviceKeys(161);
    else if (s.compare("IDKey_PlayPause") == 0)
        v = InputDeviceKeys(162);
    else if (s.compare("IDKey_MediaStop") == 0)
        v = InputDeviceKeys(164);
    else if (s.compare("IDKey_VolumeDown") == 0)
        v = InputDeviceKeys(174);
    else if (s.compare("IDKey_VolumeUp") == 0)
        v = InputDeviceKeys(176);
    else if (s.compare("IDKey_WebHome") == 0)
        v = InputDeviceKeys(178);
    else if (s.compare("IDKey_NumpadComma") == 0)
        v = InputDeviceKeys(179);
    else if (s.compare("IDKey_Divide") == 0)
        v = InputDeviceKeys(181);
    else if (s.compare("IDKey_PrintScreen") == 0)
        v = InputDeviceKeys(183);
    else if (s.compare("IDKey_RightAlt") == 0)
        v = InputDeviceKeys(184);
    else if (s.compare("IDKey_Home") == 0)
        v = InputDeviceKeys(199);
    else if (s.compare("IDKey_ArrowUp") == 0)
        v = InputDeviceKeys(200);
    else if (s.compare("IDKey_PageUp") == 0)
        v = InputDeviceKeys(201);
    else if (s.compare("IDKey_ArrowLeft") == 0)
        v = InputDeviceKeys(203);
    else if (s.compare("IDKey_ArrowRight") == 0)
        v = InputDeviceKeys(205);
    else if (s.compare("IDKey_End") == 0)
        v = InputDeviceKeys(207);
    else if (s.compare("IDKey_ArrowDown") == 0)
        v = InputDeviceKeys(208);
    else if (s.compare("IDKey_PageDown") == 0)
        v = InputDeviceKeys(209);
    else if (s.compare("IDKey_Insert") == 0)
        v = InputDeviceKeys(210);
    else if (s.compare("IDKey_Delete") == 0)
        v = InputDeviceKeys(211);
    else if (s.compare("IDKey_LeftWin") == 0)
        v = InputDeviceKeys(219);
    else if (s.compare("IDKey_RightWin") == 0)
        v = InputDeviceKeys(220);
    else if (s.compare("IDKey_AppMenu") == 0)
        v = InputDeviceKeys(221);
    else if (s.compare("IDKey_Power") == 0)
        v = InputDeviceKeys(222);
    else if (s.compare("IDKey_Sleep") == 0)
        v = InputDeviceKeys(223);
    else if (s.compare("IDKey_Wake") == 0)
        v = InputDeviceKeys(227);
    else if (s.compare("IDKey_WebSearch") == 0)
        v = InputDeviceKeys(229);
    else if (s.compare("IDKey_WebFavorites") == 0)
        v = InputDeviceKeys(230);
    else if (s.compare("IDKey_WebRefresh") == 0)
        v = InputDeviceKeys(231);
    else if (s.compare("IDKey_WebStop") == 0)
        v = InputDeviceKeys(232);
    else if (s.compare("IDKey_WebForward") == 0)
        v = InputDeviceKeys(233);
    else if (s.compare("IDKey_WebBack") == 0)
        v = InputDeviceKeys(234);
    else if (s.compare("IDKey_MyComputer") == 0)
        v = InputDeviceKeys(235);
    else if (s.compare("IDKey_Mail") == 0)
        v = InputDeviceKeys(236);
    else if (s.compare("IDKey_MediaSelect") == 0)
        v = InputDeviceKeys(237);
    else if (s.compare("IDKey_Pause") == 0)
        v = InputDeviceKeys(197);
    else if (s.compare("IDKey_Unknown") == 0)
        v = InputDeviceKeys(255);
    return is;
}

} } }
