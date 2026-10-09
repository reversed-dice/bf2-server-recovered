// FUNCTION: BF2 0xa98f60

extern void* g_mgr_747;
extern int g_iid_747;
extern void* g_default_747;

extern "C" unsigned char _ZNK4dice3hfe14ServerSettings9getRankedEv(void*);
extern "C" void _ZN4dice3hfe14ServerSettings9setRankedEb(void*, unsigned int);

typedef void* (*fnv_747)(void*, int);

long dice_hfe_anonymous_namespace_ConsoleClass747_executeObjectMethod(void* p) {
    if (*(int*)((char*)p + 0x30) != 0) goto not_zero;
    {
        *(char*)((char*)p + 0x108) = 1;
        void* ss;
        void* mgr = g_mgr_747;
        if (mgr == 0) goto use_d;
        {
            void* c = ((fnv_747)*(void**)((char*)*(void**)mgr + 0x18))(mgr, g_iid_747);
            ss = 0;
            if (c == 0) goto use_d;
        }
        goto use;
use_d:
        ss = g_default_747;
use:
        *(unsigned char*)((char*)p + 0x10a) = _ZNK4dice3hfe14ServerSettings9getRankedEv(ss);
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
        void* mgr = g_mgr_747;
        if (mgr == 0) goto use2_d;
        {
            void* c = ((fnv_747)*(void**)((char*)*(void**)mgr + 0x18))(mgr, g_iid_747);
            ss = 0;
            if (c == 0) goto use2_d;
        }
        goto use2;
use2_d:
        ss = g_default_747;
use2:
        _ZN4dice3hfe14ServerSettings9setRankedEb(ss, val);
        return 0;
    }
}
