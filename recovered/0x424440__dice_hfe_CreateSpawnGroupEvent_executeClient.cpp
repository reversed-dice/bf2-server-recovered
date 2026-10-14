// FUNCTION: BF2 0x424440
namespace dice { namespace hfe {

extern "C" void* g_game_10c5420;
extern "C" int g_iid_10c76020;
extern "C" void* g_spawn_10c42c0;

typedef void* (*vfn18)(void*, int);
typedef void (*vfn90)(void*, unsigned char, unsigned short, int, unsigned char,
                      unsigned char, unsigned char, unsigned char, unsigned char);

class CreateSpawnGroupEvent {
public:
    char _head[0x10];
    unsigned char f_10;
    char _gap_11[3];
    unsigned int f_14;
    bool f_18;
    bool f_19;
    bool f_1a;
    unsigned char f_1b;
    unsigned char f_1c;
    char _gap_1d[1];
    unsigned short f_1e;

    bool executeClient();
};

bool CreateSpawnGroupEvent::executeClient()
{
    void* mgr = g_game_10c5420;
    if (!((vfn18)(*(void***)mgr)[0x18/8])(mgr, g_iid_10c76020)) return false;
    void* sm = g_spawn_10c42c0;
    if (!sm) return false;
    ((vfn90)(*(void***)sm)[0x90/8])(sm, f_10, f_1e, (int)f_14, f_18, f_19, f_1a, f_1b, f_1c);
    return true;
}

} }
