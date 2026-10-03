// FUNCTION: BF2 0x46ceb0
namespace dice { namespace hfe { namespace gamespy {

static char s_secretKey[7];

char* getSecretKey() {
    if (!s_secretKey[0]) {
        s_secretKey[0] = 'h';
        s_secretKey[1] = 'W';
        s_secretKey[2] = '6';
        s_secretKey[3] = 'm';
        s_secretKey[4] = '9';
        s_secretKey[5] = 'a';
        s_secretKey[6] = 0;
    }
    return s_secretKey;
}

} } }
// REVERSED_FUNCTION: dice_hfe_gamespy_getSecretKey (0x46ceb0)