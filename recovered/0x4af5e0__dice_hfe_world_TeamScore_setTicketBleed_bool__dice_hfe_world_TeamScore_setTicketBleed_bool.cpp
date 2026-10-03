// FUNCTION: BF2 0x4af5e0
namespace dice { namespace hfe { namespace world {

class TeamScore {
public:
    void setTicketBleed(unsigned char);
};

void TeamScore::setTicketBleed(unsigned char value) {
    *(unsigned char*)((char*)this + 0x90) = value;
}

} } }
