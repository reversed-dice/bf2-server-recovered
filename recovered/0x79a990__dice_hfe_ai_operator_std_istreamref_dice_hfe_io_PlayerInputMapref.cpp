// FUNCTION: BF2 0x79a990

#include <istream>
#include <string>

namespace dice { namespace hfe { namespace ai {

std::istream& operator>>(std::istream& is, int& out)
{
    std::string s;
    is >> s;
    if (s.compare("PIYaw") == 0) {
        out = 0;
    } else if (s.compare("PIPitch") == 0) {
        out = 1;
    } else if (s.compare("PIRoll") == 0) {
        out = 2;
    } else if (s.compare("PIThrottle") == 0) {
        out = 3;
    } else if (s.compare("PIMouseLookX") == 0) {
        out = 4;
    } else if (s.compare("PIMouseLookY") == 0) {
        out = 5;
    } else if (s.compare("PICameraX") == 0) {
        out = 6;
    } else if (s.compare("PICameraY") == 0) {
        out = 7;
    } else if (s.compare("PIFire") == 0) {
        out = 8;
    } else if (s.compare("PIAction") == 0) {
        out = 9;
    } else if (s.compare("PIUse") == 0) {
        out = 10;
    } else if (s.compare("PIMouseLook") == 0) {
        out = 0xb;
    } else if (s.compare("PIAltSprint") == 0) {
        out = 0xc;
    } else if (s.compare("PISprint") == 0) {
        out = 0xd;
    } else if (s.compare("PISayAll") == 0) {
        out = 0x3a;
    } else if (s.compare("PISayTeam") == 0) {
        out = 0x3b;
    } else if (s.compare("PINextItem") == 0) {
        out = 0x3c;
    } else if (s.compare("PIPrevItem") == 0) {
        out = 0x3d;
    } else if (s.compare("PICommunication") == 0) {
        out = 0x3e;
    } else if (s.compare("PIWeaponSelect1") == 0) {
        out = 0xe;
    } else if (s.compare("PIWeaponSelect2") == 0) {
        out = 0xf;
    } else if (s.compare("PIWeaponSelect3") == 0) {
        out = 0x10;
    } else if (s.compare("PIWeaponSelect4") == 0) {
        out = 0x11;
    } else if (s.compare("PIWeaponSelect5") == 0) {
        out = 0x12;
    } else if (s.compare("PIWeaponSelect6") == 0) {
        out = 0x13;
    } else if (s.compare("PIWeaponSelect7") == 0) {
        out = 0x14;
    } else if (s.compare("PIWeaponSelect8") == 0) {
        out = 0x15;
    } else if (s.compare("PIWeaponSelect9") == 0) {
        out = 0x16;
    } else if (s.compare("PIPositionSelect1") == 0) {
        out = 0x17;
    } else if (s.compare("PIPositionSelect2") == 0) {
        out = 0x18;
    } else if (s.compare("PIPositionSelect3") == 0) {
        out = 0x19;
    } else if (s.compare("PIPositionSelect4") == 0) {
        out = 0x1a;
    } else if (s.compare("PIPositionSelect5") == 0) {
        out = 0x1b;
    } else if (s.compare("PIPositionSelect6") == 0) {
        out = 0x1c;
    } else if (s.compare("PIPositionSelect7") == 0) {
        out = 0x1d;
    } else if (s.compare("PIPositionSelect8") == 0) {
        out = 0x1e;
    } else if (s.compare("PIAltFire") == 0) {
        out = 0x1f;
    } else if (s.compare("PIReload") == 0) {
        out = 0x20;
    } else if (s.compare("PIDrop") == 0) {
        out = 0x22;
    } else if (s.compare("PIToggleCameraMode") == 0) {
        out = 0x23;
    } else if (s.compare("PIToggleCamera") == 0) {
        out = 0x24;
    } else if (s.compare("PILie") == 0) {
        out = 0x25;
    } else if (s.compare("PICrouch") == 0) {
        out = 0x26;
    } else if (s.compare("PINone") == 0) {
        out = 0x40;
    } else {
        out = -1;
    }
    return is;
}

}}}
