// FUNCTION: BF2 0x4a2a50
// Player::getPlayerInput 0x4a2a50 — copie buffer + return self
namespace dice { namespace hfe {

extern void copy_input(void* self, void* dst, int n);

void* getPlayerInput(void* self, void* dst) {
    copy_input(self, (char*)dst + 0x478, 0x111);
    return self;
}

}}
