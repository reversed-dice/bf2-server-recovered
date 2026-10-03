extern "C" void istrstream_ctor(void* ss, void* str, int mode);
extern "C" void op_rs_bool(void* ss, void* flag);
extern "C" int _ZN9__gnu_cxx18__exchange_and_addEPVii(int volatile*, int);
extern "C" void _ZNSs4_Rep10_M_destroyERKSaIcE(void*, void*);
typedef void (*DT)(void*);
extern "C" void dice_hfe_io_anonymous_namespace_ConsoleClass40_setArgFromString(void* self, int id, void* str) {
    if (id != 1) return;
    char ss_[0x188];
    char* base = ss_;
    istrstream_ctor(base, str, 8);
    op_rs_bool(base, (void*)0x10b3fcc);
    *(void**)((char*)self + 0x38) = (void*)0x10b3fcc;
    *(void**)base = (void*)0xf6ce38;
    *(void**)(base + 0x60) = (void*)0xf6ce60;
    *(void**)(base + 0x10) = (void*)0xf6cce0;
    if (*(char**)(base + 0x58) - 0x18 != (char*)0xf6c6d0) {
        if (_ZN9__gnu_cxx18__exchange_and_addEPVii((int volatile*)(*(char**)(base + 0x58) - 0x8), -1) < 1) {
            char alloc[8];
            _ZNSs4_Rep10_M_destroyERKSaIcE(*(char**)(base + 0x58) - 0x18, alloc);
        }
    }
    ((DT)0x4073c8)(base + 0x48);
    *(void**)(base + 0x10) = (void*)0xf6d0c0;
    void* vtt = *(void**)0xf6d4c8;
    *(void**)base = vtt;
    *(void**)(base + *(long*)((char*)vtt - 0x18)) = *(void**)0xf6d4d0;
    *(void**)(ss_ + 0x8) = 0;
    *(void**)(ss_ + 0x60) = (void*)0xf6d4b0;
    ((DT)0x407fc8)(ss_ + 0x60);
}