// FUNCTION: BF2 0x4af5f0
namespace dice { namespace hfe { namespace world {

class TeamScore {
public:
    void setTicketState(unsigned int);
};

void TeamScore::setTicketState(unsigned int value) {
    *(unsigned int*)((char*)this + 0x8c) = value;
}

} } }
