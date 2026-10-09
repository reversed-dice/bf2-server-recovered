// FUNCTION: BF2 0x790430
namespace dice { namespace hfe {
namespace ai {
extern unsigned int CID_ParachuteTemplate;

class AIObject {
public:
    void IAIObjectInit();
    virtual void createInformation(int, bool);
    virtual void slot190();
    char _a[0x18]; void* m_20;
};
class CommonSingletonServer { public: virtual void _x00(); virtual void _x08(); virtual void _x10(); virtual void _x18(); virtual void _x20(); virtual void _x28(); virtual void _x30(); virtual void _x38(); virtual void _x40(); virtual void _x48(); virtual void _x50(); virtual void _x58(); virtual void _x60(); virtual void _x68(); virtual void _x70(); virtual void _x78(); virtual void _x80(); virtual void _x88(); virtual void _x90(); virtual void _x98(); virtual void _xa0(); virtual void _xa8(); virtual void _xb0(); virtual void _xb8(); virtual void _xc0(); virtual void _xc8(); virtual bool slotD0(); };
extern CommonSingletonServer* m_iaiGame;

class AIObjectShared : public AIObject {
public:
    void init();
};

void AIObjectShared::init()
{
    IAIObjectInit();
    if (!m_iaiGame->slotD0()) {
        ((void(*)(void*, int, int))((*(void***)this)[0x158 / 8]))(this, 0, 1);
        void* b = *(void**)((char*)m_20 + 0x28);
        unsigned int cid = ((unsigned int(*)(void*))(*(void***)b)[0x20 / 8])(b);
        if (cid == CID_ParachuteTemplate) {
            ((void(*)(void*))((*(void***)this)[0x190 / 8]))(this);
            return;
        }
    }
    return;
}
} }
}
