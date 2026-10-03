// FUNCTION: BF2 0xadc9c0
namespace dice { namespace hfe { namespace animationTools {

struct Vec3_adc9c0 { float x, y, z; };

// Declared, not defined: the target CALLs it, so this is a relocation.
void* getActiveCameraSpring_adc9c0();

struct Spring_adc9c0 {
    char        _pad0[0x24];
    Vec3_adc9c0  value;
};

struct Console_adc9c0 {
    char        _pad0[0x30];
    int         argCount;
    char        _pad1[0x4];
    Vec3_adc9c0* arg0;
    char        _pad2[0xc8];
    char        hasResult;
    char        _pad3[0x3];
    Vec3_adc9c0  result;
};

extern "C" Vec3_adc9c0* eom_adc9c0(Console_adc9c0* self)
{
    Vec3_adc9c0* ret = 0;
    if (self->argCount == 0) {
        self->hasResult = 1;
        Spring_adc9c0* s = (Spring_adc9c0*)getActiveCameraSpring_adc9c0();
        Vec3_adc9c0* src = &s->value;
        Vec3_adc9c0* dst = &self->result;
        float z = src->z;
        float y = src->y;
        dst->x = src->x;
        dst->y = y;
        dst->z = z;
        ret = dst;
    } else if (self->argCount == 1) {
        Vec3_adc9c0 v = *self->arg0;
        self->hasResult = 0;
        Spring_adc9c0* s = (Spring_adc9c0*)getActiveCameraSpring_adc9c0();
        Vec3_adc9c0* dst = &s->value;
        dst->x = v.x;
        dst->y = v.y;
        dst->z = v.z;
    }
    return ret;
}

} } }
// REVERSED_FUNCTION: dice_hfe_animationTools_anonymous_namespace_ConsoleClass166_executeObjectMethod (0xadc9c0)
