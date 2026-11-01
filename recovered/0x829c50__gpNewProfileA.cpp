// from api 97.92%
// FUNCTION: BF2 0x829c50
// gpNewProfileA
extern "C" void gpiSetErrorString(void* conn, char const*);
extern "C" int gpiNewProfile(void* conn, char const* nick, int a3, void* a4, void* cb, void* instance);

typedef void (*GPNewProfileCallback)(void*, unsigned long*, void*);

int gpNewProfileA(void* connection, char const* nick, int a3, void* a4,
                  GPNewProfileCallback cb, void* instance) {
    if (!connection)
        return 2;
    void* c = *(void**)connection;
    if (!c)
        return 2;
    if (!cb) {
        gpiSetErrorString(connection, "No callback.");
        return 2;
    }
    if (!nick || !*nick) {
        gpiSetErrorString(connection, "Invalid nick.");
        return 2;
    }
    if (*(int*)((char*)c + 0x108) != 0) {
        char local[8];
        *(unsigned long*)local = 0;
        cb(connection, (unsigned long*)local, instance);
        return 0;
    }
    if (*(int*)((char*)c + 0x23c) == 4) {
        gpiSetErrorString(connection, "The connection has already been disconnected.");
        return 2;
    }
    return gpiNewProfile(connection, nick, a3, a4, (void*)cb, instance);
}
