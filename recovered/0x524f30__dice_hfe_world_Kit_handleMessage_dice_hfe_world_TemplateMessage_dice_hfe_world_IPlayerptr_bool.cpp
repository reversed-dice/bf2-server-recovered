// FUNCTION: BF2 0x524f30
namespace dice { namespace hfe { namespace world {
struct TemplateMessage { unsigned int type; };
class IPlayer;
class Kit {
public:
    virtual void k0();
    virtual void k1();
    virtual void k2();
    virtual void k3();
    virtual void k4();
    virtual void k5();
    virtual void k6();
    virtual void k7();
    virtual void k8();
    virtual void k9();
    virtual void k10();
    virtual void k11();
    virtual void k12();
    virtual void k13();
    virtual void k14();
    virtual void k15();
    virtual void k16();
    virtual void k17();
    virtual void k18();
    virtual void k19();
    virtual void k20();
    virtual void k21();
    virtual void k22();
    virtual void k23();
    virtual void k24();
    virtual void k25();
    virtual void k26();
    virtual void k27();
    virtual void k28();
    virtual void k29();
    virtual void k30();
    virtual void k31();
    virtual void k32();
    virtual void k33();
    virtual void k34();
    virtual void k35();
    virtual void k36();
    virtual void k37();
    virtual void k38();
    virtual void k39();
    virtual void k40();
    virtual void k41();
    virtual void k42();
    virtual void k43();
    virtual void k44();
    virtual void k45();
    virtual void k46();
    virtual void k47();
    virtual void k48();
    virtual void k49();
    virtual void k50();
    virtual void k51();
    virtual void k52();
    virtual void k53();
    virtual void k54();
    virtual void k55();
    virtual void k56();
    virtual void k57();
    virtual void k58();
    virtual void k59();
    virtual void* check();
    void handleMessage(TemplateMessage msg, IPlayer* player, bool flag);
};
class Game {
public:
    virtual void g0();
    virtual void g1();
    virtual void g2();
    virtual void* queryInterface(unsigned int iid);
    virtual void g4();
    virtual void g5();
    virtual void g6();
    virtual void g7();
    virtual void g8();
    virtual void g9();
    virtual void g10();
    virtual void g11();
    virtual void g12();
    virtual void g13();
    virtual void g14();
    virtual void g15();
    virtual void g16();
    virtual void g17();
    virtual void g18();
    virtual void g19();
    virtual void g20();
    virtual void g21();
    virtual void g22();
    virtual void g23();
    virtual void g24();
    virtual void g25();
    virtual void g26();
    virtual void g27();
    virtual void g28();
    virtual void g29();
    virtual void g30();
    virtual void g31();
    virtual void g32();
    virtual void g33();
    virtual void g34();
    virtual void g35();
    virtual void g36();
    virtual void g37();
    virtual void g38();
    virtual void g39();
    virtual void notify(void* k);
};
extern Game* game;
extern unsigned int IID_IGameServer;
void Kit::handleMessage(TemplateMessage msg, IPlayer* player, bool flag)
{
    if (msg.type == 0x18 || msg.type == 0x1d) {
        if (!check())
            return;
        if (!game->queryInterface(IID_IGameServer))
            return;
        game->notify(this);
    }
}
}}}
