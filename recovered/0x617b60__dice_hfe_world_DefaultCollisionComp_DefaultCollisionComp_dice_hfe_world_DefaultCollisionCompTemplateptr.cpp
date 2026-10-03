// FUNCTION: BF2 0x617b60
// DefaultCollisionComp ctor 0x617b60 — ctor complet
namespace dice { namespace hfe { namespace world {

void dcc_ctor(void* p, void* tpl) {
    *(int*)((char*)p + 8) = 1;
    *(void**)((char*)p + 0x10) = 0;
    *(void**)((char*)p + 0x18) = 0;
    *(void**)p = (void*)0xb7b8f0;
    *(void**)((char*)p + 0x20) = (void*)0xb7b9e8;
    *(int*)((char*)p + 0x28) = 1;
    *(void**)((char*)p + 0x30) = tpl;
    *(int*)((char*)p + 0x38) = 0;
    *(unsigned char*)((char*)p + 0x3c) = 0;
}

}}}
