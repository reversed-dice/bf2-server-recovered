// FUNCTION: BF2 0x77f010
namespace dice { namespace hfe { namespace ai {

bool fn_0x77f010(void* self, int teamIdx) {
    void** g = *(void***)0x108dda0;
    char* team = (char*)g[teamIdx-1];
    void* val = *(void**)(team+8);
    return val != (void*)(team+8);
}

} } }
// REVERSED_FUNCTION: dice_hfe_ai_BFCommander_gameHasArtillery_int (0x77f010)
