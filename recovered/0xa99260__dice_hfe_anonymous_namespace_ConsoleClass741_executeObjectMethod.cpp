// FUNCTION: BF2 0xa99260

extern void* g_mgr_a99260;
extern int g_iid_a99260;
extern void* g_default_a99260;

extern "C" unsigned char _ZNK4dice3hfe14ServerSettings16getUseGlobalRankEv_get_a99260(void*);
typedef void* (*fnv_a99260)(void*, int);

long dice_hfe_anonymous_namespace_ConsoleClass741_executeObjectMethod(void* p) {
    if (*(int*)((char*)p + 0x30) != 0) goto not_zero;
    {
        *(char*)((char*)p + 0x108) = 1;
        void* ss;
        void* mgr = g_mgr_a99260;
        if (mgr == 0) goto use_d;
        {
            void* c = ((fnv_a99260)*(void**)((char*)*(void**)mgr + 0x18))(mgr, g_iid_a99260);
            ss = 0;
            if (c == 0) goto use_d;
        }
        goto use;
use_d:
        ss = g_default_a99260;
use:
        *(unsigned char*)((char*)p + 0x10a) = _ZNK4dice3hfe14ServerSettings16getUseGlobalRankEv_get_a99260(ss);
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
        void* mgr = g_mgr_a99260;
        if (mgr == 0) goto use2_d;
        {
            void* c = ((fnv_a99260)*(void**)((char*)*(void**)mgr + 0x18))(mgr, g_iid_a99260);
            ss = 0;
            if (c == 0) goto use2_d;
        }
        goto use2;
use2_d:
        ss = g_default_a99260;
use2:

        *(unsigned char*)((char*)ss + 0x146) = val;
        return 0;
    }
}
