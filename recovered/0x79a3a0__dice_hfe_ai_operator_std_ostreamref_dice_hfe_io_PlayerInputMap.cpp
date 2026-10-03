// FUNCTION: BF2 0x79a3a0
namespace dice { namespace hfe { namespace ai {
extern void fn_407628(void* s, const char* lit);
void* cb_79a3a0(void* dst, int v) {
    switch (v) {
    case 0: fn_407628(dst, (const char*)0xbc1044); break;  // PIYaw
    case 1: fn_407628(dst, (const char*)0xbc104c); break;  // PIPitch
    case 2: fn_407628(dst, (const char*)0xbc1056); break;  // PIRoll
    case 3: fn_407628(dst, (const char*)0xbc105f); break;  // PIThrottle
    case 4: fn_407628(dst, (const char*)0xbc106c); break;  // PIMouseLookX
    case 5: fn_407628(dst, (const char*)0xbc107b); break;  // PIMouseLookY
    case 6: fn_407628(dst, (const char*)0xbc108a); break;  // PICameraX
    case 7: fn_407628(dst, (const char*)0xbc1096); break;  // PICameraY
    case 8: fn_407628(dst, (const char*)0xbc10af); break;  // PIFire
    case 9: fn_407628(dst, (const char*)0xbc10ec); break;  // PIAction
    case 10: fn_407628(dst, (const char*)0xbc10f7); break;  // PIUse
    case 11: fn_407628(dst, (const char*)0xbc10ff); break;  // PIMouseLook
    case 12: fn_407628(dst, (const char*)0xbc1142); break;  // PIAltSprint
    case 13: fn_407628(dst, (const char*)0xbc1150); break;  // PISprint
    case 14: fn_407628(dst, (const char*)0xbc11ca); break;  // PIWeaponSelect1
    case 15: fn_407628(dst, (const char*)0xbc11dc); break;  // PIWeaponSelect2
    case 16: fn_407628(dst, (const char*)0xbc11ee); break;  // PIWeaponSelect3
    case 17: fn_407628(dst, (const char*)0xbc1200); break;  // PIWeaponSelect4
    case 18: fn_407628(dst, (const char*)0xbc1212); break;  // PIWeaponSelect5
    case 19: fn_407628(dst, (const char*)0xbc1224); break;  // PIWeaponSelect6
    case 20: fn_407628(dst, (const char*)0xbc1236); break;  // PIWeaponSelect7
    case 21: fn_407628(dst, (const char*)0xbc1248); break;  // PIWeaponSelect8
    case 22: fn_407628(dst, (const char*)0xbc125a); break;  // PIWeaponSelect9
    case 23: fn_407628(dst, (const char*)0xbc126c); break;  // PIPositionSelect1
    case 24: fn_407628(dst, (const char*)0xbc1280); break;  // PIPositionSelect2
    case 25: fn_407628(dst, (const char*)0xbc1294); break;  // PIPositionSelect3
    case 26: fn_407628(dst, (const char*)0xbc12a8); break;  // PIPositionSelect4
    case 27: fn_407628(dst, (const char*)0xbc12bc); break;  // PIPositionSelect5
    case 28: fn_407628(dst, (const char*)0xbc12d0); break;  // PIPositionSelect6
    case 29: fn_407628(dst, (const char*)0xbc12e4); break;  // PIPositionSelect7
    case 30: fn_407628(dst, (const char*)0xbc12f8); break;  // PIPositionSelect8
    case 31: fn_407628(dst, (const char*)0xbc10b8); break;  // PIAltFire
    case 32: fn_407628(dst, (const char*)0xbc10d2); break;  // PIReload
    case 34: fn_407628(dst, (const char*)0xbc110d); break;  // PIDrop
    case 35: fn_407628(dst, (const char*)0xbc115b); break;  // PIToggleCameraMode
    case 36: fn_407628(dst, (const char*)0xbc11b0); break;  // PIToggleCamera
    case 37: fn_407628(dst, (const char*)0xbc1031); break;  // PILie
    case 38: fn_407628(dst, (const char*)0xbc1039); break;  // PICrouch
    case 58: fn_407628(dst, (const char*)0xbc137f); break;  // PISayAll
    case 59: fn_407628(dst, (const char*)0xbc138a); break;  // PISayTeam
    case 60: fn_407628(dst, (const char*)0xbc1116); break;  // PINextItem
    case 61: fn_407628(dst, (const char*)0xbc1123); break;  // PIPrevItem
    case 62: fn_407628(dst, (const char*)0xbc1130); break;  // PICommunication
    case 64: fn_407628(dst, (const char*)0xbc11c1); break;  // PINone
    default: break;
    }
    return dst;
}
}}}
// REVERSED_FUNCTION: dice_hfe_ai_operator_std_ostreamref_dice_hfe_io_PlayerInputMap (0x79a3a0)
