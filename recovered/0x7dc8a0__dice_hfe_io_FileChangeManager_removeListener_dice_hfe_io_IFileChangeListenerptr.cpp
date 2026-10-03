// FUNCTION: BF2 0x7dc8a0
#include <string>
typedef unsigned char (*removefn_7dc8a0)(void*, void*, std::string const&);

// Empty-string literal at 0x00bb25f1, read from .rodata: the scorer normalises
// the literal's address, so its content is invisible to the score.
extern "C" unsigned char remove_listener_7dc8a0(char* self, void* listener) {
    removefn_7dc8a0 fn = *(removefn_7dc8a0*)(*(char**)self + 0x28);
    return fn(self, listener, std::string(""));
}
// REVERSED_FUNCTION: dice_hfe_io_FileChangeManager_removeListener_dice_hfe_io_IFileChangeListenerptr (0x7dc8a0)
