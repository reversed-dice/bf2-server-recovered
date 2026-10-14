// FUNCTION: BF2 0x841950
#include <string>

namespace BF2VoipServer {

class CBF2VoipServerInstance {
public:
    std::string MapChannelToName(int channel);
};

}

std::string BF2VoipServer::CBF2VoipServerInstance::MapChannelToName(int channel)
{
    switch (channel) {
    case 0:
        return "CHANNEL_TEAM_1_COMMANDER";
    case 1:
        return "CHANNEL_TEAM_1_SQUAD_A_LEADER 1";
    case 2:
        return "CHANNEL_TEAM_1_SQUAD_B_LEADER 2";
    case 3:
        return "CHANNEL_TEAM_1_SQUAD_C_LEADER 3";
    case 4:
        return "CHANNEL_TEAM_1_SQUAD_D_LEADER 4";
    case 5:
        return "CHANNEL_TEAM_1_SQUAD_E_LEADER 5";
    case 6:
        return "CHANNEL_TEAM_1_SQUAD_F_LEADER 6";
    case 7:
        return "CHANNEL_TEAM_1_SQUAD_G_LEADER 7";
    case 8:
        return "CHANNEL_TEAM_1_SQUAD_H_LEADER 8";
    case 9:
        return "CHANNEL_TEAM_1_SQUAD_I_LEADER 9";
    case 10:
        return "CHANNEL_TEAM_1_SQUAD_A_MEMBER 1";
    case 11:
        return "CHANNEL_TEAM_1_SQUAD_B_MEMBER 2";
    case 12:
        return "CHANNEL_TEAM_1_SQUAD_C_MEMBER 3";
    case 13:
        return "CHANNEL_TEAM_1_SQUAD_D_MEMBER 4";
    case 14:
        return "CHANNEL_TEAM_1_SQUAD_E_MEMBER 5";
    case 15:
        return "CHANNEL_TEAM_1_SQUAD_F_MEMBER 6";
    case 16:
        return "CHANNEL_TEAM_1_SQUAD_G_MEMBER 7";
    case 17:
        return "CHANNEL_TEAM_1_SQUAD_H_MEMBER 8";
    case 18:
        return "CHANNEL_TEAM_1_SQUAD_I_MEMBER 9";
    case 19:
        return "CHANNEL_TEAM_2_COMMANDER";
    case 20:
        return "CHANNEL_TEAM_2_SQUAD_A_LEADER 1";
    case 21:
        return "CHANNEL_TEAM_2_SQUAD_B_LEADER 2";
    case 22:
        return "CHANNEL_TEAM_2_SQUAD_C_LEADER 3";
    case 23:
        return "CHANNEL_TEAM_2_SQUAD_D_LEADER 4";
    case 24:
        return "CHANNEL_TEAM_2_SQUAD_E_LEADER 5";
    case 25:
        return "CHANNEL_TEAM_2_SQUAD_F_LEADER 6";
    case 26:
        return "CHANNEL_TEAM_2_SQUAD_G_LEADER 7";
    case 27:
        return "CHANNEL_TEAM_2_SQUAD_H_LEADER 8";
    case 28:
        return "CHANNEL_TEAM_2_SQUAD_I_LEADER 9";
    case 29:
        return "CHANNEL_TEAM_2_SQUAD_A_MEMBER 1";
    case 30:
        return "CHANNEL_TEAM_2_SQUAD_B_MEMBER 2";
    case 31:
        return "CHANNEL_TEAM_2_SQUAD_C_MEMBER 3";
    case 32:
        return "CHANNEL_TEAM_2_SQUAD_D_MEMBER 3";
    case 33:
        return "CHANNEL_TEAM_2_SQUAD_E_MEMBER 5";
    case 34:
        return "CHANNEL_TEAM_2_SQUAD_F_MEMBER 6";
    case 35:
        return "CHANNEL_TEAM_2_SQUAD_G_MEMBER 7";
    case 36:
        return "CHANNEL_TEAM_2_SQUAD_H_MEMBER 8";
    case 37:
        return "CHANNEL_TEAM_2_SQUAD_I_MEMBER 9";
    }
    return "INVALID CHANNEL";
}
