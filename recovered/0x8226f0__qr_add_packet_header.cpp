// FUNCTION: BF2 0x8226f0
void qr_add_packet_header(void* pkt, char type, void* data) {
    *(char*)pkt = type;
    int val = *(int*)data;
    *(int*)((char*)pkt + 1) = val;
    *(int*)((char*)pkt + 0x578) = 5;
}
