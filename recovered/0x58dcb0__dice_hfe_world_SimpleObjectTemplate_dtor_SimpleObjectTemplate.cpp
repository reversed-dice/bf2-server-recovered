// FUNCTION: BF2 0x58dcb0
#include <string>
#include <vector>

namespace dice { namespace hfe {

typedef std::string str_58dcb0;
// Only the SIZE and the leading std::string matter: the loop strides 16 bytes
// and never touches the second member.
struct Elem_58dcb0 { std::string s; long pad; };
typedef std::vector<Elem_58dcb0> vec_58dcb0;

extern void dice_hfe_world_ObjectTemplate_dtor_ObjectTemplate(void*);

void dtor_58dcb0(char* self) {
    *(void**)(self + 0x0) = (void*)0xb5c690;
    *(void**)(self + 0x10) = (void*)0xb5c8c8;
    *(void**)(self + 0x68) = (void*)0xb5c900;
    ((str_58dcb0*)(self + 0x190))->~str_58dcb0();
    ((str_58dcb0*)(self + 0x188))->~str_58dcb0();
    ((str_58dcb0*)(self + 0x180))->~str_58dcb0();
    ((str_58dcb0*)(self + 0x178))->~str_58dcb0();
    ((str_58dcb0*)(self + 0x168))->~str_58dcb0();
    ((vec_58dcb0*)(self + 0x118))->~vec_58dcb0();
    dice_hfe_world_ObjectTemplate_dtor_ObjectTemplate((void*)self);
}
} }
// REVERSED_FUNCTION: dice_hfe_world_SimpleObjectTemplate_dtor_SimpleObjectTemplate (0x58dcb0)
