// FUNCTION: BF2 0x81cb70
// ptaCallPatchCallback: calls a callback if non-null, then frees
extern "C" {
    void gsifree(void* ptr);
    void ptaFreeFunc(void* ptr, int a, int b, long c, int d, long e);
}

struct PtaPatchCallback {
    void (*callback)(int, int, long, int, long, void*);
    void* userdata;
};

void ptaCallPatchCallback(PtaPatchCallback* self, int a, int b, long c, int d, long e) {
    if (self->callback != 0) {
        self->callback(a, b, c, d, e, self->userdata);
    }
    gsifree(self);
}
