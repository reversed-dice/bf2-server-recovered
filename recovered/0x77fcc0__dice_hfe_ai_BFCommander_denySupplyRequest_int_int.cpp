// FUNCTION: BF2 0x77fcc0
#include <string>

// Globals are absolute derefs read out of this function's own ASM:
// dice_hfe_gameLogic at 0x010b8c08, dice_hfe_squadManager at 0x010b8c00.
extern "C" void* getVoiceMessages_4756e0(void* gameLogic);
extern "C" char namesToIds_4c6d30(void* vm, int* a, int* b, int* c,
                                  const std::string& s1, const std::string& s2,
                                  const std::string& s3);
extern "C" void playRadioMessage_4c6690(void* vm, int player, int a, int b, int c);
typedef void (*vfn7)(void*, int, int, int, int, int, int);

extern "C" void f_77fcc0(void* self, int player, int arg3) {
    int i1 = 0, i2 = 0, i3 = 0;
    // The three strings are temporaries, not named locals: the target destroys
    // them BEFORE the `if`, i.e. at the end of the full expression. GCC 4.0
    // evaluates the argument list right to left, so "" is constructed first and
    // destroyed last, which is exactly the target's order.
    char ok = namesToIds_4c6d30(getVoiceMessages_4756e0(*(void**)0x010b8c08),
                                &i1, &i2, &i3,
                                std::string("supply_deny"),
                                std::string("commander"),
                                std::string(""));
    if (ok) {
        playRadioMessage_4c6690(getVoiceMessages_4756e0(*(void**)0x010b8c08),
                                player, i1, i2, i3);
    }
    void* sm = *(void**)0x010b8c00;
    // volatile on the vtable-slot load is what forces MOV RAX,[RAX+0x48] +
    // CALL RAX. Without it GCC folds the load into CALL QWORD PTR [RAX+0x48]
    // and the function sits at 98.59%.
    vfn7 fn = *(vfn7 volatile*)(*(char**)sm + 0x48);
    fn(sm, player, arg3, 0, 2, 3, 0);
}
// REVERSED_FUNCTION: dice_hfe_ai_BFCommander_denySupplyRequest_int_int (0x77fcc0)
