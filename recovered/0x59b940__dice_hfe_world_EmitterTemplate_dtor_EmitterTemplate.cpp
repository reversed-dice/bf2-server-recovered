// FUNCTION: BF2 0x59b940
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <vector>
#include <new>

namespace dice { namespace hfe { namespace world {

typedef std::string str_59b940;
// Only the SIZE and the leading std::string matter: the loop strides 16 bytes
// and never touches the second member.
struct Elem_59b940 { std::string s; long pad; };
typedef std::vector<Elem_59b940> vec_59b940;

struct Str5_59b940 { std::string a[5]; };

// TRICK 39: every write goes through a declared member, so the address stays
// base+displacement instead of being hoisted into a callee-saved register.
struct Obj_59b940 {
    void* m_v0;                       // 0x000
    void* m_pad08;                    // 0x008
    void* m_v1;                       // 0x010
    void* m_pad18[10];                // 0x018
    void* m_v2;                       // 0x068
    char  m_pad70[0x118 - 0x070];     // 0x070
    vec_59b940 m_vec;                 // 0x118
    char  m_pad130[0x168 - 0x130];    // 0x130
    str_59b940 m_s168;                // 0x168
    char  m_pad170[0x178 - 0x170];    // 0x170
    str_59b940 m_s178;                // 0x178
    str_59b940 m_s180;                // 0x180
    str_59b940 m_s188;                // 0x188
    str_59b940 m_s190;                // 0x190
    char  m_pad198[0x3d8 - 0x198];    // 0x198
    str_59b940 m_s3d8;                // 0x3d8
    Str5_59b940 m_arr;                // 0x3e0
};

extern void dice_hfe_world_ObjectTemplate_dtor_ObjectTemplate(void*);

void dtor_59b940(char* self) {
    Obj_59b940* p = (Obj_59b940*)self;
    p->m_v0 = (void*)0xb5ff10;
    p->m_v1 = (void*)0xb60148;
    p->m_v2 = (void*)0xb60180;
    p->m_arr.~Str5_59b940();
    p->m_s3d8.~basic_string();
    p->m_v0 = (void*)0xb5c690;
    p->m_v1 = (void*)0xb5c8c8;
    p->m_v2 = (void*)0xb5c900;
    p->m_s190.~basic_string();
    p->m_s188.~basic_string();
    p->m_s180.~basic_string();
    p->m_s178.~basic_string();
    p->m_s168.~basic_string();
    p->m_vec.~vector();
    dice_hfe_world_ObjectTemplate_dtor_ObjectTemplate((void*)self);
    operator delete((void*)self);
}

} } }
