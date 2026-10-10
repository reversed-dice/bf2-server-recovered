// FUNCTION: BF2 0x82a6d0
extern "C" {
void gpiSetErrorString(void*, const char*);
int gpiDeleteBuddy(void*, int, int);
}

extern "C" int gpDeleteBuddy(void* conn, int buddyid) {
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
    if (gpiDeleteBuddy(conn, buddyid, 1) != 0)
        return 2;
    return 0;
}
