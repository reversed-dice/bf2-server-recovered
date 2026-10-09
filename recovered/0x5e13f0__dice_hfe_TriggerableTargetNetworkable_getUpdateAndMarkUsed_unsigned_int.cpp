// FUNCTION: BF2 0x5e13f0
namespace dice { namespace hfe {

struct TriggerUpdate { char pad[0x28]; };

class TriggerableTargetNetworkable {
public:
    TriggerUpdate* getUpdateAndMarkUsed(unsigned int idx);
private:
    char m_pad[0x78];
    TriggerUpdate* m_base;
};

TriggerUpdate* TriggerableTargetNetworkable::getUpdateAndMarkUsed(unsigned int idx)
{
    TriggerUpdate* base = m_base;
    if (base == 0 || idx > 3) {
        return 0;
    }
    TriggerUpdate* u = base + idx;
    *(char*)((char*)u + 4) = 1;
    return u;
}

} }
