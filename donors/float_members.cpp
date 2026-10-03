#include <sstream>
#include <ostream>
#include <string>
// Donor: a float member compared against a constant, which is a whole family
// of unknown blocks (34 functions at the head of what the first donor pass
// left open). The shape is a load, a UCOMISS against a literal in .rodata, a
// spill to the stack, and the parity branch that only appears because the
// comparison has to answer for NaN.
namespace donors {

struct Settings {
    char pad[0x80];
    float rate;      // +0x80, the offset the corpus block loads
    float limit;     // +0x84
    int flags;       // +0x88
};

void write_if_set(const Settings* s, float* out)
{
    if (s->rate != 0.0f)
        *out = s->rate;
}

void write_if_positive(const Settings* s, float* out)
{
    if (s->rate > 0.0f)
        *out = s->rate;
}

void write_if_below_limit(const Settings* s, float* out)
{
    if (s->rate < s->limit)
        *out = s->rate;
}

void write_scaled_if_set(const Settings* s, float* out)
{
    float v = s->rate;
    if (v != 1.0f)
        *out = v * 0.5f;
}

void two_floats_if_set(const Settings* s, float* out)
{
    if (s->rate != 0.0f)
        out[0] = s->rate;
    if (s->limit != 0.0f)
        out[1] = s->limit;
}

bool is_default(const Settings* s)
{
    return s->rate == 1.0f;
}

void clamp_member(Settings* s)
{
    if (s->rate > s->limit)
        s->rate = s->limit;
}

// The 34-function block spills the compared float to the stack between the
// compare and the branch, which means it is about to be passed to something.
void write_member_if_not_default(const Settings* s, std::ostream& os)
{
    if (s->rate != 1.0f)
        os << s->rate;
}

void format_member_if_set(const Settings* s, std::string* out)
{
    if (s->rate != 0.0f) {
        std::ostringstream oss;
        oss << s->rate;
        *out = oss.str();
    }
}

}  // namespace donors
