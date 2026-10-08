// FUNCTION: BF2 0x8ffc00
namespace dice { namespace hfe { namespace world {
extern unsigned int CID_PlayerControlObjectTemplate;
extern unsigned int IID_ObjectTemplate;
class ObjectTemplate { public: char pad[0x29c]; };
extern ObjectTemplate* getActiveTemplate(unsigned int cid);
} } }

extern "C" void* eom_8ffc00(void* param_1)
{
    using namespace dice::hfe::world;
    int argc = *(int*)((char*)param_1 + 0x30);
    if (argc == 0) {
        *(char*)((char*)param_1 + 0x108) = 1;
        unsigned cid = CID_PlayerControlObjectTemplate;
        void* comp = getActiveTemplate(cid);
        unsigned* src = (unsigned*)((char*)comp + 0x204);
        unsigned tmp[3];
        unsigned* out = (unsigned*)((char*)param_1 + 0x10c);
        tmp[0] = src[0];
        tmp[2] = src[2];
        tmp[1] = src[1];
        out[0] = tmp[0];
        out[1] = tmp[1];
        out[2] = tmp[2];
        return out;
    }
    if (argc == 1) {
        unsigned* q = *(unsigned**)((char*)param_1 + 0x38);
        unsigned c = q[2];
        unsigned b = q[1];
        unsigned a = q[0];
        *(char*)((char*)param_1 + 0x108) = 0;
        unsigned cid = CID_PlayerControlObjectTemplate;
        void* comp = getActiveTemplate(cid);
        unsigned* dst = (unsigned*)((char*)comp + 0x204);
        dst[0] = a;
        dst[1] = b;
        dst[2] = c;
    }
    return 0;
}
