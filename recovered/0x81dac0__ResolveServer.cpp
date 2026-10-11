// FUNCTION: BF2 0x81dac0
struct HostEnt { char* h_name; char** h_aliases; int h_addrtype; int h_length; char** h_addr_list; };
extern "C" unsigned int inet_addr(const char* cp);
extern "C" HostEnt* gethostbyname(const char* name);
extern "C" int snprintf(char* s, unsigned long n, const char* format, ...);
extern "C" char __GSIACGamename[];

unsigned int ResolveServer(const char* name, const char* extra)
{
    char buf[64];
    if (name == 0) {
        snprintf(buf, 0x40, "%s.%s", __GSIACGamename, extra);
        name = buf;
    }
    unsigned int addr = inet_addr(name);
    if (addr != 0xffffffffu)
        return addr;
    HostEnt* hent = gethostbyname(name);
    if (hent == 0)
        return 0;
    return *(unsigned int*)hent->h_addr_list[0];
}
