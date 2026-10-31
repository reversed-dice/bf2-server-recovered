// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0x4ab2e0
namespace dice { namespace hfe {

enum EventCategory { };

class EventNode {
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
    virtual void v10(int p);
};

namespace world {

class IObject;

class IPlayerManager {
public:
    virtual void q0();
    virtual void q1();
    virtual void q2();
    virtual void q3();
    virtual void q4();
    virtual void q5();
    virtual void q6();
    virtual void q7();
    virtual void* getPlayer(unsigned int id);
};

extern IPlayerManager* playerManager;

class IPlayer {
public:
    virtual void q0();
    virtual void q1();
    virtual void q2();
    virtual void q3();
    virtual void q4();
    virtual void q5();
    virtual void q6();
    virtual void q7();
    virtual void q8();
    virtual void q9();
    virtual void q10();
    virtual void q11();
    virtual void q12();
    virtual void q13();
    virtual void q14();
    virtual void q15();
    virtual void q16();
    virtual void q17();
    virtual void q18();
    virtual void q19();
    virtual void q20();
    virtual int getSlotId2();
    virtual void q22();
    virtual void q23();
    virtual void q24();
    virtual void q25();
    virtual void q26();
    virtual void q27();
    virtual void q28();
    virtual void q29();
    virtual void q30();
    virtual void q31();
    virtual void q32();
    virtual void q33();
    virtual void q34();
    virtual void q35();
    virtual void q36();
    virtual void q37();
    virtual void q38();
    virtual void q39();
    virtual void q40();
    virtual void q41();
    virtual void q42();
    virtual void q43();
    virtual void q44();
    virtual void q45();
    virtual void q46();
    virtual void q47();
    virtual void q48();
    virtual void q49();
    virtual void q50();
    virtual void q51();
    virtual void q52();
    virtual void q53();
    virtual void q54();
    virtual void q55();
    virtual void q56();
    virtual void q57();
    virtual void q58();
    virtual void q59();
    virtual void q60();
    virtual void q61();
    virtual void q62();
    virtual void q63();
    virtual void q64();
    virtual void q65();
    virtual void q66();
    virtual int getSquadId();
    virtual void q68();
    virtual bool getIsCommander();
    virtual void q70();
    virtual void q71();
    virtual void q72();
    virtual void q73();
    virtual void q74();
    virtual void q75();
    virtual void q76();
    virtual void q77();
    virtual void q78();
    virtual void q79();
    virtual void q80();
    virtual void q81();
    virtual void q82();
    virtual void q83();
    virtual void q84();
    virtual void q85();
    virtual void q86();
    virtual void q87();
    virtual void q88();
    virtual void q89();
    virtual void q90();
    virtual void q91();
    virtual void q92();
    virtual void q93();
    virtual void q94();
    virtual void q95();
    virtual void q96();
    virtual void q97();
    virtual void q98();
    virtual void q99();
    virtual void q100();
    virtual void q101();
    virtual void q102();
    virtual void q103();
    virtual void q104();
    virtual void q105();
    virtual void q106();
    virtual void q107();
    virtual void q108();
    virtual void q109();
    virtual void q110();
    virtual void q111();
    virtual void q112();
    virtual void q113();
    virtual void q114();
    virtual void q115();
    virtual void q116();
    virtual void q117();
    virtual void q118();
    virtual void q119();
    virtual void q120();
    virtual void q121();
    virtual void q122();
    virtual void q123();
    virtual void q124();
    virtual void v125(int x);
};

}

class ISquadManager {
public:
    virtual void q0();
    virtual void q1();
    virtual void q2();
    virtual void q3();
    virtual void q4();
    virtual void q5();
    virtual void q6();
    virtual void q7();
    virtual void q8();
    virtual void q9();
    virtual void q10();
    virtual void q11();
    virtual void q12();
    virtual void v13(int team, int squadId, int playerId, void* z);
    virtual void q14();
    virtual void q15();
    virtual void q16();
    virtual void q17();
    virtual void q18();
    virtual void q19();
    virtual void q20();
    virtual void q21();
    virtual void q22();
    virtual void q23();
    virtual void q24();
    virtual void v25(unsigned int id, int v);
    virtual void v26(int team);
    virtual void q27();
    virtual void q28();
    virtual void q29();
    virtual void q30();
    virtual void q31();
    virtual void q32();
    virtual void v33(int a, int b);
};

extern ISquadManager* squadManager;

class GameLogic {
public:
    virtual void handleEvent(EventCategory cat, unsigned int type, EventNode* node, void* data);
};

class ServerGameLogic : public GameLogic {
public:
    virtual void handleEvent(EventCategory cat, unsigned int type, EventNode* node, void* data);
    void _destroyObject(world::IObject* o);
    void _destroyPlayer(world::IPlayer* p);
    void _createPlayer(world::IPlayer* p);
    void spawnPlayer(world::IPlayer* p, void* spawn);
};

void ServerGameLogic::handleEvent(EventCategory cat, unsigned int type, EventNode* node, void* data)
{
    switch (cat) {
    case 0: {
        switch (type) {
        case 8: {
            world::IPlayer* player = (world::IPlayer*)world::playerManager->getPlayer(*(unsigned int*)data);
            if (player == 0)
                return;
            if (player->getSquadId() != 0) {
                squadManager->v13((*(int*)((char*)data + 4) == 1) + 1, player->getSquadId(), player->getSlotId2(), 0);
            }
            if (player->getIsCommander()) {
                squadManager->v26((*(int*)((char*)data + 4) == 1) + 1);
            }
            player->v125(0);
            squadManager->v33(1, player->getSlotId2());
            squadManager->v33(2, player->getSlotId2());
            return;
        }
        case 15:
            ((EventNode*)data)->v10(-1);
            ((EventNode*)data)->v2();
            return;
        case 7:
            squadManager->v25(*(unsigned int*)data, -1);
            delete[] (EventNode*)data;
            return;
        }
        dice::hfe::GameLogic::handleEvent(cat, type, node, data);
        return;
    }
    case 1: {
        switch (type) {
        case 1:
            _destroyObject((world::IObject*)data);
            return;
        case 2:
            _destroyPlayer((world::IPlayer*)data);
            return;
        case 3:
        case 6:
            return;
        case 4:
            _createPlayer((world::IPlayer*)data);
            return;
        case 5:
            spawnPlayer((world::IPlayer*)data, 0);
            return;
        }
        dice::hfe::GameLogic::handleEvent(cat, type, node, data);
        return;
    }
    }
    dice::hfe::GameLogic::handleEvent(cat, type, node, data);
}

} }
