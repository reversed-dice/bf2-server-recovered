// FUNCTION: BF2 0x8251d0
extern int sprintf(char*, const char*, ...);
extern void SBServerGetIntValueA(long, const char*, int);

void SBServerGetTeamIntValueA(long server, int team, const char *key, int def) {
    char buf[128];
    sprintf(buf, "%s_t%d", key, team);
    SBServerGetIntValueA(server, buf, def);
}
