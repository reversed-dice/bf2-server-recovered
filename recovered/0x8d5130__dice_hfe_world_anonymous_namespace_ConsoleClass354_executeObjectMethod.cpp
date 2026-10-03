// FUNCTION: BF2 0x8d5130
namespace dice { namespace hfe {
extern "C" unsigned dice_hfe_world_CID_FireCompTemplate;
extern "C" unsigned dice_hfe_world_IID_IWeaponFireCompTemplate;
extern "C" long dice_hfe_world_getActiveTemplateComponent_unsigned_int_unsigned_int(unsigned, unsigned);

long cb(long param_1) {
    int sel = *(int*)(param_1 + 0x30);
    if (sel != 0) goto nz;
    {
        *(char*)(param_1 + 0x108) = 1;
        long t = dice_hfe_world_getActiveTemplateComponent_unsigned_int_unsigned_int(
            dice_hfe_world_IID_IWeaponFireCompTemplate,
            dice_hfe_world_CID_FireCompTemplate);
        // PERM_ORDER
        int c = *(int*)(t + 0x18);
        int b = *(int*)(t + 0x14);
        int d = *(unsigned char*)(t + 0x1c);
        int a = *(int*)(t + 0x10);
        void* e = *(void**)(t + 0x20);
        // PERM_ORDER_END
        // PERM_ORDER
        *(int*)(param_1 + 0x118) = c;
        *(unsigned char*)(param_1 + 0x11c) = d;
        *(int*)(param_1 + 0x114) = b;
        *(void**)(param_1 + 0x120) = e;
        *(int*)(param_1 + 0x110) = a;
        // PERM_ORDER_END
        return param_1 + 0x110;
    }
    nz:
    if (sel != 1) return 0;
    {
        unsigned char* s = *(unsigned char**)(param_1 + 0x38);
        unsigned cid = dice_hfe_world_CID_FireCompTemplate;
        // PERM_ORDER
        void* e = *(void**)(s + 0x10);
        int d = *(unsigned char*)(s + 0xc);
        int c = *(int*)(s + 8);
        int b = *(int*)(s + 4);
        int a = *(int*)(s + 0);
        // PERM_ORDER_END
        *(char*)(param_1 + 0x108) = 0;
        long t = dice_hfe_world_getActiveTemplateComponent_unsigned_int_unsigned_int(
            dice_hfe_world_IID_IWeaponFireCompTemplate, cid);
        // PERM_ORDER
        *(void**)(t + 0x20) = e;
        *(unsigned char*)(t + 0x1c) = d;
        *(int*)(t + 0x18) = c;
        *(int*)(t + 0x14) = b;
        *(int*)(t + 0x10) = a;
        // PERM_ORDER_END
        return 0;
    }
}
} }
