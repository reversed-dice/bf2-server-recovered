// FUNCTION: BF2 0x4f70a0
extern "C" void* real_0x407268(bool value);

namespace dice { namespace hfe { namespace python {
void* fn_0x4f70a0(void* self, void* args) {
    return real_0x407268(*(long long*)0xae0c0 != 0);
}
} } }
// REVERSED_FUNCTION: dice_hfe_python_sgl_getIsAIGame_objectptr_objectptr (0x4f70a0)
