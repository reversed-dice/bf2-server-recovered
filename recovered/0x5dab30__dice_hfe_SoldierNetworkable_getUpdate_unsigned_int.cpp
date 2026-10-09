// FUNCTION: BF2 0x5dab30
namespace dice { namespace hfe {

struct SoldierUpdate { char pad[160]; };

class SoldierNetworkable {
public:
    SoldierUpdate* getUpdate(unsigned int idx);
private:
    char m_pad[0x78];
    SoldierUpdate* m_base;
};

SoldierUpdate* SoldierNetworkable::getUpdate(unsigned int idx)
{
    SoldierUpdate* base = m_base;
    if (base == 0 || idx > 3) {
        return 0;
    }
    return base + idx;
}

} }
