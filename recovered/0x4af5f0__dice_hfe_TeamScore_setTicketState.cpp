// FUNCTION: BF2 0x4af5f0
namespace dice { namespace hfe {
class TeamScore {
public:
    char _pad[0x8c];
    int field;
    void setTicketState(int v);
};
void TeamScore::setTicketState(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_TeamScore_setTicketState (0x4af5f0)
