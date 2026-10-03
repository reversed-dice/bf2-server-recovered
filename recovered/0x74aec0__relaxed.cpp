// FUNCTION: BF2 0x74aec0
// Obstacle ctor 0x5335b0 — base + 2 vptr
namespace dice { namespace hfe { namespace world {

extern void ob_base(void* p);

void ob_ctor(void* p, void* tmpl) {
    ob_base(p);
    *(void**)p = (void*)0xb9a4b0;
    *(void**)((char*)p + 0x8) = (void*)0xf6c6e8;
}

}}}
