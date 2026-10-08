// FUNCTION: BF2 0x55f920
namespace dice { namespace hfe { namespace world {

class IObject {
public:
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void v09();
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
    virtual IObject* vt54();
};

IObject* getRootParent(IObject const*);

class GameLogic {
public:
    unsigned char pad0[0x14];
    int m_14;
};

extern GameLogic* gameLogic;

class TargetObject : public IObject {
public:
    char pad_0x8[0x238];
    int m_240;
    bool initTargetId();
};

bool TargetObject::initTargetId() {
    if (m_240 != -1) return true;
    if (this->vt54() == 0) {
        IObject* p = getRootParent(this);
        IObject* q = p->vt54();
        if (q != 0) m_240 = (int)*(unsigned short*)((char*)q + 8);
    } else {
        m_240 = (int)*(unsigned short*)((char*)this->vt54() + 8);
    }
    if (m_240 != -1) return true;
    int r = gameLogic->m_14++ - 10000;
    m_240 = r;
    if (r == -1) return false;
    return true;
}

} } }
