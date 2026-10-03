extern "C" void iad(void*);
extern "C" void _ZdlPv_0(void*);
extern "C" void dice_hfe_ai_BFGameEffector_dtor_BFGameEffector(void* self) {
    void* vec = (char*)self + 8;
    *(void**)self = (void*)0xba19f0;
    void* it = *(void**)vec;
    void* end = *(void**)((char*)vec + 8);
    for (; it != end; it = (char*)it + 0x14) {}
    if (*(void**)vec != 0) _ZdlPv_0(*(void**)vec);
    iad(self);
    _ZdlPv_0(self);
}
