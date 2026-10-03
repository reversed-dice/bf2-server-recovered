// FUNCTION: BF2 0x453da0
namespace dice { namespace hfe {

class GameServer {
public:
    long* m_unk_0x50;
    unsigned int m_unk_0x6C;
    long* m_unk_0xB0;
    void* m_unk_0x100;
    void* m_unk_0x110;
    void* m_unk_0x178;
    void* m_unk_0x1D0;
    unsigned int m_unk_0x1F0;
    unsigned int m_unk_0x1F4;
    long* m_unk_0x308;
    void* m_unk_0x310;
    int m_unk_0x318;
    char m_unk_0x330;
    char m_unk_0x331;

    long* getClient(int) const;
    int isClientReady(int);
};

int GameServer::isClientReady(int clientIdx) {
    long* client = this->getClient(clientIdx);
    int result = 0;
    if (client != 0) {
        result = 0;
        result = *reinterpret_cast<int*>(reinterpret_cast<char*>(client) + 0x18) > 3;
    }
    return result;
}

} }
// REVERSED_FUNCTION: dice_hfe_GameServer_isClientReady_int (0x453da0)