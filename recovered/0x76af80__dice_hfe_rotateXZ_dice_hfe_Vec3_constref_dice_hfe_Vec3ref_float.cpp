// FUNCTION: BF2 0x76af80
extern "C" float cosf(float);
extern "C" float sinf(float);

namespace dice { namespace hfe {

struct RotSrc_76af80 {
    float a;
    char _pad[4];
    float b;
};

class Rot_76af80 {
public:
    void rotate(float* out, float angle) const;
};

void Rot_76af80::rotate(float* out, float angle) const
{
    const RotSrc_76af80* self = reinterpret_cast<const RotSrc_76af80*>(this);
    out[1] = 0.0f;
    float c = cosf(angle);
    float s = sinf(angle);
    out[0] = c * self->a - s * self->b;
    out[2] = s * self->a + c * self->b;
}

} }
