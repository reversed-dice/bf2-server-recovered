// FUNCTION: BF2 0x5bfb60
// BF2_FLAGS: -fno-strict-aliasing
#include <vector>

namespace dice { namespace hfe { namespace world {

class VehicleHudCompTemplate {
public:
    virtual void v_0();
    virtual void v_1();
    virtual void v_2();
    virtual void v_3();
    virtual void v_4();
    virtual void v_5();
    virtual void v_6();
    virtual void v_7();
    virtual void v_8();
    virtual void v_9();
    virtual void v_10();
    virtual void v_11();
    virtual void v_12();
    virtual void v_13();
    virtual void v_14();
    virtual void v_15();
    virtual void v_16();
    virtual void v_17();
    virtual void v_18();
    virtual void v_19();
    virtual void v_20();
    virtual void v_21();
    virtual void v_22();
    virtual void v_23();
    virtual void v_24();
    virtual void v_25();
    virtual void v_26();
    virtual void v_27();
    virtual void v_28();
    virtual void v_29();
    virtual void v_30();
    virtual void v_31();
    virtual void v_32();
    virtual void v_33();
    virtual void v_34();
    virtual void v_35();
    virtual void v_36();
    virtual void v_37();
    virtual void v_38();
    virtual void v_39();
    virtual void v_40();
    virtual void v_41();
    virtual void v_42();
    virtual void v_43();
    virtual void addShowOnCamMode(int mode);

    char _pad[0x68 - 8];
    std::vector<int> m_modes; // at 0x68
};

void VehicleHudCompTemplate::addShowOnCamMode(int mode) {
    m_modes.push_back(mode);
}

} } }
