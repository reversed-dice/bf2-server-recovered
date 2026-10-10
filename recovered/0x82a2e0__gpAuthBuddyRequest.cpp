// FUNCTION: BF2 0x82a2e0
struct Conn;
extern "C" {
int gpiAuthBuddyRequest(void*, int);
void gpiSetErrorString(void*, const char*);
}

extern "C" int gpAuthBuddyRequest(void* conn, int x) {
    if (conn == 0)
        return 2;
    int* s = *(int**)conn;
    if (s == 0)
        return 2;
    if (s[0x108 / 4] != 0)
        return 0;
    if (s[0x23c / 4] == 4) {
        gpiSetErrorString(conn, "The connection has already been disconnected.");
        return 2;
    }
    return gpiAuthBuddyRequest(conn, x);
}
