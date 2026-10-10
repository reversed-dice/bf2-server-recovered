// FUNCTION: BF2 0x82c150
struct T { char pad[8]; void* p8; };
extern "C" {
T* gpiFindTransferByLocalID(void*, int);
void gpiSetErrorString(void*, const char*);
int ArrayLength(void*);
}

extern "C" int gpGetNumFiles(void* conn, int id, int* out) {
    T* t = gpiFindTransferByLocalID(conn, id);
    if (t == 0) {
        gpiSetErrorString(conn, "Invalid transfer.");
        return 2;
    }
    *out = ArrayLength(t->p8);
    return 0;
}
