namespace dice { namespace hfe {

extern void* gameLogic;

class Player {
public:
    void reset();
};

void resetStats();

void Player::reset() {
    *(unsigned int*)((char*)this + 0x294) = 0;
    resetStats();
    ((void(*)(Player*, int, int))((*(void***)this)[19]))(this, 0, -1);
    ((void(*)(Player*, int))((*(void***)this)[40]))(this, 0);
    *(volatile unsigned long long*)((char*)this + 0x98) = 0;
    *(volatile unsigned int*)((char*)this + 0x110) = 0;
    *(volatile unsigned int*)((char*)this + 0x160) = 0;
    *(volatile char*)((char*)this + 0x148) = 0;
    *(volatile unsigned long long*)((char*)this + 0x70) = 0;
    *(volatile char*)((char*)this + 0x134) = 0;
    if (((bool(*)(void*))((*(void***)gameLogic)[32]))(gameLogic)) {
        ((void(*)(Player*, int, int))((*(void***)this)[183]))(this, 0, 1);
    }
    ((void(*)(Player*, int, int))((*(void***)this)[177]))(this, 0, 1);
    ((void(*)(Player*))((*(void***)this)[188]))(this);
}

} }
// REVERSED_FUNCTION: dice_hfe_Player::reset (0x4946e0)