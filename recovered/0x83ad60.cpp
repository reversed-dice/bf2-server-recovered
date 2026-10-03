extern "C" void* fn_83ad40(void*);
typedef void (*cb1)(void*);

extern "C" void freeElement_83ad60(void* self, void* x)
{
    cb1 cb = *(cb1*)((char*)self + 0x10);
    if (cb) {
        void* r = fn_83ad40(self);
        cb(r);
    }
}
