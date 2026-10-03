// FUNCTION: BF2 0x81ef20
// GetChallenge: get or create challenge
extern "C" {
    void create_challenge(int id, char* buf);
    extern long g_statsgame;
    extern int connid;
    extern char challenge_4627[256];
}

char* GetChallenge(long param_1) {
    if (param_1 == 0) {
        param_1 = g_statsgame;
        if (__builtin_expect(g_statsgame == 0, 0)) {
            create_challenge(connid ^ 0x38f371e6, challenge_4627);
            return challenge_4627;
        }
    }
    return (char*)(param_1 + 0x18);
}
