// FUNCTION: BF2 0x64a810
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
extern "C" long __strtol_internal(const char*, char**, int, int);
#include <cstdlib>
#include <string>

namespace dice { namespace hfe { namespace world { class IPlayer; } } }

namespace dice { namespace hfe {

class HTTPRequest {
public:
    void onGetComplete(std::string const& s);
};

class KeyParser {
public:
    enum Type { };
    bool parse(std::string const& s, Type t, void* ctx);
private:
    char _pad[0x18];
};

class PlayerManager {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual world::IPlayer* getPlayer(int id);
};

namespace world { extern PlayerManager* playerManager; }

namespace python {

struct PyObject {
    int m_refcount;   // +0x0
    int m_pad;        // +0x4
    void** m_vptr;    // +0x8
};

class PyRef {
public:
    PyObject* m_obj;
    ~PyRef() {
        if (m_obj != 0) {
            if (--m_obj->m_refcount == 0) {
                ((void (*)(PyObject*))m_obj->m_vptr[5])(m_obj);
            }
        }
    }
};

PyRef buildArgs(std::string const& a, std::string const& b, int const& c,
                int const& d, world::IPlayer* const& p);

}

class PythonHost {
public:
    void handleEvent(int ev, python::PyObject* obj);
};

PythonHost* pythonHost();

extern int outstandingRequests;

namespace world {
class IPlayer {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void setName(std::string const& name);   // +0x40
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
    virtual void v65();
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
    virtual void v113();
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
    virtual void v164();
    virtual void v165();
    virtual void v166();
    virtual void v167();
    virtual void v168();
    virtual void v169();
    virtual void v170();
    virtual void v171();
    virtual void setProfileId(int id);               // +0x560
};
}


struct KeyValues {
    std::string v0;
    std::string v1;
    std::string v2;
    std::string v3;
    void* extra;
};

class GSServerSideNameValidation {
public:
    char _pad0[0x30];
    KeyParser m_keys;      // +0x30
    char _pad1[0x8];       // +0x48
    std::string m_s;       // +0x50
    char _pad2[0x10];      // +0x58
    int m_id;              // +0x68
    void onGetComplete(std::string const& s);
};

void GSServerSideNameValidation::onGetComplete(std::string const& s)
{
    ((HTTPRequest*)((char*)this + 8))->onGetComplete(s);
    --outstandingRequests;
    KeyValues values;
    if (!m_keys.parse(s, (KeyParser::Type)4, &values))
        return;
    world::IPlayer* player = world::playerManager->getPlayer(m_id);
    if (player == 0)
        player = world::playerManager->getPlayer(__strtol_internal(values.v0.c_str(), 0, 10, 0));
    if (player != 0) {
        if (values.v3.compare("Ok") != 0) {
            if (values.v3.compare("InvalidAuthProfileID") != 0) {
                if (values.v3.compare("InvalidReportedNick") == 0) {
                    player->setName(values.v1);
                } else if (values.v3.compare("InvalidReportedProfileID") == 0) {
                    player->setProfileId(__strtol_internal(values.v0.c_str(), 0, 10, 0));
                    player->setName(values.v1);
                } else {
                    return;
                }
            }
        }
        pythonHost()->handleEvent(0x28, python::buildArgs(values.v1, m_s,
            __strtol_internal(values.v0.c_str(), 0, 10, 0),
            __strtol_internal(values.v2.c_str(), 0, 10, 0), player).m_obj);
    }
}

} }

