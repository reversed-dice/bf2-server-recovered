// FUNCTION: BF2 0x5a8260
// Obstacle ctor 0x5335b0 — base + 2 vptr
namespace dice { namespace hfe { namespace world {

extern void ob_base(void* p);

void ob_ctor(void* p, void* tmpl) {
    ob_base(p);
    *(void**)p = (void*)0xb63d30;
    *(void**)((char*)p + 0x10) = (void*)0xb63f98;
}

}}}
