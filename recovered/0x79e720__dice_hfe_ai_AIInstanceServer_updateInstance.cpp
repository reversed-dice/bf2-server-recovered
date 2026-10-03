// FUNCTION: BF2 0x79e720
#include <string>
typedef void* (*getfn_79e720)(void*, std::string const&);

// Literal is "AI" (0x00ca173d in .rodata), not a longer name: the scorer
// normalises the literal's ADDRESS, so a wrong string still scores 100% and
// the score cannot catch it. Read from the binary, not guessed.
extern "C" void update_79e720() {
    void* cm = *(void**)0x010b3798;
    getfn_79e720 fn = *(getfn_79e720*)(*(char**)cm + 0xb8);
    *(void**)0x010ae0c0 = fn(*(void**)0x010b3798, std::string("AI"));
}
// REVERSED_FUNCTION: dice_hfe_ai_AIInstanceServer_updateInstance (0x79e720)
