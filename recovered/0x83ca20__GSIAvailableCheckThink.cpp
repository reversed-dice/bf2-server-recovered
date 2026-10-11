// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0x83ca20
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

extern "C" int __GSIACResult;
extern "C" int CanReceiveOnSocket(int sock);
extern "C" unsigned int current_time(...);
extern "C" int recvfrom(int sock, char* buf, int len, int flags, SOCKADDR_IN* from, int* fromlen);
extern "C" int close(int fd);
extern "C" int memcmp(const void* s1, const void* s2, unsigned long n);
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

#define PACKET_TYPE 0x09
#define TIMEOUT_TIME 2000
#define MAX_RETRIES 1

static int HandlePacket(char* packet, int len, SOCKADDR_IN* address, int* disabledservices)
{
    int bitfield;

    if (len < 7)
        return 1;

    if (memcmp(&address->sin_addr, &AC.address.sin_addr, sizeof(unsigned int)) != 0)
        return 1;

    if (address->sin_port != AC.address.sin_port)
        return 1;

    if (memcmp(packet, "\xFE\xFD\x09", 3) != 0)
        return 1;

    bitfield = (int)((packet[3] << 24) & 0xFF000000);
    bitfield |= ((packet[4] << 16) & 0x00FF0000);
    bitfield |= ((packet[5] << 8) & 0x0000FF00);
    bitfield |= (packet[6] & 0x000000FF);

    *disabledservices = bitfield;

    return 0;
}

extern "C" int GSIAvailableCheckThink(void)
{
    char packet[64];
    SOCKADDR_IN address;
    int len = sizeof(address);
    int rcode;
    int disabledservices;

    if (AC.sock == -1)
    {
        __GSIACResult = 1;
        return __GSIACResult;
    }

    if (CanReceiveOnSocket(AC.sock))
    {
        rcode = (int)recvfrom(AC.sock, packet, (int)sizeof(packet), 0, (SOCKADDR_IN*)&address, &len);

        rcode = HandlePacket(packet, rcode, &address, &disabledservices);
        if (rcode == 0)
        {
            close(AC.sock);

            if (disabledservices & 1)
                __GSIACResult = 2;
            else if (disabledservices & 2)
                __GSIACResult = 3;
            else
                __GSIACResult = 1;

            return __GSIACResult;
        }
    }

    if (current_time() > (AC.sendTime + TIMEOUT_TIME))
    {
        if (AC.retryCount == MAX_RETRIES)
        {
            close(AC.sock);
            __GSIACResult = 1;
            return __GSIACResult;
        }

        SendPacket();
        AC.retryCount++;
    }

    return 0;
}
