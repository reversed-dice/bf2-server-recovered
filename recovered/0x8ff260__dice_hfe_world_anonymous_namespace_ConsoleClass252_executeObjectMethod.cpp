// FUNCTION: BF2 0x8ff260
#include <string>
namespace dice { namespace hfe { namespace world {
class Obj252 { public:
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3();
    virtual int getClassId();
    char _x[0x24];
    void* m_template;
};
class ObjMgr_252 { public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual void d9();
    virtual void d10();
    virtual void d11();
    virtual void d12();
    virtual void d13();
    virtual void d14();
    virtual void d15();
    virtual void d16();
    virtual void d17();
    virtual void d18();
    virtual void d19();
    virtual void d20();
    virtual void d21();
    virtual void d22();
    virtual void d23();
    virtual void d24();
    virtual void d25();
    virtual void d26();
    virtual void d27();
    virtual void d28();
    virtual void d29();
    virtual void d30();
    virtual void d31();
    virtual void d32();
    virtual void d33();
    virtual void d34();
    virtual void d35();
    virtual Obj252* getActive();
};
class AreaObject { public: static void addAbsolutePoint(void*); };
extern ObjMgr_252* objectManager;
extern "C" int g_CID_AreaObjectTemplate;
} } }
namespace dice { namespace hfe { namespace world { 
class ConsoleClass252 {
public:
    char _p0[0x30];
    int m_argc;
    char _p1[0x108 - 0x34];
    unsigned char m_hasResult;
    char _p2[0x110 - 0x109];
    void* m_result;
    void* pad0();
    void* pad1();
    void* pad2();
    void* pad3();
    void* pad4();
    void* pad5();
    void* pad6();
    void* pad7();
    void* executeObjectMethod();
};
void* ConsoleClass252::pad0() {
    if (m_argc != 0) return 0;
    m_hasResult = 0;
    Obj252* r = 0;
    Obj252* q = objectManager->getActive();
    if (q != 0) {
        void* sub = *(void**)((char*)q + 0x28);
        if (sub != 0) {
            if ((*(int (**)(void*))((char*)*(void**)sub + 0x20))(sub) == g_CID_AreaObjectTemplate)
                r = q;
        }
    }
    AreaObject::addAbsolutePoint(r);
    return 0;
}
void* ConsoleClass252::pad1() {
    if (m_argc != 0) return 0;
    m_hasResult = 0;
    Obj252* r = 0;
    Obj252* q = objectManager->getActive();
    if (q != 0) {
        void* sub = *(void**)((char*)q + 0x28);
        if (sub != 0) {
            if ((*(int (**)(void*))((char*)*(void**)sub + 0x20))(sub) == g_CID_AreaObjectTemplate)
                r = q;
        }
    }
    AreaObject::addAbsolutePoint(r);
    return 0;
}
void* ConsoleClass252::pad2() {
    if (m_argc != 0) return 0;
    m_hasResult = 0;
    Obj252* r = 0;
    Obj252* q = objectManager->getActive();
    if (q != 0) {
        void* sub = *(void**)((char*)q + 0x28);
        if (sub != 0) {
            if ((*(int (**)(void*))((char*)*(void**)sub + 0x20))(sub) == g_CID_AreaObjectTemplate)
                r = q;
        }
    }
    AreaObject::addAbsolutePoint(r);
    return 0;
}
void* ConsoleClass252::pad3() {
    if (m_argc != 0) return 0;
    m_hasResult = 0;
    Obj252* r = 0;
    Obj252* q = objectManager->getActive();
    if (q != 0) {
        void* sub = *(void**)((char*)q + 0x28);
        if (sub != 0) {
            if ((*(int (**)(void*))((char*)*(void**)sub + 0x20))(sub) == g_CID_AreaObjectTemplate)
                r = q;
        }
    }
    AreaObject::addAbsolutePoint(r);
    return 0;
}
void* ConsoleClass252::pad4() {
    if (m_argc != 0) return 0;
    m_hasResult = 0;
    Obj252* r = 0;
    Obj252* q = objectManager->getActive();
    if (q != 0) {
        void* sub = *(void**)((char*)q + 0x28);
        if (sub != 0) {
            if ((*(int (**)(void*))((char*)*(void**)sub + 0x20))(sub) == g_CID_AreaObjectTemplate)
                r = q;
        }
    }
    AreaObject::addAbsolutePoint(r);
    return 0;
}
void* ConsoleClass252::pad5() {
    if (m_argc != 0) return 0;
    m_hasResult = 0;
    Obj252* r = 0;
    Obj252* q = objectManager->getActive();
    if (q != 0) {
        void* sub = *(void**)((char*)q + 0x28);
        if (sub != 0) {
            if ((*(int (**)(void*))((char*)*(void**)sub + 0x20))(sub) == g_CID_AreaObjectTemplate)
                r = q;
        }
    }
    AreaObject::addAbsolutePoint(r);
    return 0;
}
void* ConsoleClass252::pad6() {
    if (m_argc != 0) return 0;
    m_hasResult = 0;
    Obj252* r = 0;
    Obj252* q = objectManager->getActive();
    if (q != 0) {
        void* sub = *(void**)((char*)q + 0x28);
        if (sub != 0) {
            if ((*(int (**)(void*))((char*)*(void**)sub + 0x20))(sub) == g_CID_AreaObjectTemplate)
                r = q;
        }
    }
    AreaObject::addAbsolutePoint(r);
    return 0;
}
void* ConsoleClass252::pad7() {
    if (m_argc != 0) return 0;
    m_hasResult = 0;
    Obj252* r = 0;
    Obj252* q = objectManager->getActive();
    if (q != 0) {
        void* sub = *(void**)((char*)q + 0x28);
        if (sub != 0) {
            if ((*(int (**)(void*))((char*)*(void**)sub + 0x20))(sub) == g_CID_AreaObjectTemplate)
                r = q;
        }
    }
    AreaObject::addAbsolutePoint(r);
    return 0;
}
void* ConsoleClass252::executeObjectMethod() {
    if (m_argc != 0) return 0;
    m_hasResult = 0;
    Obj252* r = 0;
    Obj252* q = objectManager->getActive();
    if (q != 0) {
        void* sub = *(void**)((char*)q + 0x28);
        if (sub != 0) {
            if ((*(int (**)(void*))((char*)*(void**)sub + 0x20))(sub) == g_CID_AreaObjectTemplate)
                r = q;
        }
    }
    AreaObject::addAbsolutePoint(r);
    return 0;
}
 } } } 
