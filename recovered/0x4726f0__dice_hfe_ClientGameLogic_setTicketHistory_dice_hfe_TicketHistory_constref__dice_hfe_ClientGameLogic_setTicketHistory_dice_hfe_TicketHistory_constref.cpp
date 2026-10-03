// FUNCTION: BF2 0x4726f0
namespace dice { namespace hfe {

struct TicketHistory {
    unsigned char _data[8];
    TicketHistory& operator=(const TicketHistory&);
};

class ClientGameLogic {
    unsigned char _pad[0x4a8];
    TicketHistory m_ticketHistory;
public:
    void setTicketHistory(const TicketHistory& th);
};

void ClientGameLogic::setTicketHistory(const TicketHistory& th) {
    m_ticketHistory = th;
}

} } // namespace
// REVERSED_FUNCTION: dice_hfe_ClientGameLogic_setTicketHistory_dice_hfe_TicketHistory_constref (0x4726f0)