// FUNCTION: BF2 0x434bb0
namespace dice { namespace hfe {
namespace world {

class IPlayer {
public:
    virtual void _v00(); virtual void _v08(); virtual void _v10(); virtual void _v18();
    virtual void _v20(); virtual void _v28(); virtual void _v30(); virtual void _v38();
    virtual void _v40(); virtual void _v48(); virtual void _v50(); virtual void _v58();
    virtual void _v60(); virtual void _v68(); virtual void _v70(); virtual void _v78();
    virtual void _v80(); virtual void _v88(); virtual void _v90(); virtual void _v98();
    virtual void _va0();
    virtual unsigned char getId(); // slot 0xa8
    virtual void _vb0(); virtual void _vb8(); virtual void _vc0(); virtual void _vc8();
    virtual void _vd0(); virtual void _vd8(); virtual void _ve0(); virtual void _ve8();
    virtual void _vf0(); virtual void _vf8(); virtual void _v100(); virtual void _v108();
    virtual void _v110(); virtual void _v118(); virtual void _v120(); virtual void _v128();
    virtual void _v130(); virtual void _v138(); virtual void _v140(); virtual void _v148();
    virtual void _v150(); virtual void _v158(); virtual void _v160(); virtual void _v168();
    virtual void _v170(); virtual void _v178(); virtual void _v180(); virtual void _v188();
    virtual void _v190(); virtual void _v198(); virtual void _v1a0(); virtual void _v1a8();
    virtual void _v1b0(); virtual void _v1b8(); virtual void _v1c0(); virtual void _v1c8();
    virtual unsigned char getTeam(); // slot 0x1d0
};

}

class GameEvent {
public:
    GameEvent();
    virtual ~GameEvent();
    char _pad8[0x8];
};

class VerifyPlayerTeamEvent : public GameEvent {
public:
    VerifyPlayerTeamEvent(world::IPlayer* p1, world::IPlayer* p2);
    virtual ~VerifyPlayerTeamEvent();

    unsigned char m_team;
    unsigned char m_oldTeam;
    unsigned char m_player;
    unsigned char m_target;
};

VerifyPlayerTeamEvent::VerifyPlayerTeamEvent(world::IPlayer* p1, world::IPlayer* p2)
{
    m_team = p2->getTeam();
    m_oldTeam = p1->getTeam();
    m_target = p1->getId();
    m_player = p2->getId();
}

} }
