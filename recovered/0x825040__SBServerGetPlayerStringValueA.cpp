// FUNCTION: BF2 0x825040
extern int sprintf(char*, const char*, ...);
extern void SBServerGetStringValueA(long, const char*, long);

void SBServerGetPlayerStringValueA(long server, int player, const char *key, long dest) {
    char buf[128];
    sprintf(buf, "%s_%d", key, player);
    SBServerGetStringValueA(server, buf, dest);
}
