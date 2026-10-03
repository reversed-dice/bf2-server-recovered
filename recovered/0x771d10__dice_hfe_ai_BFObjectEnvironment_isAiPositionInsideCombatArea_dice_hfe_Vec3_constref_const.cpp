// FUNCTION: BF2 0x771d10
namespace dice { namespace hfe { namespace ai {
extern bool fn_4cb060(void* a, void* b, void* c);
extern void* g_obj_108d650;
bool isAiPositionInAir_0x771d10(void* self, void* b) {
    return fn_4cb060(g_obj_108d650, b, (char*)self + 0x38);
}
} } }
