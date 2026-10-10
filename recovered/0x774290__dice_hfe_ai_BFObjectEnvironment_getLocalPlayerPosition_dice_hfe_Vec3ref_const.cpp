// FUNCTION: BF2 0x774290
namespace dice { namespace hfe {

struct Vec3 {
    float x, y, z;
    void set(float ax, float ay, float az) { x = ax; y = ay; z = az; }
    Vec3& operator=(const Vec3& o) { set(o.x, o.y, o.z); return *this; }
    Vec3() {}
    Vec3(const Vec3& o) { set(o.x, o.y, o.z); }
};

struct Mat4 {
    float pad[12];
    Vec3 pos;
    float w;
};

namespace world {

extern unsigned int IID_IObject;

class IObject {
public:
    virtual void v0(); virtual void v1(); virtual void v2();
    virtual void* queryInterface(unsigned int iid);
    virtual void v_dummy_0();
    virtual void v_dummy_1();
    virtual void v_dummy_2();
    virtual void v_dummy_3();
    virtual void v_dummy_4();
    virtual void v_dummy_5();
    virtual void v_dummy_6();
    virtual void v_dummy_7();
    virtual void v_dummy_8();
    virtual void v_dummy_9();
    virtual void v_dummy_10();
    virtual void v_dummy_11();
    virtual void v_dummy_12();
    virtual void v_dummy_13();
    virtual void v_dummy_14();
    virtual void v_dummy_15();
    virtual void v_dummy_16();
    virtual void v_dummy_17();
    virtual void v_dummy_18();
    virtual void v_dummy_19();
    virtual void v_dummy_20();
    virtual void v_dummy_21();
    virtual void v_dummy_22();
    virtual void v_dummy_23();
    virtual void v_dummy_24();
    virtual void v_dummy_25();
    virtual void v_dummy_26();
    virtual void v_dummy_27();
    virtual void v_dummy_28();
    virtual Mat4 const* getTransformation() const;
};

class IPlayer {
public:
    virtual void v_dummy_0();
    virtual void v_dummy_1();
    virtual void v_dummy_2();
    virtual void v_dummy_3();
    virtual void v_dummy_4();
    virtual void v_dummy_5();
    virtual void v_dummy_6();
    virtual void v_dummy_7();
    virtual void v_dummy_8();
    virtual void v_dummy_9();
    virtual void v_dummy_10();
    virtual void v_dummy_11();
    virtual void v_dummy_12();
    virtual void v_dummy_13();
    virtual void v_dummy_14();
    virtual void v_dummy_15();
    virtual void v_dummy_16();
    virtual void v_dummy_17();
    virtual void v_dummy_18();
    virtual void v_dummy_19();
    virtual void v_dummy_20();
    virtual void v_dummy_21();
    virtual void v_dummy_22();
    virtual void v_dummy_23();
    virtual void v_dummy_24();
    virtual void v_dummy_25();
    virtual void v_dummy_26();
    virtual void v_dummy_27();
    virtual void v_dummy_28();
    virtual void v_dummy_29();
    virtual void v_dummy_30();
    virtual void v_dummy_31();
    virtual void v_dummy_32();
    virtual void v_dummy_33();
    virtual void v_dummy_34();
    virtual void v_dummy_35();
    virtual void v_dummy_36();
    virtual void v_dummy_37();
    virtual void v_dummy_38();
    virtual void v_dummy_39();
    virtual void v_dummy_40();
    virtual void v_dummy_41();
    virtual void v_dummy_42();
    virtual void v_dummy_43();
    virtual void v_dummy_44();
    virtual void v_dummy_45();
    virtual void v_dummy_46();
    virtual void v_dummy_47();
    virtual void v_dummy_48();
    virtual void v_dummy_49();
    virtual void v_dummy_50();
    virtual void v_dummy_51();
    virtual void v_dummy_52();
    virtual void v_dummy_53();
    virtual void v_dummy_54();
    virtual void v_dummy_55();
    virtual void v_dummy_56();
    virtual void v_dummy_57();
    virtual void v_dummy_58();
    virtual void v_dummy_59();
    virtual void v_dummy_60();
    virtual void v_dummy_61();
    virtual void v_dummy_62();
    virtual void v_dummy_63();
    virtual void v_dummy_64();
    virtual void v_dummy_65();
    virtual void v_dummy_66();
    virtual void v_dummy_67();
    virtual void v_dummy_68();
    virtual void v_dummy_69();
    virtual void v_dummy_70();
    virtual void v_dummy_71();
    virtual void v_dummy_72();
    virtual void v_dummy_73();
    virtual void v_dummy_74();
    virtual void v_dummy_75();
    virtual void v_dummy_76();
    virtual void v_dummy_77();
    virtual void v_dummy_78();
    virtual void v_dummy_79();
    virtual void v_dummy_80();
    virtual void v_dummy_81();
    virtual void v_dummy_82();
    virtual void v_dummy_83();
    virtual void v_dummy_84();
    virtual void v_dummy_85();
    virtual void v_dummy_86();
    virtual void v_dummy_87();
    virtual void v_dummy_88();
    virtual void v_dummy_89();
    virtual void v_dummy_90();
    virtual void v_dummy_91();
    virtual void v_dummy_92();
    virtual void v_dummy_93();
    virtual void v_dummy_94();
    virtual void v_dummy_95();
    virtual IObject* getObject();
};

class PlayerManager {
public:
    virtual void v_dummy_0();
    virtual void v_dummy_1();
    virtual void v_dummy_2();
    virtual void v_dummy_3();
    virtual void v_dummy_4();
    virtual void v_dummy_5();
    virtual void v_dummy_6();
    virtual void v_dummy_7();
    virtual void v_dummy_8();
    virtual void v_dummy_9();
    virtual void v_dummy_10();
    virtual void v_dummy_11();
    virtual IPlayer* getLocalPlayer();
};

extern PlayerManager* playerManager;

} // world

namespace ai {

class IAIObjectEnvironment {
public:
    virtual ~IAIObjectEnvironment();
};

class BFObjectEnvironment : public IAIObjectEnvironment {
public:
    virtual ~BFObjectEnvironment();
    virtual void v_dummy_0();
    virtual void v_dummy_1();
    virtual void v_dummy_2();
    virtual void v_dummy_3();
    virtual void v_dummy_4();
    virtual void v_dummy_5();
    virtual void v_dummy_6();
    virtual void v_dummy_7();
    virtual void v_dummy_8();
    virtual bool getLocalPlayerPosition(Vec3& pos) const;
};

bool BFObjectEnvironment::getLocalPlayerPosition(Vec3& pos) const {
    if (world::playerManager) {
        world::IPlayer* p = world::playerManager->getLocalPlayer();
        if (p) {
            world::IObject* obj = p->getObject();
            if (obj) {
                world::IObject* o = (world::IObject*)obj->queryInterface(world::IID_IObject);
                pos = o->getTransformation()->pos;
                return true;
            }
        }
    }
    return false;
}

} } }
