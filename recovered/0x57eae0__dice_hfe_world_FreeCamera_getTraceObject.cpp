// FUNCTION: BF2 0x57eae0
namespace dice { namespace hfe { namespace world {

extern unsigned int IID_IPlayerControlObject;

class Bundle {
public:
    virtual void b000();
    virtual void b001();
    virtual void b002();
    virtual void* queryInterface(unsigned int iid);
    virtual void* getSelf();
};

class Traced {
public:
    virtual void t000();
    virtual void t001();
    virtual void t002();
    virtual void t003();
    virtual void t004();
    virtual void t005();
    virtual void t006();
    virtual void t007();
    virtual void t008();
    virtual void t009();
    virtual void t010();
    virtual void t011();
    virtual void t012();
    virtual void t013();
    virtual void t014();
    virtual void t015();
    virtual void t016();
    virtual void t017();
    virtual void t018();
    virtual void t019();
    virtual void t020();
    virtual void t021();
    virtual void t022();
    virtual void t023();
    virtual void t024();
    virtual void t025();
    virtual void t026();
    virtual void t027();
    virtual void t028();
    virtual void t029();
    virtual void t030();
    virtual void t031();
    virtual void t032();
    virtual void t033();
    virtual void t034();
    virtual void t035();
    virtual void t036();
    virtual void t037();
    virtual void t038();
    virtual void t039();
    virtual void t040();
    virtual void t041();
    virtual void t042();
    virtual void t043();
    virtual void t044();
    virtual void t045();
    virtual void t046();
    virtual void t047();
    virtual void t048();
    virtual void t049();
    virtual void t050();
    virtual void t051();
    virtual void t052();
    virtual void t053();
    virtual void t054();
    virtual void t055();
    virtual void t056();
    virtual void t057();
    virtual void t058();
    virtual void t059();
    virtual void t060();
    virtual void t061();
    virtual void t062();
    virtual void t063();
    virtual void t064();
    virtual void t065();
    virtual void t066();
    virtual void t067();
    virtual void t068();
    virtual void t069();
    virtual void t070();
    virtual void t071();
    virtual void t072();
    virtual void t073();
    virtual void t074();
    virtual void t075();
    virtual void t076();
    virtual void t077();
    virtual void t078();
    virtual void t079();
    virtual void t080();
    virtual void t081();
    virtual void t082();
    virtual void t083();
    virtual void t084();
    virtual void t085();
    virtual void t086();
    virtual void t087();
    virtual void t088();
    virtual void t089();
    virtual void t090();
    virtual void t091();
    virtual void t092();
    virtual void t093();
    virtual void t094();
    virtual void t095();
    virtual void t096();
    virtual void t097();
    virtual void t098();
    virtual void t099();
    virtual void t100();
    virtual void t101();
    virtual void t102();
    virtual void t103();
    virtual void t104();
    virtual void t105();
    virtual void t106();
    virtual void t107();
    virtual void t108();
    virtual void t109();
    virtual void t110();
    virtual void t111();
    virtual void t112();
    virtual void t113();
    virtual void t114();
    virtual void t115();
    virtual void t116();
    virtual void t117();
    virtual void t118();
    virtual void t119();
    virtual void t120();
    virtual void t121();
    virtual void t122();
    virtual void t123();
    virtual void t124();
    virtual void t125();
    virtual void t126();
    virtual void t127();
    virtual void t128();
    virtual void t129();
    virtual void t130();
    virtual void t131();
    virtual void t132();
    virtual void t133();
    virtual void t134();
    virtual void t135();
    virtual void t136();
    virtual void t137();
    virtual void t138();
    virtual void t139();
    virtual void t140();
    virtual void t141();
    virtual void t142();
    virtual void t143();
    virtual void t144();
    virtual void t145();
    virtual void t146();
    virtual void t147();
    virtual void t148();
    virtual void t149();
    virtual void t150();
    virtual void t151();
    virtual void t152();
    virtual void t153();
    virtual void t154();
    virtual void t155();
    virtual void t156();
    virtual void t157();
    virtual void t158();
    virtual void t159();
    virtual void t160();
    virtual void t161();
    virtual void t162();
    virtual void t163();
    virtual void t164();
    virtual void t165();
    virtual void t166();
    virtual void t167();
    virtual void t168();
    virtual void t169();
    virtual void t170();
    virtual void t171();
    virtual void t172();
    virtual void t173();
    virtual void t174();
    virtual void t175();
    virtual void t176();
    virtual void t177();
    virtual void t178();
    virtual void t179();
    virtual void t180();
    virtual void t181();
    virtual void t182();
    virtual void t183();
    virtual void t184();
    virtual void t185();
    virtual void t186();
    virtual void t187();
    virtual void t188();
    virtual void t189();
    virtual void t190();
    virtual void t191();
    virtual void t192();
    virtual int getId();
};

class Player {
public:
    virtual void p000();
    virtual void p001();
    virtual void p002();
    virtual void p003();
    virtual void p004();
    virtual void p005();
    virtual void p006();
    virtual void p007();
    virtual void p008();
    virtual void p009();
    virtual void p010();
    virtual void p011();
    virtual void p012();
    virtual void p013();
    virtual void p014();
    virtual void p015();
    virtual void p016();
    virtual void p017();
    virtual void* getObject();
    virtual void q000();
    virtual void q001();
    virtual void q002();
    virtual void q003();
    virtual void q004();
    virtual void q005();
    virtual void q006();
    virtual void q007();
    virtual bool isAlive();
};

class PlayerManager {
public:
    virtual void m000();
    virtual void m001();
    virtual void m002();
    virtual void m003();
    virtual void m004();
    virtual void m005();
    virtual void m006();
    virtual void m007();
    virtual Player* getPlayerFromId(int id);
};

extern PlayerManager* playerManager;

static void* getPCO(Bundle* o) {
    while (o != 0) {
        void* t = o->queryInterface(IID_IPlayerControlObject);
        if (t != 0) return reinterpret_cast<Bundle*>(t)->getSelf();
        o = *reinterpret_cast<Bundle**>(reinterpret_cast<char*>(o) + 0x50);
    }
    return 0;
}

class FreeCamera {
public:
    void* getTraceObject();
};

void* FreeCamera::getTraceObject() {
    Traced* x = reinterpret_cast<Traced*>(getPCO(reinterpret_cast<Bundle*>(this)));
    Player* p = playerManager->getPlayerFromId(x->getId());
    if (p == 0) return 0;
    if (p->isAlive() == false) return 0;
    return p->getObject();
}

} } }
