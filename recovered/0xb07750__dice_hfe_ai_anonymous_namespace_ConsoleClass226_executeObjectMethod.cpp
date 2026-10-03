// FUNCTION: BF2 0xb07750
namespace dice { namespace hfe {
extern "C" char* dice_hfe_ai_getActiveWeaponTemplate();

long cb(long p) {
    int sel = *(int*)(p + 0x30);
    if (sel != 0) goto nz;
    {
        *(char*)(p + 0x108) = 1;
        char* t = dice_hfe_ai_getActiveWeaponTemplate();
        *(int*)(p + 0x10c) = *(int*)(t + 0x34);
        return p + 0x10c;
    }
    nz:
    if (sel != 1) return 0;
    {
        float v = **(float**)(p + 0x38);
        *(char*)(p + 0x108) = 0;
        char* t = dice_hfe_ai_getActiveWeaponTemplate();
        *(float*)(t + 0x34) = v;
        *(float*)(t + 0x38) = (v != 0.0f) ? (1.0f / v) : 0.0f;
        return 0;
    }
}
} }
