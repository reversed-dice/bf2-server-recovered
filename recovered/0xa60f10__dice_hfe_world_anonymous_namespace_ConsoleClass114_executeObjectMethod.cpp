// FUNCTION: BF2 0xa60f10
// ConsoleClass114::executeObjectMethod (0xa60f10)
// sel==0: check engine template float; sel==1: set engine template byte
extern "C" {
    unsigned int dice_hfe_world_CID_EngineTemplate;
    void* dice_hfe_world_getActiveTemplate_unsigned_int(unsigned int cid);
}

namespace dice { namespace hfe { namespace world {

long executeObjectMethod_0xa60f10(void* p) {
    int sel = *(int*)((char*)p + 0x30);
    if (sel == 0) {
        *((char*)p + 0x108) = 1;
        void* tpl = dice_hfe_world_getActiveTemplate_unsigned_int(dice_hfe_world_CID_EngineTemplate);
        *((char*)p + 0x10a) = (float)*((unsigned char*)((char*)tpl + 0x6a8)) != 0.0f;
        return (long)((char*)p + 0x10a);
    }
    if (__builtin_expect(sel == 1, 0)) {
        unsigned char v = **(unsigned char**)((char*)p + 0x38);
        *((char*)p + 0x108) = 0;
        void* tpl = dice_hfe_world_getActiveTemplate_unsigned_int(dice_hfe_world_CID_EngineTemplate);
        *((char*)tpl + 0x6a8) = v;
        return 0;
    }
    return 0;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass114_executeObjectMethod (0xa60f10)
