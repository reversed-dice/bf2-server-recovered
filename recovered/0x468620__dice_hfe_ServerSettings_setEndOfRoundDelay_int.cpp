// FUNCTION: BF2 0x468620
namespace dice { namespace hfe {

class ServerSettings {
public:
    unsigned char _pad[0x148];
    int m_endOfRoundDelay;
    void setEndOfRoundDelay(int delay);
};

void ServerSettings::setEndOfRoundDelay(int delay)
{
    if (delay < 15)
        delay = 15;
    else if (delay > 30)
        delay = 30;
    m_endOfRoundDelay = delay;
}

} }
