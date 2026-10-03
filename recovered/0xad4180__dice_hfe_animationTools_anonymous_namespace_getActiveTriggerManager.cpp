// FUNCTION: BF2 0xad4180
extern "C" void* g_mgr;
typedef void* (*vfn1)(void*);

extern "C" void* getActiveBundleManager_ad4140(void* self)
{
    void* r = ((vfn1)(*(void***)g_mgr)[0x48/8])(g_mgr);
    if (r) {
        r = ((vfn1)(*(void***)g_mgr)[0x48/8])(g_mgr);
        return *(void**)((char*)r + 8);
    }
    return 0;
}

// REVERSED_FUNCTION: dice_hfe_animationTools_anonymous_namespace_getActiveTriggerManager (0xad4180)
