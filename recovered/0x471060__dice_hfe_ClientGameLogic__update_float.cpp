// FUNCTION: BF2 0x471060
class Base {
public:
    virtual int v_0() = 0;
    virtual int v_1() = 0;
    virtual int v_2() = 0;
    virtual int v_3() = 0;
    virtual int v_4() = 0;
    virtual int v_5() = 0;
    virtual int v_6() = 0;
    virtual int v_7() = 0;
    virtual int v_8() = 0;
    virtual int v_9() = 0;
    virtual int v_10() = 0;
    virtual int v_11() = 0;
    virtual int v_12() = 0;
    virtual int v_13() = 0;
    virtual int v_14() = 0;
    virtual int v_15() = 0;
    virtual int v_16() = 0;
    virtual int v_17() = 0;
    virtual int v_18() = 0;
    virtual int v_19() = 0;
    virtual int v_20() = 0;
    virtual int v_21() = 0;
    virtual int v_22() = 0;
    virtual int v_23() = 0;
    virtual int v_24() = 0;
    virtual int v_25() = 0;
    virtual int v_26() = 0;
    virtual int v_27() = 0;
    virtual int v_28() = 0;
    virtual int v_29() = 0;
    virtual int v_30() = 0;
    virtual int v_31() = 0;
    virtual int v_32() = 0;
    virtual int v_33() = 0;
    virtual int v_34() = 0;
    virtual int v_35() = 0;
    virtual int v_36() = 0;
    virtual int v_37() = 0;
    virtual int v_38() = 0;
    virtual int v_39() = 0;
    virtual int v_40() = 0;
    virtual int v_41() = 0;
    virtual int v_42() = 0;
    virtual int v_43() = 0;
    virtual int v_44() = 0;
    virtual int v_45() = 0;
    virtual int v_46() = 0;
    virtual int v_47() = 0;
    virtual int v_48() = 0;
    virtual int v_49() = 0;
    virtual int v_50() = 0;
    virtual int v_51() = 0;
    virtual int v_52() = 0;
    virtual int v_53() = 0;
    virtual int v_54() = 0;
    virtual int v_55() = 0;
    virtual int v_56() = 0;
    virtual int v_57() = 0;
    virtual int v_58() = 0;
    virtual int v_59() = 0;
    virtual int v_60() = 0;
    virtual int v_61() = 0;
    virtual int v_62() = 0;
    virtual int v_63() = 0;
    virtual int v_64() = 0;
    virtual int v_65() = 0;
    virtual int v_66() = 0;
    virtual int v_67() = 0;
    virtual int v_68() = 0;
    virtual int v_69() = 0;
    virtual int v_70() = 0;
    virtual int v_71() = 0;
    virtual int v_72() = 0;
    virtual int v_73() = 0;
    virtual int v_74() = 0;
    virtual int v_75() = 0;
    virtual int v_76() = 0;
    virtual int v_77() = 0;
    virtual int v_78() = 0;
    virtual int v_79() = 0;
    virtual int v_80() = 0;
    virtual int v_81() = 0;
    virtual int v_82() = 0;
    virtual int v_83() = 0;
    virtual int v_84() = 0;
    virtual int v_85() = 0;
};

class dice_hfe_ClientGameLogic : public Base {
public:
    virtual int vfunc_86() = 0;
    void update_float(float param);
};

void func_0x74aab0(int);
int func_0x4755d0(void*, float);

void dice_hfe_ClientGameLogic::update_float(float param) {
    if (vfunc_86() == 1) {
        func_0x74aab0(1);
    }
    func_0x4755d0(this, param);
}
// REVERSED_FUNCTION: dice_hfe_ClientGameLogic::update_float (0x471060)