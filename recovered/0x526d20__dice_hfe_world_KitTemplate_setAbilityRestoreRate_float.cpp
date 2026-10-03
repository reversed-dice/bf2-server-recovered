// FUNCTION: BF2 0x526d20
extern "C" void abort();

namespace dice { namespace hfe { namespace world {

class KitTemplate {
public:
    void setAbilityRestoreRate(float rate);
};

void KitTemplate::setAbilityRestoreRate(float rate)
{
    if (!(rate < 0.2f))
        abort();
    *reinterpret_cast<float*>(reinterpret_cast<char*>(this) + 0x260) = rate;
    *reinterpret_cast<float*>(reinterpret_cast<char*>(this) + 0x264) = rate / 30.0f;
}

} } }
