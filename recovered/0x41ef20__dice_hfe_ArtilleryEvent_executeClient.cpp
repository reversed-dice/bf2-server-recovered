// FUNCTION: BF2 0x41ef20
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <iostream>

namespace dice {
namespace hfe {

enum DebugType {
    DebugType_Error = 6
};

class Debug {
    char _pad[0x20];
    char _stream[0x160];
public:
    Debug(DebugType type, std::string const& file, int line, std::string const& func = "");
    ~Debug();
    template <typename T>
    std::ostream& operator<<(T const& val) {
        return *(std::ostream*)(_stream) << val;
    }
};

class SquadManager {
public:
    virtual void v0();
    virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
    virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12();
    virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16();
    virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20();
    virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27();
    virtual int getLeader(unsigned char squadId); // slot 0xe0 / 8 = 28
};

extern SquadManager* squadManager;

namespace world {

class IPlayer;

class PlayerManager {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual IPlayer* getPlayer(int id); // slot 8 (+0x40)
};

extern PlayerManager* playerManager;

class SubObject {
public:
virtual void v0();
virtual void v1();
virtual void v2();
virtual void v3();
virtual void v4();
virtual void v5();
virtual void v6();
virtual void v7();
virtual void v8();
virtual void v9();
virtual void v10();
virtual void v11();
virtual void v12();
virtual void v13();
virtual void v14();
virtual void v15();
virtual void v16();
virtual void v17();
virtual void v18();
virtual void v19();
virtual void v20();
virtual void v21();
virtual void v22();
virtual void v23();
virtual void v24();
virtual void v25();
virtual void v26();
virtual void v27();
virtual void v28();
virtual void v29();
virtual void v30();
virtual void v31();
virtual void v32();
virtual void v33();
virtual void v34();
virtual void v35();
virtual void v36();
virtual void v37();
virtual void v38();
virtual void v39();
virtual void v40();
virtual void v41();
virtual void v42();
virtual void v43();
virtual void v44();
virtual void v45();
virtual void v46();
virtual void v47();
virtual void v48();
virtual void v49();
virtual void v50();
virtual void v51();
virtual void v52();
virtual void v53();
virtual void v54();
virtual void v55();
virtual void v56();
virtual void v57();
virtual void v58();
virtual void v59();
virtual void v60();
virtual void v61();
virtual void v62();
virtual void v63();
virtual void v64();
virtual void slot208(int a, int b, int c);
virtual void v66();
virtual void v67();
virtual void v68();
virtual void v69();
virtual void v70();
virtual void v71();
virtual void v72();
virtual void v73();
virtual void v74();
virtual void v75();
virtual void v76();
virtual void v77();
virtual void v78();
virtual void v79();
virtual void v80();
virtual void v81();
virtual void v82();
virtual void v83();
virtual void v84();
virtual void v85();
virtual void v86();
virtual void v87();
virtual void v88();
virtual void v89();
virtual void v90();
virtual void v91();
virtual void v92();
virtual void v93();
virtual void v94();
virtual void v95();
virtual void v96();
virtual void v97();
virtual void v98();
virtual void v99();
virtual void v100();
virtual void v101();
virtual void v102();
virtual void v103();
virtual void v104();
virtual void v105();
virtual void v106();
virtual void v107();
virtual void v108();
virtual void v109();
virtual void v110();
virtual void v111();
virtual void v112();
virtual void setPlayer(IPlayer* p);
virtual void v114();
virtual void v115();
virtual void v116();
virtual void v117();
virtual void v118();
virtual void v119();
virtual void v120();
virtual void v121();
virtual void v122();
virtual void v123();
virtual void v124();
virtual void v125();
virtual void v126();
virtual void v127();
virtual void v128();
virtual void v129();
virtual void v130();
virtual void v131();
virtual void v132();
virtual void v133();
virtual void v134();
virtual void v135();
virtual void v136();
virtual void v137();
virtual void v138();
virtual void v139();
virtual void v140();
virtual void v141();
virtual void v142();
virtual void v143();
virtual void v144();
virtual void v145();
virtual void v146();
virtual void v147();
virtual void v148();
virtual void v149();
virtual void v150();
virtual void v151();
virtual void v152();
virtual void v153();
virtual void v154();
virtual void v155();
virtual void v156();
virtual void v157();
virtual void v158();
virtual void v159();
virtual void v160();
virtual void v161();
virtual void v162();
virtual void v163();
virtual void slot520();

char _padData[0x314]; // 8 + 0x314 = 0x31c
    int m_val31c; // +0x31c
    char _padData2[0x60]; // 0x31c + 4 + 0x60 = 0x380
    bool m_val380; // +0x380
};

class IPlayerControlObject {
public:
    virtual void v0();
    virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
    virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12();
    virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16();
    virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20();
    virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28();
    virtual SubObject*** getSubObjects(int index); // slot 0xe8 / 8 = 29
};

class IObject {
public:
    virtual void v0();
    virtual void v1(); virtual void v2();
    virtual void* queryInterface(unsigned int id); // slot 3 (+0x18)
};

extern const unsigned int IID_IPlayerControlObject;

} // namespace world

namespace io {

class NetworkManager {
public:
    world::IObject* getObject(unsigned short id);
};

extern NetworkManager* networkManager;

} // namespace io

class GameEvent {
public:
    virtual ~GameEvent();
    virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
    virtual bool executeClient();
    virtual bool executeServer(int playerId);

    char _pad[0x8];
};

class ArtilleryEvent : public GameEvent {
public:
    float m_targetX; // +0x10
    float m_targetY; // +0x14
    unsigned char m_teamId; // +0x18
    char _pad19[3];
    int m_val1c; // +0x1c
    int m_action; // +0x20
    unsigned short m_objectId; // +0x24

    virtual bool executeClient();
};

bool ArtilleryEvent::executeClient()
{
    if (m_action == 2) {
        world::IObject* obj = io::networkManager->getObject(m_objectId);
        if (obj) {
            world::IPlayerControlObject* pco = (world::IPlayerControlObject*)obj->queryInterface(world::IID_IPlayerControlObject);
            if (pco) {
                world::SubObject*** subs = pco->getSubObjects(0);
                world::SubObject* sub = **subs;
                if (sub) {
                    world::IPlayer* player = 0;
                    if (squadManager) {
                        int leaderId = squadManager->getLeader(m_teamId);
                        player = world::playerManager->getPlayer(leaderId);
                    }
                    sub->m_val31c = m_val1c;
                    sub->slot520();
                    sub->setPlayer(player);
                    sub->m_val380 = true;
                    sub->slot208(7, 0, 0);
                    return true;
                }
            }
        }
        return true;
    }

    Debug(DebugType(6), "Game/GameEvents/ArtilleryEvent.cpp", 128, "") << "Should never be sent to client";
    return false;
}

} // namespace hfe
} // namespace dice
