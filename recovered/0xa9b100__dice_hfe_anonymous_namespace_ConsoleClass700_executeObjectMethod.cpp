// FUNCTION: BF2 0xa9b100

extern void* g_mgr_a9b100;
extern int g_iid_a9b100;
extern void* g_default_a9b100;


typedef void* (*fnv_a9b100)(void*, int);

long dice_hfe_anonymous_namespace_ConsoleClass700_executeObjectMethod(void* p) {
    if (*(int*)((char*)p + 0x30) != 0) goto not_zero;
    {
        *(char*)((char*)p + 0x108) = 1;
        void* ss;
        void* mgr = g_mgr_a9b100;
        if (mgr != 0) {
            void* c = ((fnv_a9b100)*(void**)((char*)*(void**)mgr + 0x18))(mgr, g_iid_a9b100);
            if (c != 0) { ss = 0; goto use; }
        }
        ss = g_default_a9b100;
use:
        *(unsigned*)((char*)p + 0x10c) = *(unsigned*)((char*)ss + 0x64);
        return (long)((char*)p + 0x10c);
    }
not_zero:
    if (*(int*)((char*)p + 0x30) != 1) return 0;
    {
        unsigned val = **(unsigned**)((char*)p + 0x38);
        *(char*)((char*)p + 0x108) = 0;
        void* ss;
        void* mgr = g_mgr_a9b100;
        if (mgr != 0) {
            void* c = ((fnv_a9b100)*(void**)((char*)*(void**)mgr + 0x18))(mgr, g_iid_a9b100);
            if (c != 0) { ss = 0; goto use2; }
        }
        ss = g_default_a9b100;
use2:

        *(unsigned*)((char*)ss + 0x64) = val;
        return 0;
    }
}
