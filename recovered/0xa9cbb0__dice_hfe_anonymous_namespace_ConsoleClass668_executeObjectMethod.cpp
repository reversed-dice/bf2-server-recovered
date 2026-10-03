// FUNCTION: BF2 0xa9cbb0

extern void* g_mgr_a9cbb0;
extern int g_iid_a9cbb0;
extern void* g_default_a9cbb0;

extern "C" unsigned _ZNK4dice3hfe14ServerSettings26getNumPlayersNeededToStartEv_get_a9cbb0(void*);
typedef void* (*fnv_a9cbb0)(void*, int);

long dice_hfe_anonymous_namespace_ConsoleClass668_executeObjectMethod(void* p) {
    if (*(int*)((char*)p + 0x30) != 0) goto not_zero;
    {
        *(char*)((char*)p + 0x108) = 1;
        void* ss;
        void* mgr = g_mgr_a9cbb0;
        if (__builtin_expect(mgr != 0, 1)) {
            void* c = ((fnv_a9cbb0)*(void**)((char*)*(void**)mgr + 0x18))(mgr, g_iid_a9cbb0);
            if (c != 0) { ss = 0; goto use; }
        }
        ss = g_default_a9cbb0;
use:
        *(unsigned*)((char*)p + 0x10c) = _ZNK4dice3hfe14ServerSettings26getNumPlayersNeededToStartEv_get_a9cbb0(ss);
        return (long)((char*)p + 0x10c);
    }
not_zero:
    if (*(int*)((char*)p + 0x30) != 1) return 0;
    {
        unsigned val = **(unsigned**)((char*)p + 0x38);
        *(char*)((char*)p + 0x108) = 0;
        void* ss;
        void* mgr = g_mgr_a9cbb0;
        if (mgr != 0) {
            void* c = ((fnv_a9cbb0)*(void**)((char*)*(void**)mgr + 0x18))(mgr, g_iid_a9cbb0);
            if (c != 0) { ss = 0; goto use2; }
        }
        ss = g_default_a9cbb0;
use2:

        *(unsigned*)((char*)ss + 0x80) = val;
        return 0;
    }
}
