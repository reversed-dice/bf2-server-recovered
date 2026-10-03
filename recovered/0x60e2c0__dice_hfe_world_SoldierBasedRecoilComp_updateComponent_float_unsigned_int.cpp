// FUNCTION: BF2 0x60e2c0
namespace dice { namespace hfe {

struct WorldPref { static unsigned int getTickCount(); };

namespace world {

extern int CID_SoldierTemplate;

class ISoldierTemplate {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual int getClassId() const;
};

struct SoldierHolder {
    char m_pad0[0x28];
    ISoldierTemplate* m_template;
};

struct RecoilOwner {
    char m_pad0[0x50];
    SoldierHolder* m_holder;
};

struct RecoilTemplate {
    char m_pad0[0x48];
    bool m_enabled;
};

class SoldierBasedRecoilComp {
public:
    void updateComponent(float dt, unsigned int flags);
    void calcRecoil();
private:
    char m_pad0[0x18];
    RecoilOwner* m_owner;
    char m_pad1[0x84 - 0x20];
    unsigned int m_fireTick[10];
    char m_pad2[0xc0 - 0x84 - 40];
    RecoilTemplate* m_recoilTemplate;
};

void SoldierBasedRecoilComp::updateComponent(float dt, unsigned int flags) {
    if ((flags & 4) && m_recoilTemplate->m_enabled) {
        int cid = CID_SoldierTemplate;
        for (int i = 0; i < 10; i++) {
            if (m_fireTick[i] == WorldPref::getTickCount()) {
                RecoilOwner* owner = m_owner;
                if (owner->m_holder && owner->m_holder->m_template
                    && owner->m_holder->m_template->getClassId() == cid)
                    calcRecoil();
            }
        }
    }
}

}}}
