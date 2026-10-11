// FUNCTION: BF2 0x849a90
typedef unsigned long size_t;
extern "C" size_t strlen(const char*);
extern "C" char* strcpy(char*, const char*);
extern "C" char* strcat(char*, const char*);
int PbSvAddEvent(int, int, int, char*);

void PbSvAddStatEvent(unsigned int a, const char* b, const char* c)
{
    char buf[2064];
    if (strlen(b) + strlen(c) > 2048)
        return;
    strcpy(buf, b);
    strcat(buf, " ");
    strcat(buf, c);
    PbSvAddEvent(15, a, strlen(buf), buf);
}
