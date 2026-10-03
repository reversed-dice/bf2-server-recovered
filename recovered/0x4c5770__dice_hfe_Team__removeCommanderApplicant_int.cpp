// FUNCTION: BF2 0x4c5770
namespace dice { namespace hfe {

class Team;

class CommanderManager {
public:
    bool removeCommanderApplicant(unsigned int applicant);
    int getCommander() const;
    int getProposedCommander() const;
    void declineCommander(unsigned int applicant, Team* team);
};

class Team {
public:
    void* m_unk_0x18;
    void* m_unk_0x20;
    void* m_unk_0x28;
    void* m_unk_0x30;
    void* m_unk_0x38;
    void* m_unk_0x40;
    unsigned int m_unk_0x90;

    void removeCommanderApplicant(unsigned int param_2);
};

void Team::removeCommanderApplicant(unsigned int param_2) {
    CommanderManager* mgr = reinterpret_cast<CommanderManager*>(reinterpret_cast<char*>(this) + 0x48);
    if (mgr->removeCommanderApplicant(param_2)) {
        return;
    }
    if (mgr->getCommander() != -1) {
        return;
    }
    if (static_cast<int>(param_2) != mgr->getProposedCommander()) {
        return;
    }
    mgr->declineCommander(param_2, this);
}

} }
// REVERSED_FUNCTION: dice::hfe::Team::removeCommanderApplicant_int (0x4c5770)