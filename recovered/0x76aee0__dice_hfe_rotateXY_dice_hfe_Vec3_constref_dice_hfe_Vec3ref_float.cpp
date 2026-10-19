// FUNCTION: BF2 0x76aee0
extern "C" float cosf(float);
extern "C" float sinf(float);

namespace dice { namespace hfe {

struct RotSrc_76aee0 {
    float a;
    float b;
};

class Rot_76aee0 {
public:
    void rotate(float* out, float angle) const;
};

void Rot_76aee0::rotate(float* out, float angle) const
{
    const RotSrc_76aee0* self = reinterpret_cast<const RotSrc_76aee0*>(this);
    out[2] = 0.0f;
    float c = cosf(angle);
    float s = sinf(angle);
    out[0] = c * self->a - s * self->b;
    out[1] = s * self->a + c * self->b;
}

} }
