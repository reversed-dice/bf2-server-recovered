// FUNCTION: BF2 0x546ef0
namespace dice { namespace hfe { namespace world {

class Soldier {
public:
    virtual void _v0();
    // 114 dummy virtual methods
#define D10(b) virtual void _d##b##0(); virtual void _d##b##1(); virtual void _d##b##2(); virtual void _d##b##3(); virtual void _d##b##4(); virtual void _d##b##5(); virtual void _d##b##6(); virtual void _d##b##7(); virtual void _d##b##8(); virtual void _d##b##9();
    D10(0) D10(1) D10(2) D10(3) D10(4) D10(5) D10(6) D10(7) D10(8) D10(9) D10(10)
    virtual void _d110(); virtual void _d111(); virtual void _d112(); virtual void _d113();
    virtual void* getActiveWeapon(int slot) const; // slot 115 (0x398)

    bool hasHandWeaponActive();
};

bool Soldier::hasHandWeaponActive() {
    void* w = getActiveWeapon(0);
    if (w != 0) {
        void* w2 = getActiveWeapon(0);
        if ((*(unsigned char*)((char*)w2 + 8) & 1) == 0)
            return true;
    }
    return false;
}

} } }
