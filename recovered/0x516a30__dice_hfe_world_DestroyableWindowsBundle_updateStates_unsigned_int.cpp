// FUNCTION: BF2 0x516a30
namespace dice { namespace hfe {
namespace world {

class Mat4 {
public:
    static Mat4 const& getZero();
};

extern const unsigned int CID_DestroyableWindowTemplate;
extern const unsigned int IID_IGameServer;
extern void* game;
extern void* objectManager;

typedef int (*CidFn)(void*);
typedef void* (*GetChildFn)(void*);
typedef void (*SetPartFn)(void*, Mat4 const&, int);
typedef void* (*GetPartFn)(void*);
typedef Mat4 const& (*GetAbsTransFn)(void*);
typedef void* (*QueryFn)(void*, unsigned int);
typedef void (*DispatchFn)(void*, void*, int);

class DestroyableWindow {
public:
    virtual void _v00();
    virtual void _v01();
    virtual void _v02();
    virtual void _v03();
    virtual void _v04();
    virtual void _v05();
    virtual void _v06();
    virtual void _v07();
    virtual void _v08();
    virtual void _v09();
    virtual void _v10();
    virtual void _v11();
    virtual void _v12();
    virtual void _v13();
    virtual void _v14();
    virtual void _v15();
    virtual void _v16();
    virtual void _v17();
    virtual void _v18();
    virtual void _v19();
    virtual void _v20();
    virtual void _v21();
    virtual void _v22();
    virtual void _v23();
    virtual void _v24();
    virtual void _v25();
    virtual void _v26();
    virtual void _v27();
    virtual void _v28();
    virtual void _v29();
    virtual void _v30();
    virtual void _v31();
    virtual void _v32();
    virtual void _v33();
    virtual void _v34();
    virtual void _v35();
    virtual void _v36();
    virtual void _v37();
    virtual void _v38();
    virtual void _v39();
    virtual void _v40();
    virtual void _v41();
    virtual void _v42();
    virtual void _v43();
    virtual void _v44();
    virtual void _v45();
    virtual void _v46();
    virtual void _v47();
    virtual void _v48();
    virtual void _v49();
    virtual int getType() const;

    char _padA[0x28 - 0x8];
    void* m_unk28;

    void setIsBroken(bool broken);
};

class DestroyableWindowsBundle {
public:
    void updateStates(unsigned int state);

    unsigned char _pad0[0x28];
    void* m_stateData;
    unsigned char _pad1[0x70 - 0x30];
    void* m_geom;
    unsigned char _pad2[0x23C - 0x78];
    unsigned int m_unk_0x23C;
    unsigned int m_unk_0x240;
};

void DestroyableWindowsBundle::updateStates(unsigned int state)
{
    if (m_unk_0x240 != state) {
        if (state == (unsigned int)-1) {
            if (game != 0) {
                void* gs = ((QueryFn)(*(void***)game)[0x18 / 8])(game, IID_IGameServer);
                if (gs != 0
                    && *(float*)((char*)*(void**)((char*)this + 0x28) + 0x1f8) > *(float*)0xb2d910) {
                    ((DispatchFn)(*(void***)objectManager)[0x1a0 / 8])(objectManager, this, 0x1d);
                }
            }
        }
        m_unk_0x23C = state;
        void* geom = m_geom;
        DestroyableWindow* o = (DestroyableWindow*)((GetChildFn)(*(void***)this)[0x1e0 / 8])(this);
        while (o != 0) {
            void* q = o->m_unk28;
            if (((CidFn)(*(void***)q)[0x20 / 8])(q) == CID_DestroyableWindowTemplate) {
                int i = o->getType();
                if (i != -1) {
                    if ((m_unk_0x23C & (1 << i)) == 0) {
                        o->setIsBroken(true);
                        if (geom != 0) {
                            SetPartFn f = (SetPartFn)(*(void***)geom)[0xa8 / 8];
                            f(geom, Mat4::getZero(), i);
                            if (__builtin_expect(((GetPartFn)(*(void***)geom)[0x1a0 / 8])(geom) != 0, 1)) {
                                void* r = ((GetPartFn)(*(void***)geom)[0x1a0 / 8])(geom);
                                SetPartFn f2 = (SetPartFn)(*(void***)r)[0xa8 / 8];
                                Mat4 const& m = ((GetAbsTransFn)(*(void***)this)[0x108 / 8])(this);
                                f2(r, m, i);
                            }
                        }
                        o = (DestroyableWindow*)*(void**)((char*)o + 0x58);
                        continue;
                    } else {
                        o->setIsBroken(false);
                        if (geom != 0) {
                            SetPartFn f3 = (SetPartFn)(*(void***)geom)[0xa8 / 8];
                            Mat4 const& m2 = ((GetAbsTransFn)(*(void***)this)[0x108 / 8])(this);
                            f3(geom, m2, i);
                            if (((GetPartFn)(*(void***)geom)[0x1a0 / 8])(geom) != 0) {
                                void* r2 = ((GetPartFn)(*(void***)geom)[0x1a0 / 8])(geom);
                                SetPartFn f4 = (SetPartFn)(*(void***)r2)[0xa8 / 8];
                                f4(r2, Mat4::getZero(), i);
                            }
                        }
                    }
                }
            }
            o = (DestroyableWindow*)*(void**)((char*)o + 0x58);
        }
    }
    m_unk_0x240 = m_unk_0x23C;
}

} } }
