// FUNCTION: BF2 0xae73b0
#include <string>
namespace dice { namespace hfe {
extern void* ragDollTemplate;
extern void RagDollTemplate_skeleton(void* self, const std::string* s);

long fn_ae73b0(long param_1) {
    if (*(int*)(param_1 + 0x30) == 1) {
        std::string s(*(const std::string*)*(void**)(param_1 + 0x38));
        *(char*)(param_1 + 0x108) = 0;
        RagDollTemplate_skeleton(ragDollTemplate, &s);
    }
    return 0;
}
} }
