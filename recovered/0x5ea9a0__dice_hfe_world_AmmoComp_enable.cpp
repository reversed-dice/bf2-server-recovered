// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0x5ea9a0
namespace dice { namespace hfe { namespace world {

class IObjectTemplate {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void* queryInterface(unsigned int);
    virtual unsigned int getClassID();
};

class IObject {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void* queryInterface(unsigned int);

    char _pad[0x20];
    IObjectTemplate* m_template; // +0x28
    char _pad2[0x20];           // 0x30..0x50
};

struct Owner {
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
    virtual void v0a();
    virtual void v0b();
    virtual void v0c();
    virtual void v0d();
    virtual void v0e();
    virtual void v0f();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v0xc0(int a, int b);
    char _pad[0x50 - 8];
    IObject* m_obj;   // +0x50
};

struct AmmoData {
    char _pad0[0x30];
    char m_30;
    char m_31;
    char _pad1[0x49 - 0x32];
    char m_49;
};

class AmmoComp {
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
    virtual void v0a();
    virtual void v0b();
    virtual void v0c();
    virtual void v0d();
    virtual void v0e();
    virtual void v0f();
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
    virtual void v1a();
    virtual void v1b();
    virtual void v1c();
    virtual void v1d();
    virtual void enable();
    virtual void v1f();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual bool v28();
    virtual void v29();
    virtual void v2a();
    virtual void v2b();
    virtual void v2c();
    virtual void v2d();
    virtual void v2e();
    virtual void v2f();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual bool v37();
    virtual void v38();
    virtual void v39();
    virtual bool v3a();
    char _padA[0x18 - 8];
    Owner* m_18;
    char _padB[0x44 - 0x20];
    unsigned int m_44;
    unsigned int m_48;
    unsigned int m_4c;
    char _padC[0x54 - 0x50];
    unsigned int m_54;
    char _padD[0x68 - 0x58];
    int m_68;
    char _padE[0x6d - 0x6c];
    char m_6d;
    char _padF[0x6f - 0x6e];
    char m_6f;
    char _padG[0x80 - 0x70];
    AmmoData* m_data;
    char _padH[0x100 - 0x88];

    void doReload(unsigned int);
};

class WorldPref {
public:
    static unsigned int getTickCount();
};

extern const unsigned int CID_SoldierTemplate;

// compile-state padding: 13 unused functions, see trick 378
__attribute__((used)) int __pad_0(int x) { int y = x * 0 + 3; return y; }
__attribute__((used)) int __pad_1(int x) { int y = x * 1 + 3; return y; }
__attribute__((used)) int __pad_2(int x) { int y = x * 2 + 3; return y; }
__attribute__((used)) int __pad_3(int x) { int y = x * 3 + 3; return y; }
__attribute__((used)) int __pad_4(int x) { int y = x * 4 + 3; return y; }
__attribute__((used)) int __pad_5(int x) { int y = x * 5 + 3; return y; }
__attribute__((used)) int __pad_6(int x) { int y = x * 6 + 3; return y; }
__attribute__((used)) int __pad_7(int x) { int y = x * 7 + 3; return y; }
__attribute__((used)) int __pad_8(int x) { int y = x * 8 + 3; return y; }
__attribute__((used)) int __pad_9(int x) { int y = x * 9 + 3; return y; }
__attribute__((used)) int __pad_10(int x) { int y = x * 10 + 3; return y; }
__attribute__((used)) int __pad_11(int x) { int y = x * 11 + 3; return y; }
__attribute__((used)) int __pad_12(int x) { int y = x * 12 + 3; return y; }
void AmmoComp::enable()
{
    if (m_data->m_49 != 0) {
        IObject* p = m_18->m_obj;
        if (p == 0 || p->m_template->getClassID() == CID_SoldierTemplate)
            goto reset;
        if (__builtin_expect(m_6f != 0, 0)) {
            if (m_44 < WorldPref::getTickCount() && m_68 == 1) {
                m_68 = 2;
                doReload(m_44);
                goto call_c0;
            }
        }
        m_18->v0xc0(2, 0);
        goto dispatch;
    }
reset:
    m_44 = 0;
    m_54 = 0;
    m_68 = 0;
    m_48 = 0;
    m_4c = 0;
    m_6f = 0;
call_c0:
    m_18->v0xc0(2, 0);
dispatch:
    if (m_68 == 0 && m_data->m_30 != 0 && v37() && v3a() && m_data->m_31 != 0)
        v39();
    if (v28()) {
        m_6d = 0;
        m_18->v0xc0(2, 0);
    }
}

} } }
