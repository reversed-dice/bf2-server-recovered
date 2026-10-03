// FUNCTION: BF2 0xa9b640

extern void* g_mgr_a9b640;
extern int g_iid_a9b640;
extern void* g_default_a9b640;
extern "C" void _ZN4dice3hfe14ServerSettings15setTeamVoteOnlyEb_a9b640(void*, unsigned);

typedef void* (*fnv_a9b640)(void*, int);

long dice_hfe_anonymous_namespace_ConsoleClass694_executeObjectMethod(void* p) {
    if (*(int*)((char*)p + 0x30) != 0) goto not_zero;
    {
        *(char*)((char*)p + 0x108) = 1;
        void* ss;
        void* mgr = g_mgr_a9b640;
        if (mgr == 0) goto use_d;
        {
            void* c = ((fnv_a9b640)*(void**)((char*)*(void**)mgr + 0x18))(mgr, g_iid_a9b640);
            ss = 0;
            if (c == 0) goto use_d;
        }
        goto use;
use_d:
        ss = g_default_a9b640;
use:
        *(unsigned char*)((char*)p + 0x10a) = *(unsigned char*)((char*)ss + 0x48);
        return (long)((char*)p + 0x10a);
    }
not_zero:
    if (*(int*)((char*)p + 0x30) != 1) return 0;
    {
        unsigned char* ap = *(unsigned char**)((char*)p + 0x38);
        unsigned char raw = *ap;
        *(char*)((char*)p + 0x108) = 0;
        unsigned val = raw;
        void* ss;
        void* mgr = g_mgr_a9b640;
        if (mgr == 0) goto use2_d;
        {
            void* c = ((fnv_a9b640)*(void**)((char*)*(void**)mgr + 0x18))(mgr, g_iid_a9b640);
            ss = 0;
            if (c == 0) goto use2_d;
        }
        goto use2;
use2_d:
        ss = g_default_a9b640;
use2:

        _ZN4dice3hfe14ServerSettings15setTeamVoteOnlyEb_a9b640(ss, val);
        return 0;
    }
}
