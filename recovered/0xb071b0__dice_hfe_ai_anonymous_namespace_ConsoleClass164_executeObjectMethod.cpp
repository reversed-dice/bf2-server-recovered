// FUNCTION: BF2 0xb071b0
namespace dice { namespace hfe {
struct PlugIn {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual int f3();
};
struct Mgr;
extern "C" Mgr* dice_hfe_ai_AITemplatePlugInManager_m_instance;
extern "C" PlugIn* dice_hfe_ai_AITemplatePlugInManager_getActiveTemplatePlugIn_const(Mgr*);

long cb(long p) {
    if (*(int*)(p + 0x30) != 1) return 0;
    int v = **(int**)(p + 0x38);
    *(char*)(p + 0x108) = 0;
    Mgr* m = dice_hfe_ai_AITemplatePlugInManager_m_instance;
    PlugIn* t = 0;
    if (m) {
        PlugIn* q = dice_hfe_ai_AITemplatePlugInManager_getActiveTemplatePlugIn_const(m);
        if (q && q->f3() == 0) t = q;
    }
    *(int*)((char*)t + 0xc) = v;
    return 0;
}
} }
