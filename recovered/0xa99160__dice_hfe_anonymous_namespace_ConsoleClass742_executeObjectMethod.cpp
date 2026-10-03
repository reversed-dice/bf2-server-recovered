// FUNCTION: BF2 0xa99160

extern void* g_mgr_a99160;
extern int g_iid_a99160;
extern void* g_default_a99160;

extern "C" unsigned char _ZNK4dice3hfe14ServerSettings19getUseGlobalUnlocksEv_get_a99160(void*);
typedef void* (*fnv_a99160)(void*, int);

long dice_hfe_anonymous_namespace_ConsoleClass742_executeObjectMethod(void* p) {
    if (*(int*)((char*)p + 0x30) != 0) goto not_zero;
    {
        *(char*)((char*)p + 0x108) = 1;
        void* ss;
        void* mgr = g_mgr_a99160;
        if (mgr == 0) goto use_d;
        {
            void* c = ((fnv_a99160)*(void**)((char*)*(void**)mgr + 0x18))(mgr, g_iid_a99160);
            ss = 0;
            if (c == 0) goto use_d;
        }
        goto use;
use_d:
        ss = g_default_a99160;
use:
        *(unsigned char*)((char*)p + 0x10a) = _ZNK4dice3hfe14ServerSettings19getUseGlobalUnlocksEv_get_a99160(ss);
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
        void* mgr = g_mgr_a99160;
        if (mgr == 0) goto use2_d;
        {
            void* c = ((fnv_a99160)*(void**)((char*)*(void**)mgr + 0x18))(mgr, g_iid_a99160);
            ss = 0;
            if (c == 0) goto use2_d;
        }
        goto use2;
use2_d:
        ss = g_default_a99160;
use2:

        *(unsigned char*)((char*)ss + 0x147) = val;
        return 0;
    }
}
