// FUNCTION: BF2 0x6cd370
namespace dice { namespace anim {

struct Range { float min, max; };

class MovementTrigger {
public:
    bool isWithinRange(float v);
    char _pad0[0x48];
    Range* m_range;
};

bool MovementTrigger::isWithinRange(float v)
{
    Range* r = m_range;
    if (!r || r->min == r->max)
        return true;
    if (r->min >= 0.0f) {
        if (v < r->min || v > r->max)
            return false;
    } else if (r->min < 0.0f) {
        if (v < r->max || v > r->min)
            return false;
    }
    return true;
}

} }
