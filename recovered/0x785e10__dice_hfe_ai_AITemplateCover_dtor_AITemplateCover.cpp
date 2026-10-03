// FUNCTION: BF2 0x785e10
extern "C" void _ZdaPv(void* p);
extern "C" void _ZdlPv(void* p);

void dtor_785d80(void* self) {
    *(void**)self = (void*)0xba3ef0;
    void* p1 = *(void**)((char*)self + 8);
    if (p1 != 0) {
        ((void (*)(void*))(*(void***)p1)[0x1])(p1);
    }
    void* st = *(void**)((char*)self + 0x20);
    if (st != 0) {
        if (*(void**)st != 0) {
            _ZdaPv(*(void**)st);
        }
        if (*(void**)((char*)st + 8) != 0) {
            _ZdaPv(*(void**)((char*)st + 8));
        }
        if (*(void**)((char*)st + 0x10) != 0) {
            _ZdaPv(*(void**)((char*)st + 0x10));
        }
        if (*(void**)((char*)st + 0x18) != 0) {
            _ZdaPv(*(void**)((char*)st + 0x18));
        }
        _ZdlPv(st);
    }
    void* p3 = *(void**)((char*)self + 0x30);
    if (p3 != 0) {
        _ZdaPv(p3);
    }
    *(void**)self = (void*)0xba3710;
}
