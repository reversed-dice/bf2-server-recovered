// FUNCTION: BF2 0x82c1b0
struct T { char pad[0x30]; int f30; };
extern "C" {
T* gpiFindTransferByLocalID(void*, int);
void gpiSetErrorString(void*, const char*);
}

extern "C" int gpGetCurrentFile(void* conn, int id, int* out) {
    T* t = gpiFindTransferByLocalID(conn, id);
    if (t == 0) {
        gpiSetErrorString(conn, "Invalid transfer.");
        return 2;
    }
    *out = t->f30;
    return 0;
}
