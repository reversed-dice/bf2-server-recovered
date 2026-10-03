// FUNCTION: BF2 0x41ba90
namespace dice { namespace hfe {
class ServerInfo {
public:
    char _pad[0x28];
    bool field;
    int getRequestResponse() const;
};
int ServerInfo::getRequestResponse() const { return (int)field; }
} }
// REVERSED_FUNCTION: dice_hfe_ServerInfo_getRequestResponse (0x41ba90)
