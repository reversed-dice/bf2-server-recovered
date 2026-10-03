// FUNCTION: BF2 0x57d280
#include <string>
#include <vector>

namespace dice { namespace hfe {

typedef std::string str_57d280;
// Only the SIZE and the leading std::string matter: the loop strides 16 bytes
// and never touches the second member.
struct Elem_57d280 { std::string s; long pad; };
typedef std::vector<Elem_57d280> vec_57d280;

extern void dice_hfe_world_ObjectTemplate_dtor_ObjectTemplate(void*);

void dtor_57d280(char* self) {
    *(void**)(self + 0x0) = (void*)0xb5c690;
    *(void**)(self + 0x10) = (void*)0xb5c8c8;
    *(void**)(self + 0x68) = (void*)0xb5c900;
    ((str_57d280*)(self + 0x190))->~str_57d280();
    ((str_57d280*)(self + 0x188))->~str_57d280();
    ((str_57d280*)(self + 0x180))->~str_57d280();
    ((str_57d280*)(self + 0x178))->~str_57d280();
    ((str_57d280*)(self + 0x168))->~str_57d280();
    ((vec_57d280*)(self + 0x118))->~vec_57d280();
    dice_hfe_world_ObjectTemplate_dtor_ObjectTemplate((void*)self);
    operator delete((void*)self);
}
} }
// REVERSED_FUNCTION: dice_hfe_world_EntryPointTemplate_dtor_EntryPointTemplate (0x57d280)
