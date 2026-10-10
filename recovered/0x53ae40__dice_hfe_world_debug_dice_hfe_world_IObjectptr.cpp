// FUNCTION: BF2 0x53ae40
namespace dice { namespace hfe { namespace world {

class IObject {
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
    virtual void v_44();
    virtual void v_45();
    virtual void v_46();
    virtual void v_47();
    virtual void v_48();
    virtual void v_49();
    virtual void v_50();
    virtual void v_51();
    virtual void v_52();
    virtual void v_53();
    virtual void v_54();
    virtual void v_55();
    virtual void v_56();
    virtual void v_57();
    virtual void v_58();
    virtual void v_59();
    virtual IObject* getNext(); // slot 0x1e0

    char _pad[0x58 - 8];
    IObject* m_child; // at 0x58
};

void debug(IObject* obj) {
    while (true) {
        if (obj->m_child) debug(obj->m_child);
        if (!obj->getNext()) break;
        obj = obj->getNext();
    }
}

} } }
