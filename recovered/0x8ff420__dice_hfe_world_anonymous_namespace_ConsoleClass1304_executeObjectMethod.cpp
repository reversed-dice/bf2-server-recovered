// FUNCTION: BF2 0x8ff420
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe { namespace world {
extern unsigned int CID_PlayerControlObjectTemplate;
extern void* getActiveTemplate(unsigned int);
} } }

typedef void* (*F388)(void*);
typedef void (*F380)(void*, void*);

extern "C" void* eom(void* self) {
    int mode = *(int*)((char*)self + 0x30);
    if (mode == 0) {
        unsigned tmp[3];
        *(char*)((char*)self + 0x108) = 1;
        unsigned cid = dice::hfe::world::CID_PlayerControlObjectTemplate;
        void* comp = dice::hfe::world::getActiveTemplate(cid);
        unsigned* src = (unsigned*)((F388)(*(void***)comp)[0x388 / 8])(comp);
        tmp[0] = src[0];
        tmp[2] = src[2];
        tmp[1] = src[1];
        unsigned* out = (unsigned*)((char*)self + 0x10c);
        out[0] = tmp[0];
        out[1] = tmp[1];
        out[2] = tmp[2];
        return out;
    }
    if (mode != 1) {
        return 0;
    }
    unsigned* q = *(unsigned**)((char*)self + 0x38);
    unsigned c = q[2];
    unsigned b = q[1];
    unsigned a = q[0];
    *(char*)((char*)self + 0x108) = 0;
    unsigned cid = dice::hfe::world::CID_PlayerControlObjectTemplate;
    void* comp = dice::hfe::world::getActiveTemplate(cid);
    F380 f = (F380)(*(void***)comp)[0x380 / 8];
    unsigned buf[3];
    buf[0] = a;
    buf[1] = b;
    buf[2] = c;
    f(comp, buf);
    return 0;
}
