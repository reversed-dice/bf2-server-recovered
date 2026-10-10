// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0x6dfd20
namespace dice { namespace hfe { namespace world {

void setAdjust(float& value, float amount)
{
    if (value == 0.0f) {
        value = amount;
        return;
    }
    if (value > 0.0f) {
        if (amount > 0.0f) {
            if (amount > value) {
                value = amount;
            }
            return;
        }
        value += amount;
        return;
    }
    if (amount < 0.0f) {
        if (amount < value) {
            value = amount;
        }
        return;
    }
    value += amount;
}

}}}
