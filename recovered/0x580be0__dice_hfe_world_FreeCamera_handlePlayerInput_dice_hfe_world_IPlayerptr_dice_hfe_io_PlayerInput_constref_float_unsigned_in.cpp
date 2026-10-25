// FUNCTION: BF2 0x580be0
typedef void* (*Fn18)(void*, unsigned int);
typedef void  (*Fn118)(void*, void*);
typedef void  (*Fn310)(void*, int, int, int);

extern void handlePlayerInputDefault_58(void*, void*, void*, float, unsigned int);
extern void handlePlayerInputCVMTrace_58(void*, void*, void*, float, unsigned int);
extern void followNextPlayer_58(void*, bool);

void handlePlayerInput_580be0(void* self, void* player, void* input, float f, unsigned int u)
{
    char* s = (char*)self;
    if (*(void**)(s + 0x50) != 0) return;

    void* game = *(void**)0x10c5420;
    void* gs = (*(Fn18*)(*(char**)game + 0x18))(game, *(unsigned int*)0xc76024);
    if (gs != 0 && *(char*)(*(char**)0x108a340 + 0x2d) != 0
        && *(char*)(s + 0x328) != 0
        && (*(unsigned char*)((char*)input + 0x101) & 2) != 0
        && *(float*)((char*)input + 0x24) > 0.5f) {
        int kind = *(int*)(s + 0x320);
        if (kind == 1) {
            void* p = *(void**)(s + 0x428);
            if (p != 0 && *(void**)((char*)p + 8) != 0) goto done;
            followNextPlayer_58(self, false);
            if (*(int*)(s + 0x338) == -1) return;
            kind = *(int*)(s + 0x320);
        }
        if (kind == 6) {
            (*(Fn118)(*(void***)self)[0x118 / 8])(self, s + 0x3a8);
            kind = *(int*)(s + 0x320);
        }
    done:
        *(unsigned char*)(s + 0x328) = 0;
        (*(Fn310)(*(void***)self)[0x310 / 8])(self, 5 * (kind != 6) + 1, 0, 0);
        return;
    }
    *(unsigned char*)(s + 0x328) = 1;
    if (*(int*)(s + 0x320) != 6) {
        handlePlayerInputDefault_58(self, player, input, f, u);
        return;
    }
    if (gs != 0) handlePlayerInputCVMTrace_58(self, player, input, f, u);
}
