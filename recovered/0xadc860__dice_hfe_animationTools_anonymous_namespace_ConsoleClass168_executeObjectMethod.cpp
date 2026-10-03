// FUNCTION: BF2 0xadc860
namespace dice { namespace hfe { namespace animationTools {

struct Vec3_adc860 { float x, y, z; };

// Declared, not defined: the target CALLs it, so this is a relocation.
void* getActiveCameraSpring_adc860();

struct Spring_adc860 {
    char        _pad0[0x3c];
    Vec3_adc860  value;
};

struct Console_adc860 {
    char        _pad0[0x30];
    int         argCount;
    char        _pad1[0x4];
    Vec3_adc860* arg0;
    char        _pad2[0xc8];
    char        hasResult;
    char        _pad3[0x3];
    Vec3_adc860  result;
};

extern "C" Vec3_adc860* eom_adc860(Console_adc860* self)
{
    Vec3_adc860* ret = 0;
    if (self->argCount == 0) {
        self->hasResult = 1;
        Spring_adc860* s = (Spring_adc860*)getActiveCameraSpring_adc860();
        Vec3_adc860* src = &s->value;
        Vec3_adc860* dst = &self->result;
        float z = src->z;
        float y = src->y;
        dst->x = src->x;
        dst->y = y;
        dst->z = z;
        ret = dst;
    } else if (self->argCount == 1) {
        Vec3_adc860 v = *self->arg0;
        self->hasResult = 0;
        Spring_adc860* s = (Spring_adc860*)getActiveCameraSpring_adc860();
        Vec3_adc860* dst = &s->value;
        dst->x = v.x;
        dst->y = v.y;
        dst->z = v.z;
    }
    return ret;
}

} } }
// REVERSED_FUNCTION: dice_hfe_animationTools_anonymous_namespace_ConsoleClass168_executeObjectMethod (0xadc860)
