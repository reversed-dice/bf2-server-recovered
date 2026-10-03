// FUNCTION: BF2 0x453d20
namespace dice { namespace hfe {
class GameServer {
public:
    char _pad[0xb0];
    void* udpSocket;
    void sendUDPPacket(const char* data, unsigned short len, void* addr, int param);
};
extern void func_7d09f0(void*, const char*, int, void*, int);
void GameServer::sendUDPPacket(const char* data, unsigned short len, void* addr, int param) {
    void* sock = udpSocket;
    if (sock != 0) {
        func_7d09f0(sock, data, len & 0xFFFF, addr, param);
    }
}
}
}

// REVERSED_FUNCTION: dice_hfe_GameServer_sendUDPPacket_char_constptr_unsigned_short_voidptr_int (0x453d20)
