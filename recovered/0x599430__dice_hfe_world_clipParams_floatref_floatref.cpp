// FUNCTION: BF2 0x599430
namespace dice { namespace hfe { namespace world {

void clipParams(float& low, float& high);

void clipParams(float& low, float& high)
{
    if (0.0f > low)
        low = 0.0f;
    float magnitude = __builtin_fabsf(high);
    high = magnitude;
    if (low > magnitude) {
        high = low;
        low = magnitude;
    }
}

} } }
