// FUNCTION: BF2 0x4cdfe0
#include <string>
namespace dice { namespace hfe {

class ClientVoteManager {
public:
    ClientVoteManager();
    bool m_canVote;
    bool m_voting;
    int m_type;
    int m_team;
    std::string m_subject;
    int m_votes;
    std::string m_initiator;
    float m_startTime;
    float m_endTime;
    int m_yes;
    float m_lastVote;
    float m_timeout;
    int m_no;
};

ClientVoteManager::ClientVoteManager()
{
    m_type = 0;
    m_team = 254;
    m_yes = 0;
    m_lastVote = 0.0f;
    m_timeout = 0.0f;
    m_votes = 0;
    m_startTime = 0.0f;
    m_endTime = 0.0f;
    m_no = 0;
    m_canVote = true;
    m_voting = false;
}

} }
