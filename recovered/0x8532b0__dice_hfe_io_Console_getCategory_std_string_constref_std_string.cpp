// FUNCTION: BF2 0x8532b0
#include <string>

namespace dice { namespace hfe { namespace io {

void* getConsoleObject_8532b0(void* objs, const std::string& a, const std::string& b);

typedef unsigned char (*catfn_8532b0)(void*);

} } }

extern "C" std::string getCategory_8532b0(const std::string& a, const std::string& b)
{
    std::string s;
    void* p = dice::hfe::io::getConsoleObject_8532b0(*(void**)0x00f6c690, a, b);
    if (p == 0)
        return std::string("ERROR: Objectname or/and functionname are invalid");
    switch ((*(dice::hfe::io::catfn_8532b0*)(*(char**)p + 0x38))(p))
    {
        case  0: s.append("Default", 7); break;
        case  1: s.append("Physics", 7); break;
        case  2: s.append("Damage", 6); break;
        case  3: s.append("ResourceTree", 12); break;
        case  4: s.append("SourceControl", 13); break;
        case  5: s.append("Movement", 8); break;
        case  6: s.append("Output", 6); break;
        case  7: s.append("Rotation", 8); break;
        case  8: s.append("Camera", 6); break;
        case  9: s.append("Hud", 3); break;
        case 10: s.append("Ammo", 4); break;
        case 11: s.append("Flags", 5); break;
        case 12: s.append("Environment", 11); break;
        case 13: s.append("EditorEngineSettings", 20); break;
        case 14: s.append("AI", 2); break;
        case 15: s.append("PlayerControlObject", 19); break;
        case 16: s.append("FireArm", 7); break;
        case 17: s.append("Sound", 5); break;
        case 18: s.append("Light", 5); break;
        case 19: s.append("Particle", 8); break;
        case 20: s.append("Projectile", 10); break;
        case 21: s.append("Emitter", 7); break;
        case 22: s.append("Rendering", 9); break;
        case 23: s.append("Animation", 9); break;
        case 24: s.append("WindAffector", 12); break;
        case 25: s.append("EffectBundleSettings", 20); break;
        case 26: s.append("AlphaIntensity", 14); break;
        case 27: s.append("EmitFrequency", 13); break;
        case 28: s.append("EmitSpeed", 9); break;
        case 29: s.append("StartAge", 8); break;
        case 30: s.append("SoundIntensity", 14); break;
        case 31: s.append("AgeScale", 8); break;
        case 32: s.append("LodSettings", 11); break;
    default: s.append("Undefined", 9); break;
    }
    return s;
}
// REVERSED_FUNCTION: dice_hfe_io_Console_getCategory_std_string_constref_std_string (0x8532b0)
