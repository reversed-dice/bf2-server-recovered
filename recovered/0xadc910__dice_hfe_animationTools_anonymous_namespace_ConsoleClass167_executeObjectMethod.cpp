// FUNCTION: BF2 0xadc910
namespace dice { namespace hfe { namespace animationTools {

struct Vec3_adc910 { float x, y, z; };

// Declared, not defined: the target CALLs it, so this is a relocation.
void* getActiveCameraSpring_adc910();

struct Spring_adc910 {
    char        _pad0[0x30];
    Vec3_adc910  value;
};

struct Console_adc910 {
    char        _pad0[0x30];
    int         argCount;
    char        _pad1[0x4];
    Vec3_adc910* arg0;
    char        _pad2[0xc8];
    char        hasResult;
    char        _pad3[0x3];
    Vec3_adc910  result;
};

extern "C" Vec3_adc910* eom_adc910(Console_adc910* self)
{
    Vec3_adc910* ret = 0;
    if (self->argCount == 0) {
        self->hasResult = 1;
        Spring_adc910* s = (Spring_adc910*)getActiveCameraSpring_adc910();
        Vec3_adc910* src = &s->value;
        Vec3_adc910* dst = &self->result;
        float z = src->z;
        float y = src->y;
        dst->x = src->x;
        dst->y = y;
        dst->z = z;
        ret = dst;
    } else if (self->argCount == 1) {
        Vec3_adc910 v = *self->arg0;
        self->hasResult = 0;
        Spring_adc910* s = (Spring_adc910*)getActiveCameraSpring_adc910();
        Vec3_adc910* dst = &s->value;
        dst->x = v.x;
        dst->y = v.y;
        dst->z = v.z;
    }
    return ret;
}

} } }
// REVERSED_FUNCTION: dice_hfe_animationTools_anonymous_namespace_ConsoleClass167_executeObjectMethod (0xadc910)
