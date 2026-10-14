// FUNCTION: BF2 0x46ce50
namespace dice { namespace hfe {
extern void auth_cb_(int, int, int, char*, void*);
extern void refresh_cb_(int, int, int, char*, void*);
extern int gcd_authenticate_user(int, int, unsigned int, char const*, char const*, void*, void*, void*);

void GameSpyCDKeyAuthenticator_connectPlayer(void* self, int a, int b, unsigned int c, char const* d, char const* e) {
    if (*(char*)((char*)self + 0x18) != 0) {
        gcd_authenticate_user(a, b, c, d, e, (void*)auth_cb_, (void*)refresh_cb_, self);
        return;
    }
    typedef void (*Fn)(int, int, void*, char const*);
    Fn f = *(Fn*)((char*)self + 8);
    return f(b, 0, *(void**)((char*)self + 0x10), d);
}
} }
