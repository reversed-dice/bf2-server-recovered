// FUNCTION: BF2 0x83c910
typedef int SOCKET;

struct in_addr_t
{
    unsigned int s_addr;
};

struct SOCKADDR_IN
{
    unsigned short sin_family;
    unsigned short sin_port;
    struct in_addr_t sin_addr;
    char sin_zero[8];
};

struct HOSTENT
{
    char* h_name;
    char** h_aliases;
    short h_addrtype;
    short h_length;
    char** h_addr_list;
};

extern "C" char __GSIACGamename[64];
extern "C" char GSIACHostname[64];
extern "C" void SocketStartUp(...);
extern "C" int socket(int domain, int type, int protocol);
extern "C" unsigned int inet_addr(const char* cp);
extern "C" struct HOSTENT* gethostbyname(const char* name);
extern "C" char* strcpy(char* dest, const char* src);
extern "C" int sprintf(char* str, const char* format, ...);
extern "C" unsigned long strlen(const char* s);
extern "C" void* memcpy(void* dest, const void* src, unsigned long n);
extern "C" void SendPacket(void);

struct ACState
{
    SOCKET sock;
    SOCKADDR_IN address;
    char packet[64];
    int packetLen;
    unsigned int sendTime;
    int retryCount;
};

static ACState AC;

static int get_sockaddrin(const char* hostname, int port, SOCKADDR_IN* saddr)
{
    saddr->sin_family = 2;
    saddr->sin_port = (unsigned short)(((unsigned int)port << 8) | ((unsigned int)port >> 8));
    saddr->sin_addr.s_addr = inet_addr(hostname);

    if (saddr->sin_addr.s_addr == 0xffffffffu)
    {
        HOSTENT* host = gethostbyname(hostname);
        if (!host)
            return 0;
        saddr->sin_addr.s_addr = *(unsigned int*)host->h_addr_list[0];
    }

    return 1;
}

extern "C" void GSIStartAvailableCheckA(const char* gamename)
{
    char hostname[64];
    int override;
    int rcode;
    int len;

    strcpy(__GSIACGamename, gamename);

    AC.sock = -1;

    SocketStartUp();

    override = GSIACHostname[0];
    if (!override)
        sprintf(hostname, "%s.available.gamespy.com", gamename);

    rcode = get_sockaddrin(override ? GSIACHostname : hostname, 27900, &AC.address);
    if (!rcode)
        return;

    AC.sock = socket(2, 2, 0x11);
    if (AC.sock == -1)
        return;

    AC.packet[0] = 0x09;
    len = (int)strlen(gamename);
    memcpy(AC.packet + 5, gamename, (unsigned long)len + 1);
    AC.packetLen = (len + 6);

    SendPacket();

    AC.retryCount = 0;
}
