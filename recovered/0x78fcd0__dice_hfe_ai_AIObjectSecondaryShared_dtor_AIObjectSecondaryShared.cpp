// FUNCTION: BF2 0x78fcd0
extern "C" void dice_hfe_ai_AIObjectShared_dtor_AIObjectShared(void* self);
extern "C" void _ZdlPv(void* p);

void dtor_78fcd0(void* self) {
    *(void**)self = (void*)0xba63d0;
    void* sub = *(void**)((char*)self + 0x70);
    ((void (*)(void*, void*))(*(void***)sub)[0x44])(sub, self);
    void* courier = *(void**)0x10ade58;
    int id = *(int*)((char*)self + 0x64);
    long r = ((long (*)(void*, int))(*(void***)courier)[0x2])(courier, id);
    if (r != 0) {
        ((void (*)(void*, int))(*(void***)*(void**)0x10ade58)[0x4])(*(void**)0x10ade58, *(int*)((char*)self + 0x64));
    }
    dice_hfe_ai_AIObjectShared_dtor_AIObjectShared(self);
    _ZdlPv(self);
}
