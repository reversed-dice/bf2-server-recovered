// FUNCTION: BF2 0x78ff80
namespace dice { namespace hfe { namespace ai {

extern "C" void AIObject_aiObjectAddPlugIn_IAIObjectPlugInptr(void*, void*);
typedef void* (*vfn0)(void*);
void* fn_0x78ff80(void* self, void* p) {
    AIObject_aiObjectAddPlugIn_IAIObjectPlugInptr(self, p);
    void** vt = *(void***)self;
    return ((vfn0)vt[0x180/8])(self);
}

} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectShared_addPlugIn_dice_hfe_ai_IAIObjectPlugInptr (0x78ff80)
