// FUNCTION: BF2 0x80e4c0
extern "C" {
unsigned long strlen(const char*);
char* strchr(const char*, int);
}

static const char kNickChars[] =
    "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789\"#$%&'()*+,-./:;<=>?@[]^_`{|}~";

int ciNickIsValid(const char* nick) {
    if (strlen(nick) > 0x14)
        return 6;
    if (nick == 0)
        return 2;
    char c = nick[0];
    if (c == 0)
        return 2;
    if (c == '@' || c == '#')
        return 2;
    if (c == '+')
        return 2;
    if (c == ':')
        return 2;
    do {
        if (strchr(kNickChars, c) == 0)
            return 2;
        c = *++nick;
    } while (c != 0);
    return 0;
}
