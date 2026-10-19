// FUNCTION: BF2 0x76aa30
extern "C" float cosf(float);
extern "C" float sinf(float);

namespace dice { namespace hfe {

struct RotSrc_76aa30 {
    char _pad[4];
    float a;
    float b;
};

class Rot_76aa30 {
public:
    void rotate(float* out, float angle) const;
};

void Rot_76aa30::rotate(float* out, float angle) const
{
    const RotSrc_76aa30* self = reinterpret_cast<const RotSrc_76aa30*>(this);
    out[0] = 0.0f;
    float c = cosf(angle);
    float s = sinf(angle);
    out[1] = c * self->a - s * self->b;
    out[2] = s * self->a + c * self->b;
}

} }
