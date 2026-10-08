// FUNCTION: BF2 0x991730
// BF2_FLAGS: -fno-guess-branch-probability
// ConsoleClass195::executeObjectMethod
// ConsoleClass195::executeObjectMethod 0x991730
extern "C" {
    unsigned int dice_hfe_world_CID_BundleTemplate;
    unsigned int dice_hfe_world_BundleTemplate_mActiveMemberId;
    void* dice_hfe_world_getActiveTemplate_unsigned_int(unsigned int);
    void dice_hfe_world_BundleTemplate_getPosition_int(void* out, void* tpl, unsigned member);
}

namespace dice { namespace hfe { namespace world {

long executeObjectMethod_0x991730(long p) {
    unsigned buf[8];
    int sel = *(int*)(p + 0x30);
    if (sel != 0) goto case1_check;
    {
        *(char*)(p + 0x108) = 1;
        unsigned cid = dice_hfe_world_CID_BundleTemplate;
        unsigned mid = dice_hfe_world_BundleTemplate_mActiveMemberId;
        void* tpl = dice_hfe_world_getActiveTemplate_unsigned_int(cid);
        dice_hfe_world_BundleTemplate_getPosition_int(buf, tpl, mid);
        unsigned* d = (unsigned*)(p + 0x10c);
        d[0] = buf[0];
        d[1] = buf[1];
        d[2] = buf[2];
        return (long)d;
    }
case1_check:
    if (sel != 1) return 0;
    {
        unsigned mid = **(unsigned**)(p + 0x38);
        *(char*)(p + 0x108) = 1;
        void* tpl = dice_hfe_world_getActiveTemplate_unsigned_int(dice_hfe_world_CID_BundleTemplate);
        dice_hfe_world_BundleTemplate_getPosition_int(buf + 4, tpl, mid);
        unsigned* d = (unsigned*)(p + 0x10c);
        d[0] = buf[4];
        d[1] = buf[5];
        d[2] = buf[6];
        return (long)d;
    }
}

} } }
