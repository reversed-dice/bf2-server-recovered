// FUNCTION: BF2 0x8250a0
extern int sprintf(char*, const char*, ...);
extern void SBServerGetIntValueA(long, const char*, int);

void SBServerGetPlayerIntValueA(long server, int player, const char *key, int def) {
    char buf[128];
    sprintf(buf, "%s_%d", key, player);
    SBServerGetIntValueA(server, buf, def);
}
