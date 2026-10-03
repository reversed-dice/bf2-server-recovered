// FUNCTION: BF2 0x8ae980
// BF2_FLAGS: -fno-guess-branch-probability
namespace dice { namespace hfe {
struct IGame {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void* getInterface(unsigned);
};
struct IX {
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
    virtual void setX(int);
    virtual int getX();
};
extern "C" IGame* dice_hfe_game;
extern "C" unsigned dice_hfe_IID_IGame;

long cb(long param_1) {
    int sel = *(int*)(param_1 + 0x30);
    if (sel != 0) goto nz;
    {
        *(char*)(param_1 + 0x108) = 1;
        IGame* g = dice_hfe_game;
        IX* p = g ? (IX*)g->getInterface(dice_hfe_IID_IGame) : 0;
        *(int*)(param_1 + 0x10c) = p->getX();
        return param_1 + 0x10c;
    }
    nz:
    if (sel != 1) return 0;
    {
        int v = **(int**)(param_1 + 0x38);
        *(char*)(param_1 + 0x108) = 0;
        IGame* g = dice_hfe_game;
        IX* p = g ? (IX*)g->getInterface(dice_hfe_IID_IGame) : 0;
        p->setX(v);
        return 0;
    }
}
} }
