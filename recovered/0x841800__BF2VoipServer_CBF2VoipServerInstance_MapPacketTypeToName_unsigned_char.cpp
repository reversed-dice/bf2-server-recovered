// FUNCTION: BF2 0x841800
#include <string>

namespace BF2VoipServer {

class CBF2VoipServerInstance {
public:
    std::string MapPacketTypeToName(unsigned char packetType);
};

}

std::string BF2VoipServer::CBF2VoipServerInstance::MapPacketTypeToName(unsigned char packetType)
{
    switch (packetType) {
    case 0x64:
        return "BF2_VOIP_PACKET_SET_PLAYER_DATA";
    case 0x65:
        return "BF2_VOIP_PACKET_REMOVE_PLAYER_DATA";
    case 0x66:
        return "BF2_VOIP_PACKET_RESET_PLAYER_ROUTING";
    case 0x67:
        return "BF2_VOIP_PACKET_FULL_ROUTING_DATA_SET";
    case 0xc8:
        return "BF2_VOIP_PACKET_DEBUG_DATA";
    case 6:
        return "VOIP_PACKET_SERVER_INCOMING_KEEP_ALIVE";
    case 1:
        return "VOIP_PACKET_SERVER_INCOMING_VOICE_FRAME_DEFAULT_CHANNEL_SET";
    case 2:
        return "VOIP_PACKET_SERVER_INCOMING_VOICE_FRAME_ALTERNATE_CHANNEL_SET";
    case 3:
        return "VOIP_PACKET_SERVER_INCOMING_VOICE_FRAME_MULTI_CHANNEL_SET";
    }
    return "INVALID PACKET ID";
}
