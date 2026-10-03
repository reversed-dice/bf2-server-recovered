// FUNCTION: BF2 0x4af5e0
namespace dice { namespace hfe {
class TeamScore {
public:
    char _pad[0x90];
    bool field;
    void setTicketBleed(bool v);
};
void TeamScore::setTicketBleed(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_TeamScore_setTicketBleed (0x4af5e0)
