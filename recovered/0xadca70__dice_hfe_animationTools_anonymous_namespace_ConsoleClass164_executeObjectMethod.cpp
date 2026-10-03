// FUNCTION: BF2 0xadca70
namespace dice { namespace hfe { namespace animationTools {

struct Vec3_adca70 { float x, y, z; };

// Declared, not defined: the target CALLs it, so this is a relocation.
void* getActiveCameraSpring_adca70();

struct Spring_adca70 {
    char        _pad0[0x18];
    Vec3_adca70  value;
};

struct Console_adca70 {
    char        _pad0[0x30];
    int         argCount;
    char        _pad1[0x4];
    Vec3_adca70* arg0;
    char        _pad2[0xc8];
    char        hasResult;
    char        _pad3[0x3];
    Vec3_adca70  result;
};

extern "C" Vec3_adca70* eom_adca70(Console_adca70* self)
{
    Vec3_adca70* ret = 0;
    if (self->argCount == 0) {
        self->hasResult = 1;
        Spring_adca70* s = (Spring_adca70*)getActiveCameraSpring_adca70();
        Vec3_adca70* src = &s->value;
        Vec3_adca70* dst = &self->result;
        float z = src->z;
        float y = src->y;
        dst->x = src->x;
        dst->y = y;
        dst->z = z;
        ret = dst;
    } else if (self->argCount == 1) {
        Vec3_adca70 v = *self->arg0;
        self->hasResult = 0;
        Spring_adca70* s = (Spring_adca70*)getActiveCameraSpring_adca70();
        Vec3_adca70* dst = &s->value;
        dst->x = v.x;
        dst->y = v.y;
        dst->z = v.z;
    }
    return ret;
}

} } }
// REVERSED_FUNCTION: dice_hfe_animationTools_anonymous_namespace_ConsoleClass164_executeObjectMethod (0xadca70)
