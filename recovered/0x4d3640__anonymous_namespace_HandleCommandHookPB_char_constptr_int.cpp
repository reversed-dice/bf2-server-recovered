// FUNCTION: BF2 0x4d3640
extern "C" int toupper(int);
extern "C" int PbServerTrapConsole(char const*, int);

int HandleCommandHookPB(char const* s, int len)
{
    if (len <= 2)
        return 0;
    if (toupper(s[0]) != 'P')
        return 0;
    if (toupper(s[1]) != 'B')
        return 0;
    if (s[2] != '_')
        return 0;
    if (len <= 5)
        return 1;
    if (toupper(s[3]) != 'S')
        return 1;
    if (toupper(s[4]) != 'V')
        return 1;
    if (s[5] != '_')
        return 1;
    PbServerTrapConsole(s, len);
    return 1;
}
