// FUNCTION: BF2 0x8ffcc0
namespace dice { namespace hfe { namespace world {

void* getActiveTemplateComponent(unsigned int, unsigned int);

extern unsigned int CID_DefaultDetonationCompTemplate;
extern unsigned int IID_IProjectileDetonationCompTemplate;

void* eom_8ffcc0(long param_1) {
    unsigned tmp[3];
    int sel = *(int*)(param_1 + 0x30);
    if (sel == 0) {
        *(char*)(param_1 + 0x108) = 1;
        unsigned cid = CID_DefaultDetonationCompTemplate;
        void* comp = getActiveTemplateComponent(IID_IProjectileDetonationCompTemplate, cid);
        unsigned* src = (unsigned*)((char*)comp + 0x90);
        tmp[0] = src[0];
        tmp[2] = src[2];
        tmp[1] = src[1];
        unsigned* out = (unsigned*)(param_1 + 0x10c);
        out[0] = tmp[0];
        out[1] = tmp[1];
        out[2] = tmp[2];
        return out;
    }
    if (sel != 1) return 0;
    unsigned* q = *(unsigned**)(param_1 + 0x38);
    unsigned cid = CID_DefaultDetonationCompTemplate;
    unsigned c = q[2];
    unsigned b = q[1];
    unsigned a = q[0];
    *(char*)(param_1 + 0x108) = 0;
    void* comp = getActiveTemplateComponent(IID_IProjectileDetonationCompTemplate, cid);
    unsigned buf[3];
    buf[0] = a;
    buf[1] = b;
    buf[2] = c;
    unsigned* dst = (unsigned*)((char*)comp + 0x90);
    dst[0] = buf[0];
    dst[1] = buf[1];
    dst[2] = buf[2];
    return 0;
}

} } }
