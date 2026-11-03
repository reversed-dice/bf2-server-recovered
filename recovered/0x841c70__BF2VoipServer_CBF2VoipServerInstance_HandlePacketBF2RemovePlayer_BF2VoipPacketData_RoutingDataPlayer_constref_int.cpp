// FUNCTION: BF2 0x841c70
namespace BF2VoipServer {

struct RemovePlayerData { unsigned short v; };
struct RoutingDataPlayer { char pad[2]; unsigned short v; };
struct Slot { unsigned char flag; unsigned char pad; unsigned short value; };

class CBF2VoipServerInstance {
public:
    void HandlePacketBF2RemovePlayer(RoutingDataPlayer const& data, int index);
    void HandlePacketBF2RemovePlayer(RemovePlayerData const& data);
    char pad[0xaac];
    Slot m_slots[65];   // +0xaac
};

void CBF2VoipServerInstance::HandlePacketBF2RemovePlayer(RoutingDataPlayer const& data, int index)
{
    RemovePlayerData rp;
    rp.v = data.v;
    Slot* slots = m_slots;
    int i = index;
    if ((unsigned int)index < 0x40) {
        slots[i].flag = 0;
        *(unsigned short*)((char*)slots + (long)i * 4 + 2) = 0;
    } else {
        unsigned char* over = (unsigned char*)slots + 0x100;
        *(unsigned char*)over = 0;
        *(unsigned short*)(over + 2) = 0;
    }
    HandlePacketBF2RemovePlayer(rp);
}

}
