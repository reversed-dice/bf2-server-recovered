// FUNCTION: BF2 0x82c090
struct T { char pad[0x50]; int f50; };
extern "C" {
T* gpiFindTransferByLocalID(void*, int);
void gpiSetErrorString(void*, const char*);
}

extern "C" int gpGetTransferSize(void* conn, int id, int* out) {
    T* t = gpiFindTransferByLocalID(conn, id);
    if (t == 0) {
        gpiSetErrorString(conn, "Invalid transfer.");
        return 2;
    }
    *out = t->f50;
    return 0;
}
