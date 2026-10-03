// FUNCTION: BF2 0xafedd0
// getActiveWeaponTemplate 0xafedd0 — deref global + tail-call conditionnel
namespace dice { namespace hfe { namespace ai {

extern void* weapon_template_fn(void* p);

void* getActiveWeaponTemplate() {
    void* p = *(void**)0x10adf40;
    if (p)
        return weapon_template_fn(p);
    return 0;
}

}}}

// re-trigger validate 2026-08-06 17:11:48

// re-trigger validate 2026-08-06 18:11:30
