// FUNCTION: BF2 0x57d1f0
// BF2_COMPILER: gcc-3.4
namespace dice { namespace hfe { namespace world {

extern unsigned int IID_IPlayerControlObject;

class SimpleObject {
public:
    virtual ~SimpleObject();
    virtual void dummy1();
    virtual void dummy2();
    virtual void dummy3();
    virtual void dummy4();
    virtual void dummy5();
    virtual void dummy6();
    virtual void dummy7();
    virtual void init();

    char _pad[0x50 - sizeof(void*)];
    SimpleObject* m_parent;
};

class EntryPoint : public SimpleObject {
public:
    char _pad2[0x240 - sizeof(SimpleObject)];
    void* m_playerControlObject;

    virtual void init();
};

void EntryPoint::init() {
    SimpleObject::init();
    void* pco;
    SimpleObject* parent = m_parent;
    if (parent) {
        typedef void* (*QueryInterfaceFn)(void*, unsigned int);
        for (SimpleObject* cur = parent; cur; cur = cur->m_parent) {
            void** vtbl = *(void***)cur;
            QueryInterfaceFn qi = (QueryInterfaceFn)vtbl[3];
            pco = qi(cur, IID_IPlayerControlObject);
            if (pco) break;
        }
        m_playerControlObject = pco;
    }
}

} } }
