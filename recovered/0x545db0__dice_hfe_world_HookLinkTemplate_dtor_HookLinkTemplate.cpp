// FUNCTION: BF2 0x545db0
#include <string>
#include <vector>

namespace dice { namespace hfe {

typedef std::string str_545db0;
// Only the SIZE and the leading std::string matter: the loop strides 16 bytes
// and never touches the second member.
struct Elem_545db0 { std::string s; long pad; };
typedef std::vector<Elem_545db0> vec_545db0;

extern void dice_hfe_world_ObjectTemplate_dtor_ObjectTemplate(void*);

void dtor_545db0(char* self) {
    *(void**)(self + 0x0) = (void*)0xb5c690;
    *(void**)(self + 0x10) = (void*)0xb5c8c8;
    *(void**)(self + 0x68) = (void*)0xb5c900;
    ((str_545db0*)(self + 0x190))->~str_545db0();
    ((str_545db0*)(self + 0x188))->~str_545db0();
    ((str_545db0*)(self + 0x180))->~str_545db0();
    ((str_545db0*)(self + 0x178))->~str_545db0();
    ((str_545db0*)(self + 0x168))->~str_545db0();
    ((vec_545db0*)(self + 0x118))->~vec_545db0();
    dice_hfe_world_ObjectTemplate_dtor_ObjectTemplate((void*)self);
}
} }
// REVERSED_FUNCTION: dice_hfe_world_HookLinkTemplate_dtor_HookLinkTemplate (0x545db0)
