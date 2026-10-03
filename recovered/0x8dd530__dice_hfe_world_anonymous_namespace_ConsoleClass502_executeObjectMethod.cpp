// FUNCTION: BF2 0x8dd530
namespace dice { namespace hfe {
struct P { int a, b, c; bool d; void* e; };
extern "C" unsigned dice_hfe_world_CID_SoldierBasedRecoilCompTemplate;
extern "C" unsigned dice_hfe_world_IID_IWeaponRecoilCompTemplate;
extern "C" long dice_hfe_world_getActiveTemplateComponent_unsigned_int_unsigned_int(unsigned, unsigned);

long cb(long param_1) {
    int sel = *(int*)(param_1 + 0x30);
    if (sel != 0) goto nz;
    {
        *(char*)(param_1 + 0x108) = 1;
        long t = dice_hfe_world_getActiveTemplateComponent_unsigned_int_unsigned_int(
            dice_hfe_world_IID_IWeaponRecoilCompTemplate,
            dice_hfe_world_CID_SoldierBasedRecoilCompTemplate);
        *(P*)(param_1 + 0x110) = *(P*)(t + 0x30);
        return param_1 + 0x110;
    }
    nz:
    if (sel != 1) return 0;
    {
        unsigned char* s = *(unsigned char**)(param_1 + 0x38);
        unsigned cid = dice_hfe_world_CID_SoldierBasedRecoilCompTemplate;
        // PERM_ORDER
        void* e = *(void**)(s + 0x10);
        int d = *(unsigned char*)(s + 0xc);
        int c = *(int*)(s + 8);
        int b = *(int*)(s + 4);
        int a = *(int*)(s + 0);
        // PERM_ORDER_END
        *(char*)(param_1 + 0x108) = 0;
        long t = dice_hfe_world_getActiveTemplateComponent_unsigned_int_unsigned_int(
            dice_hfe_world_IID_IWeaponRecoilCompTemplate, cid);
        // PERM_ORDER
        *(void**)(t + 0x40) = e;
        *(unsigned char*)(t + 0x3c) = d;
        *(int*)(t + 0x38) = c;
        *(int*)(t + 0x34) = b;
        *(int*)(t + 0x30) = a;
        // PERM_ORDER_END
        return 0;
    }
}
} }
