// FUNCTION: BF2 0x5dab60
namespace dice { namespace hfe {

struct SoldierUpdate {
    int pad0;
    char used;
    char pad[155];
};

class SoldierNetworkable {
public:
    char pad[0x78];
    SoldierUpdate* m_updates;

    SoldierUpdate* getUpdateAndMarkUsed(unsigned int index);
};

SoldierUpdate* SoldierNetworkable::getUpdateAndMarkUsed(unsigned int index) {
    if (!m_updates || index > 3)
        return 0;
    SoldierUpdate* u = &m_updates[index];
    u->used = 1;
    return u;
}

} }
