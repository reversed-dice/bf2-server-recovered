// FUNCTION: BF2 0x8ffa80
namespace dice { namespace hfe { namespace world {

extern unsigned int CID_PlayerControlObjectTemplate;

class ObjectTemplate { public: char pad[0x29c]; };

extern ObjectTemplate* getActiveTemplate(unsigned int cid);

struct ConsoleObj {
    char pad0[0x30];
    int argCount;
    char pad1[4];
    void* arg0;
    char pad2[0xc8];
    char m_active;
    char pad3[3];
    unsigned result[3];
};

} } }

extern "C" void* eom_8ffa80(dice::hfe::world::ConsoleObj* self)
{
    using namespace dice::hfe::world;
    if (self->argCount == 0) {
        self->m_active = 1;
        ObjectTemplate* comp = getActiveTemplate(CID_PlayerControlObjectTemplate);
        unsigned* src = (unsigned*)((char*)comp + 0x204);
        unsigned t0 = src[0];
        unsigned t2 = src[2];
        unsigned t1 = src[1];
        unsigned* out = self->result;
        out[0] = t0;
        out[1] = t1;
        out[2] = t2;
        return out;
    }
    if (self->argCount == 1) {
        unsigned* q = (unsigned*)self->arg0;
        unsigned c = q[2];
        unsigned b = q[1];
        unsigned a = q[0];
        self->m_active = 0;
        ObjectTemplate* comp = getActiveTemplate(CID_PlayerControlObjectTemplate);
        unsigned* d = (unsigned*)((char*)comp + 0x204);
        d[0] = a;
        d[1] = b;
        d[2] = c;
    }
    return 0;
}
