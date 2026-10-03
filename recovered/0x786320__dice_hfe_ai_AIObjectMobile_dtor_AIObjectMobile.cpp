// FUNCTION: BF2 0x786320
extern "C" void dice_hfe_ai_IAIObjectMobile_dtor_IAIObjectMobile(void* self);
extern "C" void _ZdlPv(void* p);

void dtor_786320(void* self) {
    *(void* volatile*)self = (void*)0xba4070;
    void* sub = *(void**)((char*)self + 0x38);
    int iid = *(int*)0xc7d6a0;
    long r = ((long (*)(void*, int, int))(*(void***)sub)[0x17])(sub, iid, iid);
    if (__builtin_expect(r != 0, 1)) {
        void* pm = *(void**)0x1133c00;
        ((void (*)(void*, int, void*, void*))(*(void***)pm)[0xd])(pm, 0, *(void**)((char*)self + 0x38), *(void**)((char*)self + 0x30));
        ((void (*)(void*, int, void*, void*))(*(void***)*(void**)0x1133c00)[0xd])(*(void**)0x1133c00, 1, *(void**)((char*)self + 0x38), *(void**)((char*)self + 0x30));
    }
    _ZdlPv(*(void**)((char*)self + 0x30));
    dice_hfe_ai_IAIObjectMobile_dtor_IAIObjectMobile(self);
    _ZdlPv(self);
}
