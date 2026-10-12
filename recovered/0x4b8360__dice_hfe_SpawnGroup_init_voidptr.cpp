// FUNCTION: BF2 0x4b8360
namespace dice { namespace hfe {

class SpawnGroup {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual int getTeam() const; // slot 7 (+0x38)
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual bool getActive(bool) const; // slot 11 (+0x58)
    virtual void v12();
    virtual void getPos(); // slot 13 (+0x68)
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual bool init(void*); // slot 20 (+0xa0)

    char _pad[0x54 - 0x8];
    int m_team; // 0x54
    char _pad2[0xa0 - 0x58];
    bool m_hasPoints; // 0xa0
    char _pad3[0xb0 - 0xa1];
    char* m_records; // 0xb0
};

bool SpawnGroup::init(void* arg) {
    char* rec = m_records;
    if (rec == 0) {
        rec = new char[0x40];
        m_records = rec;
        if (rec == 0)
            return false;
    }
    m_team = 0;
    rec[6] = m_hasPoints;
    *(int*)(m_records + (((unsigned long)(unsigned int)m_team) << 4)) = getTeam();
    *(char*)(m_records + (((unsigned long)(unsigned int)m_team) << 4) + 4) = getActive(false);
    getPos();
    getPos();
    return true;
}

} }
