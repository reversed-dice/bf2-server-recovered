// FUNCTION: BF2 0x4a4840
namespace dice { namespace hfe {

struct Vec3 {
    Vec3(const Vec3&);
    float x, y, z;
};

namespace world {

class IArmorGLComp;

class ISoldierInfo {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual unsigned int getId();
};

class IObject {
public:
    char m_pad0[0x28];
    ISoldierInfo* m_info;
};

class PlayerScoreData {
public:
    void addBulletsGivingDamage(unsigned int id, int n, IObject* obj);
};

class IPlayer {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void v76();
    virtual void v77();
    virtual void v78();
    virtual void v79();
    virtual void v80();
    virtual void v81();
    virtual void v82();
    virtual void v83();
    virtual void v84();
    virtual void v85();
    virtual void v86();
    virtual void v87();
    virtual void v88();
    virtual void v89();
    virtual void v90();
    virtual void v91();
    virtual void v92();
    virtual PlayerScoreData* getScoreData();
};

struct GameLogicExplosion {
    static bool serverHandleExplosion(const Vec3& pos, float radius, int type, float f4,
                                      IPlayer* player, IArmorGLComp* armor, int i7,
                                      IObject* o8, IObject* o9, float f10,
                                      IObject* o11, IObject* o12, float f13, bool b14, bool b15);
};

}

class ServerGameLogic {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72(int n, world::IPlayer* player);
    void handleExplosion(Vec3 pos, float radius, int type, float f4, world::IPlayer* player,
                         world::IArmorGLComp* armor, int i7, world::IObject* o8,
                         world::IObject* o9, float f10, world::IObject* o11,
                         world::IObject* o12, float f13, bool b14, bool b15);
};

void ServerGameLogic::handleExplosion(Vec3 pos, float radius, int type, float f4, world::IPlayer* player,
                                      world::IArmorGLComp* armor, int i7, world::IObject* o8,
                                      world::IObject* o9, float f10, world::IObject* o11,
                                      world::IObject* o12, float f13, bool b14, bool b15) {
    if (!world::GameLogicExplosion::serverHandleExplosion(pos, radius, type, f4, player, armor, i7,
                                                          o8, o9, f10, o11, o12, f13, b14, b15))
        return;
    v72(1, player);
    if (player && o8) {
        world::PlayerScoreData* data = player->getScoreData();
        if (data)
            data->addBulletsGivingDamage(o8->m_info->getId(), 1, o11);
    }
}

} }
