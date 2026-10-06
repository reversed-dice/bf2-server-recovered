// FUNCTION: BF2 0x5e1670
namespace dice {
namespace hfe {

struct TriggerableTargetUpdate {
    int pad0;
    bool isValid;
    char pad[40 - 5];
};

class TriggerableTargetNetworkable {
public:
    char pad[0x78];
    TriggerableTargetUpdate* m_updates;

    bool getIsUpdateValid(unsigned int index) const;
};

bool TriggerableTargetNetworkable::getIsUpdateValid(unsigned int index) const {
    return m_updates[index].isValid;
}

}
}
