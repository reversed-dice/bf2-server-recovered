// FUNCTION: BF2 0x82c0f0
struct T { char pad[0x54]; int f54; };
extern "C" {
T* gpiFindTransferByLocalID(void*, int);
void gpiSetErrorString(void*, const char*);
}

extern "C" int gpGetTransferProgress(void* conn, int id, int* out) {
    T* t = gpiFindTransferByLocalID(conn, id);
    if (t == 0) {
        gpiSetErrorString(conn, "Invalid transfer.");
        return 2;
    }
    *out = t->f54;
    return 0;
}
