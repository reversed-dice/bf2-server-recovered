// FUNCTION: BF2 0x5db0f0
namespace dice {
namespace hfe {

struct SoldierUpdate {
    int pad0;
    bool isValid;
    char pad[160 - 5];
};

class SoldierNetworkable {
public:
    char pad[0x78];
    SoldierUpdate* m_updates;

    bool getIsUpdateValid(unsigned int index) const;
};

bool SoldierNetworkable::getIsUpdateValid(unsigned int index) const {
    return m_updates[index].isValid;
}

}
}
