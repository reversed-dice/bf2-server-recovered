// FUNCTION: BF2 0x7c3ba0
// NetworkableBase ctor 0x7c3ba0 — fonction libre
namespace dice { namespace hfe { namespace io {

extern void nb_base(void* p);

void nb_ctor(void* p) {
    nb_base(p);
    *(void**)p = (void*)0xbaa330;
    *(unsigned char*)((char*)p + 0x30) = 1;
    *(unsigned int*)((char*)p + 0x34) = 0;
    *(unsigned int*)((char*)p + 0x38) = 0;
    *(unsigned int*)((char*)p + 0x3c) = 0;
    *(unsigned int*)((char*)p + 0x40) = 0;
    *(unsigned int*)((char*)p + 0x44) = 0;
    *(unsigned int*)((char*)p + 0x48) = 0;
    *(unsigned int*)((char*)p + 0x4c) = 0;
}

}}}

// re-trigger validate 2026-08-06 20:36:38

// re-trigger validate 2026-08-07 00:28:27
