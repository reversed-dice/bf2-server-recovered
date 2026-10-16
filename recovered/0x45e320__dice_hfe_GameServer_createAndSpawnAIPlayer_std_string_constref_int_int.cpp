// FUNCTION: BF2 0x45e320
// BF2_FLAGS: -fcrossjumping
#include <string>
#include <list>

namespace dice { namespace hfe {

class EventManager {
public:
    virtual ~EventManager() = 0;
    virtual void e1() = 0;
    virtual void e2() = 0;
    virtual void e3() = 0;
    virtual void dispatch(unsigned int, unsigned int, const void*, float) = 0; // slot 0x28
};
extern EventManager* eventManager;

namespace world {

class IPlayer {
public:
    virtual void v0(); virtual void v1(); virtual void v2();
    virtual void* queryInterface(unsigned int id); // slot 3 (+0x18)
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21();
    virtual void slot0xb0(int a); // slot 22 (+0xb0)
    virtual void v23();
    virtual void slot0xc0(int a); // slot 24 (+0xc0)
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28();
    virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32();
    virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36();
    virtual void v37(); virtual void v38(); virtual void v39(); virtual void v40();
    virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44();
    virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48();
    virtual void v49(); virtual void v50(); virtual void v51(); virtual void v52();
    virtual void v53(); virtual void v54(); virtual void v55(); virtual void v56();
    virtual void slot0x1c8(int a, int b); // slot 57 (+0x1c8)
    virtual void v58(); virtual void v59(); virtual void v60(); virtual void v61();
    virtual void v62(); virtual void v63(); virtual void v64(); virtual void v65();
    virtual void v66(); virtual void v67(); virtual void v68(); virtual void v69();
    virtual void v70(); virtual void v71(); virtual void v72(); virtual void v73();
    virtual void v74(); virtual void v75(); virtual void v76(); virtual void v77();
    virtual void v78(); virtual void v79(); virtual void v80(); virtual void v81();
    virtual void v82(); virtual void v83(); virtual void v84();
    virtual void slot0x2a8(int a); // slot 85 (+0x2a8)
    virtual void v86(); virtual void v87(); virtual void v88(); virtual void v89();
    virtual void v90();
    virtual void slot0x2d8(int a); // slot 91 (+0x2d8)
};

class PlayerManager {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual IPlayer* getPlayer(int id); // slot 8 (+0x40)
};
extern PlayerManager* playerManager;

} // namespace world

class SpawnManager {
public:
    virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3();
    virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7();
    virtual void s8(); virtual void s9();
    virtual void* getSpawnPoint(int id);                 // slot 10 (+0x50)
    virtual std::list<int>& getSpawnPointList(int team); // slot 11 (+0x58)
};
extern SpawnManager* spawnManager;

class GameServer {
public:
    virtual void g0(); virtual void g1(); virtual void g2(); virtual void g3();
    virtual void g4(); virtual void g5(); virtual void g6(); virtual void g7();
    virtual void g8(); virtual void g9(); virtual void g10(); virtual void g11();
    virtual void g12(); virtual void g13(); virtual void g14(); virtual void g15();
    virtual void g16(); virtual void g17(); virtual void g18(); virtual void g19();
    virtual void g20(); virtual void g21(); virtual void g22(); virtual void g23();
    virtual void g24(); virtual void g25(); virtual void g26(); virtual void g27();
    virtual void g28(); virtual void g29(); virtual void g30(); virtual void g31();
    virtual void g32(); virtual void g33(); virtual void g34(); virtual void g35();
    virtual void g36(); virtual void g37(); virtual void g38(); virtual void g39();
    virtual void g40(); virtual void g41(); virtual void g42(); virtual void g43();
    virtual void g44(); virtual void g45(); virtual void g46(); virtual void g47();
    virtual void g48(); virtual void g49(); virtual void g50(); virtual void g51();
    virtual void g52(); virtual void g53(); virtual void g54(); virtual void g55();
    virtual void g56(); virtual void g57(); virtual void g58(); virtual void g59();
    virtual void g60(); virtual void g61(); virtual void g62(); virtual void g63();
    virtual void g64(); virtual void g65(); virtual void g66(); virtual void g67();
    virtual void g68(); virtual void g69(); virtual void g70(); virtual void g71();
    virtual void g72(); virtual void g73(); virtual void g74(); virtual void g75();
    virtual int slot0x260(const std::string& name, int b); // slot 76 (+0x260)
    virtual int createAndSpawnAIPlayer(const std::string& name, int a, int b); // slot 77 (+0x268)
};

int GameServer::createAndSpawnAIPlayer(const std::string& name, int a, int b) {
    std::list<int>& list = spawnManager->getSpawnPointList(a);
    std::list<int>::iterator it = list.begin();
    while (it != list.end()) {
        void* sp = spawnManager->getSpawnPoint(*it);
        if (sp != 0 && ((bool (*)(void*, int))((*(void***)sp)[0x58 / 8]))(sp, 1)) break;
        ++it;
    }
    if (it == list.end()) return -1;
    int id = this->slot0x260(name, 1);
    world::IPlayer* p = world::playerManager->getPlayer(id);
    if (p == 0) return -1;
    p->slot0x1c8(a, 0);
    p->slot0x2d8(b);
    p->slot0x2a8(*it);
    eventManager->dispatch(1, 5, p, 0.0f);
    return id;
}

} } // namespace dice::hfe
