// FUNCTION: BF2 0xa9b940
namespace dice { namespace hfe {

extern void* game;               // 0x010c5420
extern int IID_IGameClient;      // 0x00c76020
extern void* serverSettings;     // 0x0108b660

extern "C" void setVotingEnabled(void* ss, unsigned val);

typedef void* (*fn18_t)(void*, int);

long executeObjectMethod(void* p) {
    if (*(int*)((char*)p + 0x30) != 0) goto not_zero;
    {
        *(char*)((char*)p + 0x108) = 1;
        void* ss;
        void* g = game;
        if (g == 0) goto use_d;
        {
            void* c = ((fn18_t)*(void**)((char*)*(void**)g + 0x18))(g, IID_IGameClient);
            ss = 0;
            if (c == 0) goto use_d;
        }
        goto use;
use_d:
        ss = serverSettings;
use:
        *(unsigned char*)((char*)p + 0x10a) = *(unsigned char*)((char*)ss + 0x3c);
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
        void* g = game;
        if (g == 0) goto use2_d;
        {
            void* c = ((fn18_t)*(void**)((char*)*(void**)g + 0x18))(g, IID_IGameClient);
            ss = 0;
            if (c == 0) goto use2_d;
        }
        goto use2;
use2_d:
        ss = serverSettings;
use2:
        setVotingEnabled(ss, val);
        return 0;
    }
}

} }
