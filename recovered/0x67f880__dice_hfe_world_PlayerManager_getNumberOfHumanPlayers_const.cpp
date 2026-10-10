// FUNCTION: BF2 0x67f880
#include <list>

namespace dice { namespace hfe { namespace world {

class IPlayer {
public:
    virtual void v_0();
    virtual void v_1();
    virtual void v_2();
    virtual void v_3();
    virtual void v_4();
    virtual void v_5();
    virtual void v_6();
    virtual void v_7();
    virtual void v_8();
    virtual void v_9();
    virtual void v_10();
    virtual void v_11();
    virtual void v_12();
    virtual void v_13();
    virtual void v_14();
    virtual void v_15();
    virtual void v_16();
    virtual void v_17();
    virtual void v_18();
    virtual void v_19();
    virtual void v_20();
    virtual void v_21();
    virtual void v_22();
    virtual void v_23();
    virtual void v_24();
    virtual bool isAIPlayer() const;
};

class PlayerManager {
public:
    virtual ~PlayerManager();
    virtual void v_0();
    virtual void v_1();
    virtual void v_2();
    virtual void v_3();
    virtual void v_4();
    virtual void v_5();
    virtual void v_6();
    virtual void v_7();
    virtual void v_8();
    virtual void v_9();
    virtual void v_10();
    virtual void v_11();
    virtual void v_12();
    virtual void v_13();
    virtual void v_14();
    virtual void v_15();
    virtual void v_16();
    virtual void v_17();
    virtual void v_18();
    virtual void v_19();
    virtual void v_20();
    virtual void v_21();
    virtual void v_22();
    virtual void v_23();
    virtual void v_24();
    virtual void v_25();
    virtual void v_26();
    virtual void v_27();
    virtual void v_28();
    virtual void v_29();
    virtual void v_30();
    virtual void v_31();
    virtual void v_32();
    virtual void v_33();
    virtual int getNumberOfHumanPlayers() const;

    char _pad[0x10];
    std::list<IPlayer*> m_players;
};

int PlayerManager::getNumberOfHumanPlayers() const {
    struct Node { Node* next; Node* prev; IPlayer* p; };
    const Node* end = (const Node*)((const char*)this + 0x18);
    const Node* cur = end->next;
    int count = 0;
    while (cur != end) {
        if (!cur->p->isAIPlayer()) count++;
        cur = cur->next;
    }
    return count;
}

} } }
