// FUNCTION: BF2 0x4d0c70
// COMPILER: GCC 3.4
namespace dice {
namespace hfe {

class Vote {
public:
    bool m_active;
    char _pad[0x7b];
    int m_requiredVotes;

    int** getVoteCount();
    bool voteInProgress();

    bool voteComplete();
};

bool Vote::voteComplete() {
    int* p = *getVoteCount();
    if (p[1] + p[0] >= m_requiredVotes) return true;
    if (m_active) {
        if (voteInProgress()) goto done;
        return true;
    }
done:
    return false;
}

}
}
