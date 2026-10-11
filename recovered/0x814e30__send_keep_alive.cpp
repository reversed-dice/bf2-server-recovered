// FUNCTION: BF2 0x814e30
struct sockaddr_in {
    unsigned short sin_family;
    unsigned short sin_port;
    unsigned int sin_addr;
    char _pad[8];
};

extern unsigned int current_time(...);
extern int sock;
extern char* keepAlive;
extern unsigned int lastKeepAliveSent;
extern struct sockaddr_in valaddr;
extern void xcode_buf(char*, int);
extern unsigned long strlen(char const*);
extern char* strcpy(char*, char const*);
extern int sendto(int, char const*, unsigned long, int, struct sockaddr_in*, unsigned int);

void send_keep_alive(void)
{
    char buf[512];

    if (!lastKeepAliveSent)
        lastKeepAliveSent = current_time();
    if (current_time() <= lastKeepAliveSent + 20000)
        return;
    strcpy(buf, keepAlive);
    xcode_buf(buf, strlen(keepAlive));
    sendto(sock, buf, strlen(keepAlive), 0, &valaddr, 16);
    lastKeepAliveSent = current_time();
}
