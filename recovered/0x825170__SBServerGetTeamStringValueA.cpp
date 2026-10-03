// FUNCTION: BF2 0x825170
extern int sprintf(char*, const char*, ...);
extern void SBServerGetStringValueA(long, const char*, long);

void SBServerGetTeamStringValueA(long server, int team, const char *key, long dest) {
    char buf[128];
    sprintf(buf, "%s_t%d", key, team);
    SBServerGetStringValueA(server, buf, dest);
}
