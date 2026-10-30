// FUNCTION: BF2 0x5768d0
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <vector>
#include <new>

namespace dice { namespace hfe { namespace world {

typedef std::string str_5768d0;
// Only the SIZE and the leading std::string matter: the loop strides 16 bytes
// and never touches the second member.
struct Elem_5768d0 { std::string s; long pad; };
typedef std::vector<Elem_5768d0> vec_5768d0;

struct Node_5768d0 { virtual ~Node_5768d0(); };
typedef std::vector<Node_5768d0*> vchild_5768d0;

struct Obj_5768d0 {
    char pad[0x1d8];
    vchild_5768d0 m_children;
};

// The base subobject whose destructor inlines here: its vptr writes are typed
// through this class, not through the derived one.
struct Base_5768d0 {
    void* m_v0;
    char _p8[0x8];
    void* m_v1;
    char _p18[0x50];
    void* m_v3;
};

extern void dice_hfe_world_ObjectTemplate_dtor_ObjectTemplate(void*);

void dtor_5768d0(char* self) {
    *(void**)(self + 0x0) = (void*)0xb56c30;
    *(void**)(self + 0x10) = (void*)0xb56ec0;
    *(void**)(self + 0x68) = (void*)0xb56ef8;
    *(void**)(self + 0x1c8) = (void*)0xb56f78;
    Obj_5768d0* o = (Obj_5768d0*)self;
    for (vchild_5768d0::iterator it = o->m_children.begin(); it != o->m_children.end(); ++it) {
        delete *it;
    }
    o->m_children.~vchild_5768d0();
    Base_5768d0* b = (Base_5768d0*)self;
    b->m_v0 = (void*)0xb5c690;
    b->m_v1 = (void*)0xb5c8c8;
    b->m_v3 = (void*)0xb5c900;
    ((str_5768d0*)(self + 0x190))->~str_5768d0();
    ((str_5768d0*)(self + 0x188))->~str_5768d0();
    ((str_5768d0*)(self + 0x180))->~str_5768d0();
    ((str_5768d0*)(self + 0x178))->~str_5768d0();
    ((str_5768d0*)(self + 0x168))->~str_5768d0();
    ((vec_5768d0*)(self + 0x118))->~vec_5768d0();
    dice_hfe_world_ObjectTemplate_dtor_ObjectTemplate((void*)self);
}

} } }
