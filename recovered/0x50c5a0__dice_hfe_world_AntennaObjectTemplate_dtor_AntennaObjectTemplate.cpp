// FUNCTION: BF2 0x50c5a0
#include <string>
#include <vector>

namespace dice { namespace hfe { namespace world {

typedef std::string str_50c5a0;
// Only the SIZE and the leading std::string matter: the loop strides 16 bytes
// and never touches the second member.
struct Elem_50c5a0 { std::string s; long pad; };
typedef std::vector<Elem_50c5a0> vec_50c5a0;

extern void dice_hfe_world_ObjectTemplate_dtor_ObjectTemplate(void*);
extern void fn_6c5d30(void*);
extern void fn_4085b8(void*);

void dtor_50c5a0(char* self) {
    void* sk = *(void**)(self + 0x1d0);
    *(void**)(self + 0x0) = (void*)0xb3dcb0;
    *(void**)(self + 0x10) = (void*)0xb3dee8;
    *(void**)(self + 0x68) = (void*)0xb3df20;
    if (sk) {
        fn_6c5d30(sk);
        fn_4085b8(sk);
    }
    *(void**)(self + 0x0) = (void*)0xb5c690;
    *(void**)(self + 0x10) = (void*)0xb5c8c8;
    *(void**)(self + 0x68) = (void*)0xb5c900;
    ((str_50c5a0*)(self + 0x190))->~str_50c5a0();
    ((str_50c5a0*)(self + 0x188))->~str_50c5a0();
    ((str_50c5a0*)(self + 0x180))->~str_50c5a0();
    ((str_50c5a0*)(self + 0x178))->~str_50c5a0();
    ((str_50c5a0*)(self + 0x168))->~str_50c5a0();
    ((vec_50c5a0*)(self + 0x118))->~vec_50c5a0();
    dice_hfe_world_ObjectTemplate_dtor_ObjectTemplate((void*)self);
}

} } }
