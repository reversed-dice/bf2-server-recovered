// FUNCTION: BF2 0x83c8d0
extern int sendto(int, const void*, long, int, const void*, unsigned int);
extern int current_time(...);

void SendPacket_global() {
    int sock = *(int*)0x010b3120;
    long len = *(int*)0x010b3174;
    sendto(sock, (void*)0x010b3134, len, 0, (void*)0x010b3124, 0x10);
    *(int*)0x010b3178 = current_time();
}
// REVERSED_FUNCTION: SendPacket (0x83c8d0)
