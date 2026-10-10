// FUNCTION: BF2 0x7819a0
namespace dice { namespace hfe { namespace ai {

class AIObjectArmament {
public:
    virtual ~AIObjectArmament();
    virtual void d01(); virtual void d02(); virtual void d03(); virtual void d04();
    virtual void d05(); virtual void d06(); virtual void d07(); virtual void d08();
    virtual void d09(); virtual void d10(); virtual void d11(); virtual void d12();
    virtual int getWeaponIdFromActivationId(int activationId, int param) const;
};

int AIObjectArmament::getWeaponIdFromActivationId(int activationId, int param) const {
    int b = (param == 0x1f) ? 1 : 0;
    switch (activationId) {
    case 0xe:
        return b;
    case 0xf:
        return b + 1;
    case 0x10:
        return b + 2;
    case 0x11:
        return b + 3;
    case 0x12:
        return b + 4;
    case 0x13:
        return b + 5;
    case 0x14:
        return b + 6;
    case 0x15:
        return b + 7;
    case 0x16:
        return b + 8;
    case 0x40:
        return (param != 8) ? 1 : 0;
    default:
        return -1;
    }
}

} } }
