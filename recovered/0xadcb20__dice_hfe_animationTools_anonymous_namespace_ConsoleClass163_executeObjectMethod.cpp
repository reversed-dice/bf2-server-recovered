// FUNCTION: BF2 0xadcb20
namespace dice { namespace hfe { namespace animationTools {

struct Vec3_adcb20 { float x, y, z; };

// Declared, not defined: the target CALLs it, so this is a relocation.
void* getActiveCameraSpring_adcb20();

struct Spring_adcb20 {
    char        _pad0[0xc];
    Vec3_adcb20  value;
};

struct Console_adcb20 {
    char        _pad0[0x30];
    int         argCount;
    char        _pad1[0x4];
    Vec3_adcb20* arg0;
    char        _pad2[0xc8];
    char        hasResult;
    char        _pad3[0x3];
    Vec3_adcb20  result;
};

extern "C" Vec3_adcb20* eom_adcb20(Console_adcb20* self)
{
    Vec3_adcb20* ret = 0;
    if (self->argCount == 0) {
        self->hasResult = 1;
        Spring_adcb20* s = (Spring_adcb20*)getActiveCameraSpring_adcb20();
        Vec3_adcb20* src = &s->value;
        Vec3_adcb20* dst = &self->result;
        float z = src->z;
        float y = src->y;
        dst->x = src->x;
        dst->y = y;
        dst->z = z;
        ret = dst;
    } else if (self->argCount == 1) {
        Vec3_adcb20 v = *self->arg0;
        self->hasResult = 0;
        Spring_adcb20* s = (Spring_adcb20*)getActiveCameraSpring_adcb20();
        Vec3_adcb20* dst = &s->value;
        dst->x = v.x;
        dst->y = v.y;
        dst->z = v.z;
    }
    return ret;
}

} } }
// REVERSED_FUNCTION: dice_hfe_animationTools_anonymous_namespace_ConsoleClass163_executeObjectMethod (0xadcb20)
