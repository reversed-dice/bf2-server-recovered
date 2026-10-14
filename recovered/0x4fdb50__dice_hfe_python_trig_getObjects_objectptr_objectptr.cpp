// FUNCTION: BF2 0x4fdb50
#include <list>
#include <map>
#include <string.h>
#include <vector>
#include <deque>
#include <set>
#include <string>
struct _typeobject;
typedef struct _object {
    int ob_refcnt;
    struct _typeobject* ob_type;
} PyObject;
typedef void (*destructor)(PyObject*);
typedef struct _typeobject {
    int ob_refcnt;
    struct _typeobject* ob_type;
    int ob_size;
    const char* tp_name;
    int tp_basicsize, tp_itemsize;
    destructor tp_dealloc;
} PyTypeObject;
typedef struct {
    int ob_refcnt;
    struct _typeobject* ob_type;
    int ob_size;
    PyObject* ob_item[1];
} PyTupleObject;
typedef void (*PyCFunction)(PyObject*, PyObject*);
typedef struct PyMethodDef {
    const char* ml_name;
    PyCFunction ml_meth;
    int ml_flags;
    const char* ml_doc;
} PyMethodDef;
extern "C" {
PyObject* PyTuple_New(int size);
PyObject* PyCFunction_NewEx(PyMethodDef* def, PyObject* self, PyObject* module);
PyObject* PyMethod_New(PyObject* func, PyObject* self, PyObject* klass);
int PyObject_SetAttrString(PyObject* o, const char* name, PyObject* v);
int PyTuple_SetItem(PyObject* p, int pos, PyObject* o);
PyObject* PyInt_FromLong(long v);
PyObject* PyString_FromString(const char* s);
PyObject* PyFloat_FromDouble(double v);
int PyCallable_Check(PyObject* o);
int PyTuple_Size(PyObject* p);
PyObject* PyObject_GetAttrString(PyObject* o, const char* name);
extern PyTypeObject PyTuple_Type;
PyObject* PyErr_Occurred();
PyObject* PyTuple_GetItem(PyObject* p, int pos);
int PyType_IsSubtype(PyTypeObject* a, PyTypeObject* b);
long PyInt_AsLong(PyObject* o);
double PyFloat_AsDouble(PyObject* o);
char* PyString_AsString(PyObject* o);
extern PyTypeObject PyInt_Type;
extern PyTypeObject PyFloat_Type;
extern PyTypeObject PyString_Type;
void PyErr_SetString(PyObject* type, const char* message);
extern PyObject* PyExc_RuntimeError;
extern PyObject _Py_NoneStruct;
}
#define Py_None (&_Py_NoneStruct)
#define PyObject_TypeCheck(ob, tp) ((ob)->ob_type == (tp) || PyType_IsSubtype((ob)->ob_type, (tp)))
#define PyInt_Check(op) PyObject_TypeCheck(op, &PyInt_Type)
#define PyFloat_Check(op) PyObject_TypeCheck(op, &PyFloat_Type)
#define PyTuple_Check(op) PyObject_TypeCheck(op, &PyTuple_Type)
#define PyString_Check(op) PyObject_TypeCheck(op, &PyString_Type)
#define Py_INCREF(op) ((op)->ob_refcnt++)
#define Py_DECREF(op) if (--(op)->ob_refcnt != 0) ; else (*(op)->ob_type->tp_dealloc)((PyObject*)(op))
#define Py_RETURN_NONE return Py_INCREF(Py_None), Py_None
#define PyTuple_SET_ITEM(op, i, v) (((PyTupleObject*)(op))->ob_item[i] = v)

namespace dice { namespace hfe {
class WorldPref {
public:
    static unsigned int getTickCount();
};
struct Vec3 {
    Vec3() : x(0), y(0), z(0) {}
    float x, y, z;
};
struct Vec4 {
    Vec4() : x(0), y(0), z(0), w(0) {}
    void set(float x_, float y_, float z_, float w_) { x = x_; y = y_; z = z_; w = w_; }
    Vec4& operator=(const Vec4& o) { set(o.x, o.y, o.z, o.w); return *this; }
    float x, y, z, w;
};
struct Mat4 {
    Mat4() {}
    Mat4(const Mat4& o)
    {
        r[0] = o.r[0];
        r[1] = o.r[1];
        r[2] = o.r[2];
        r[3] = o.r[3];
    }
    Vec4 r[4];
};
void setRotationZXY(Mat4& m, float z, float x, float y);
} }
namespace dice { namespace hfe {
namespace world {
class IPlayer;
class IObject;
struct PlayerScoreData {
    int score;
    int rplScore;
    int skillScore;
    int cmdScore;
    int deaths;
    int kills;
    int teamKills;
    float fracScore;
    int rank;
    char _pad[0x3c];
    std::map<unsigned int, unsigned short> bulletsFired;
    std::map<unsigned int, unsigned short> bulletsGivingDamage;
    int firstPlace;
    int secondPlace;
    int thirdPlace;
};
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
    virtual void setName(const std::string& name);
    virtual const std::string& getName() const;
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual IObject* getVehicle() const;
    virtual void v19();
    virtual void v20();
    virtual int getId() const;
    virtual void v22();
    virtual bool getIsRemote() const;
    virtual void v24();
    virtual bool getIsAIPlayer() const;
    virtual void v26();
    virtual bool getIsAlive() const;
    virtual void setSuicide(bool b);
    virtual bool getSuicide() const;
    virtual bool getIsConnected() const;
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
    virtual IObject* getDefaultVehicle();
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
    virtual void setTeam(int team, bool force);
    virtual int getTeam() const;
    virtual void v59();
    virtual void setSpawnAtTick(unsigned int tick);
    virtual float getTimeToSpawn() const;
    virtual void v62();
    virtual void v63();
    virtual bool getIsManDown();
    virtual void v65();
    virtual void v66();
    virtual unsigned int getSquadId() const;
    virtual void v68();
    virtual bool getIsCommander() const;
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void v76();
    virtual void v77();
    virtual void v78();
    virtual bool getIsSquadLeader() const;
    virtual void v80();
    virtual void setIsInsideCP(bool b);
    virtual int getIsInsideCP();
    virtual void v83();
    virtual void v84();
    virtual void setSpawnGroup(int group);
    virtual int getSpawnGroup() const;
    virtual void v87();
    virtual void v88();
    virtual void v89();
    virtual unsigned int getPing() const;
    virtual void v91();
    virtual void v92();
    virtual PlayerScoreData* getScoreData();
    virtual void setFlagHolder(bool b);
    virtual bool getFlagHolder() const;
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
    virtual const std::string& getPeerAddress() const;
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
    virtual int getProfileId();
};
class IPlayerControlObject {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual IPlayer* getPlayer();
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
    virtual IObject* getWeapon(int index);
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
    virtual bool getIsManned();
};
class ISoldier {
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
    virtual IObject* getKit();
};
class ITemplate {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual unsigned int getClassID();
};
class IObject {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void* queryInterface(unsigned int iid);
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
    virtual const Mat4& getMatrix();
    virtual void v34();
    virtual void setMatrix(const Mat4& m);
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
    virtual const Mat4& getRelativeMatrix();
    virtual void setRelativeMatrix(const Mat4& m);
    virtual IObject* getFirstChild();
    unsigned char m_flags;
    char _pad[0x1f];
    ITemplate* m_template;
    char _pad2[0x20];
    IObject* m_parentRef;
    IObject* m_nextSibling;
};
extern const unsigned int IID_IPlayerControlObject;
extern const unsigned int CID_SoldierTemplate;
extern const unsigned int IID_ISoldier;
extern const unsigned int CID_RemoteControlledObjectTemplate;
}
namespace python {
struct HostData;
class PythonHost {
public:
    virtual ~PythonHost();
    bool isInitialized() const;
    void insertTimer(PyObject* timer);
    HostData* m_data;
};
class PyRef {
public:
    PyRef(PyObject* p = 0) : m_p(p) { if (m_p) Py_INCREF(m_p); }
    PyRef(const PyRef& o) : m_p(o.m_p) { if (m_p) Py_INCREF(m_p); }
    ~PyRef() { if (m_p) { Py_DECREF(m_p); } }
    bool operator<(const PyRef& o) const { return m_p < o.m_p; }
    PyObject* get() const { return m_p; }
    PyObject* m_p;
};
void getAllPlayers(world::IObject* o, std::list<world::IPlayer*>& out);
PyObject* to_py(world::IPlayer* p);
inline PyObject* to_py(int v) { return PyInt_FromLong(v); }
template <class T> PyObject* to_py(const std::vector<T>& v);
template <class K, class V> PyObject* to_py(const std::map<K, V>& m);
template <class T> bool extractField(PyObject* o, const char* name, T& out);
template <class T> PyRef buildArgs(const T& a);
template <class T> int py_arg(PyObject* args, int i, T& out);
template <> int py_arg<int>(PyObject* args, int i, int& out);
template <> int py_arg<double>(PyObject* args, int i, double& out);
template <> int py_arg<std::string>(PyObject* args, int i, std::string& out);
template <> int py_arg<PyObject*>(PyObject* args, int i, PyObject*& out);
template <> int py_arg<Vec3>(PyObject* args, int i, Vec3& out);
} } }
namespace dice { namespace hfe {
namespace world { class IObject; }
class IBase {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual IBase* queryInterface(unsigned int iid) const;
};
class IGameSpyStats {
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
    virtual void sendSnapshotUpdate(const std::string& s);
    virtual void sendSnapshotFinal(const std::string& s);
};
class IPersistence {
public:
    virtual ~IPersistence();
};
class PlayerUnlocks : public IBase, public IPersistence {
public:
    PlayerUnlocks();
    virtual bool requestUnlocks(int profileId, bool async, std::vector<int>& out);
    char _pad[0x58];
};
class PlayerAwards : public IBase, public IPersistence {
public:
    PlayerAwards();
    virtual bool requestAwards(int profileId, int kind, bool async, int flag);
    char _pad[0x78];
};
class IGameServer : public IBase {
public:
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
    virtual IGameSpyStats* getGameSpyStats();
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
    virtual void sendTextMessage(const std::string& text, int type, int channel, int player, int team);
    virtual void v41();
    virtual void addPersistenceObject(IPersistence* p);
    virtual void v43();
    virtual void v44();
    virtual IBase* getPersistence();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53(int a, int b);
};
class ServerSettings {
public:
    int getTicketRatio() const;
    int getMaxPlayers() const;
    float getTeamRatioPercent() const;
    bool getUseGlobalRank() const;
    bool getUseGlobalUnlocks() const;
    bool getNoVehicles();
    bool getRanked() const;
    char _pad0[0xa0];
    int m_timeLimit;
    int m_scoreLimit;
    char _pad1[0x18];
    unsigned char m_tkpEnabled;
    char _pad2[3];
    int m_tkpNeeded;
    unsigned char m_tkpDefault;
    char _pad3[0x43];
    unsigned char m_autoBalance;
};
extern ServerSettings* serverSettings;
namespace world {
class IPlayerManager {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual IPlayer* getPlayerFromId(int id);
};
extern IPlayerManager* playerManager;
class IScoreManager {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(float f);
    virtual void v11();
    virtual void v12(float f);
    virtual void v13();
    virtual void v14(float f);
    virtual void v15();
    virtual void v16(float f);
    virtual void v17();
    virtual void v18(float f);
};
extern IScoreManager* scoreManager;
}
class ISettings {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual const int& getInt(const std::string& name, const int& def);
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
    virtual const std::string& getString(const std::string& name, const std::string& def);
};
extern ISettings* settings;
class PostRemoteEvent {
public:
    PostRemoteEvent(int category, unsigned int id, int player, void* data, unsigned int size, float delay);
    char _pad[0x58];
};
class IGame : public IBase {
public:
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
    virtual void sendEventToPlayer(int player, PostRemoteEvent* e);
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
    virtual const std::string& getMapName();
    virtual const std::string& getGameMode();
};
extern IGame* game;
namespace io {
class IConsole {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual bool executeCommand(const std::string& cmd, std::string& result, int a, int b, int c, int d, int e);
};
extern IConsole* mainConsole;
}
class IEventManager {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void sendEvent(int target, int type, void* data, float delay);
};
extern IEventManager* eventManager;
class IGameLogic {
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
    virtual void v35(unsigned int a, unsigned int b);
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
    virtual void getControlPointsInGroup(std::vector<world::IObject*>& out, int group);
};
extern IGameLogic* gameLogic;
class ServerGameLogic : public IGameLogic {
public:
    void setNumberOfTickets(unsigned int tickets, unsigned int limit);
    void setTicketLimit(unsigned int tickets, int limit, int id);
    void setTicketChangePerSecond(unsigned int tickets, float rate);
};
extern const unsigned int IID_IGameServer;
extern const unsigned int IID_IPlayerStats;
class IPlayerStats : public IBase {
public:
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual std::string getValue(int player, const std::string& key);
};
namespace python {

} // python
template <class T> struct WeakPtrHandle {
    int refs;
    T* obj;
};
template <class T> class WeakPtr {
public:
    T* get() const { return m_h ? m_h->obj : 0; }
    bool operator<(const WeakPtr& o) const { return m_h < o.m_h; }
    WeakPtrHandle<T>* m_h;
};
namespace python {
struct RadiusTrigger {
    int id;
    float radius;
    float unk08, unk0c;
    WeakPtr<world::IObject> object;
    float unk18, unk1c;
    PyRef callback;
    PyRef data;
    std::set<WeakPtr<world::IObject> > objects;
};

struct HostData {
    bool m_initialized;
    bool m_shuttingDown;
    char _pad[0x26];
    std::list<PyRef> gameStatusHandlers;
    std::set<PyRef> timers;
    char _pad2[0x30];
    std::list<RadiusTrigger> triggers;
    std::list<RadiusTrigger>::iterator nextTrigger;
};
HostData& pyHostData();
}
python::PythonHost* pythonHost();
namespace python {
int py_argo(PyObject* args, int i, world::IObject*& out);
PyObject* wrapObject(world::IObject* o);

PyObject* trig_destroyAll(PyObject* self, PyObject* args)
{
    pyHostData().triggers.clear();
    pyHostData().nextTrigger = pyHostData().triggers.begin();
    Py_RETURN_NONE;
}

bool addSingleMethod(PyObject* o, PyMethodDef* def)
{
    bool ok = false;
    PyObject* fn = PyCFunction_NewEx(def, o, 0);
    if (!fn)
        return false;
    PyObject* method = PyMethod_New(fn, o, (PyObject*)o->ob_type);
    if (method) {
        int r = PyObject_SetAttrString(o, def->ml_name, method);
        ok = r != -1;
        Py_DECREF(method);
    }
    Py_DECREF(fn);
    return ok;
}

PyObject* object_pco_getPlayers(PyObject* self, PyObject* args)
{
    PyObject* t = 0;
    world::IObject* o = 0;
    if (py_argo(args, 0, o) == 0) {
        std::list<world::IPlayer*> players;
        getAllPlayers(o, players);
        t = PyTuple_New(players.size());
        if (t) {
            int i = 0;
            for (std::list<world::IPlayer*>::iterator it = players.begin(); it != players.end(); ++it, ++i)
                PyTuple_SetItem(t, i, to_py(*it));
        }
    }
    return t;
}

PyObject* pers_gamespyStatsSendSnapshotUpdate(PyObject* self, PyObject* args)
{
    std::string snapshot;
    py_arg(args, 0, snapshot);
    IGameServer* gs = 0;
    if (game)
        gs = static_cast<IGameServer*>(game->queryInterface(IID_IGameServer));
    gs->getGameSpyStats()->sendSnapshotUpdate(snapshot);
    Py_RETURN_NONE;
}

PyObject* pers_gamespyStatsSendSnapshotFinal(PyObject* self, PyObject* args)
{
    IGameServer* gs = 0;
    if (game)
        gs = static_cast<IGameServer*>(game->queryInterface(IID_IGameServer));
    std::string snapshot;
    py_arg(args, 0, snapshot);
    gs->getGameSpyStats()->sendSnapshotFinal(snapshot);
    Py_RETURN_NONE;
}

PyObject* sgl_getControlPointsInGroup(PyObject* self, PyObject* args)
{
    PyObject* t = 0;
    int group;
    if (py_arg(args, 0, group) == 0) {
        std::vector<world::IObject*> cps;
        gameLogic->getControlPointsInGroup(cps, group);
        t = PyTuple_New(cps.size());
        if (t) {
            int i = 0;
            for (std::vector<world::IObject*>::iterator it = cps.begin(); it != cps.end(); ++it, ++i)
                PyTuple_SET_ITEM(t, i, wrapObject(*it));
        }
    }
    return t;
}


PyObject* pers_plrAwardMedal(PyObject* self, PyObject* args)
{
    int playerId, medal, a, b;
    if (py_arg(args, 0, playerId) + py_arg(args, 1, medal) + py_arg(args, 2, a) + py_arg(args, 3, b) != 0)
        return 0;
    if (!world::playerManager->getPlayerFromId(playerId)) {
        PyErr_SetString(PyExc_RuntimeError, "no such player");
        return 0;
    }
    Py_RETURN_NONE;
}

PyObject* trig_destroy(PyObject* self, PyObject* args)
{
    int id;
    if (py_arg(args, 0, id))
        return 0;
    std::list<RadiusTrigger>::iterator end = pyHostData().triggers.end();
    std::list<RadiusTrigger>::iterator it = pyHostData().triggers.begin();
    while (it != end && it->id != id)
        ++it;
    if (it == pyHostData().triggers.end()) {
        PyErr_SetString(PyExc_RuntimeError, "no such trigger");
        return 0;
    }
    pyHostData().triggers.erase(it);
    pyHostData().nextTrigger = pyHostData().triggers.begin();
    Py_RETURN_NONE;
}

PyObject* buildObjectList(const std::deque<world::IObject*>& objects)
{
    PyObject* t = PyTuple_New(objects.size());
    if (!t) {
        PyErr_SetString(PyExc_RuntimeError, "out of memory creating object result tuple");
        return t;
    }
    int i = 0;
    for (std::deque<world::IObject*>::const_iterator it = objects.begin(); it != objects.end(); ++it, ++i)
        PyTuple_SET_ITEM(t, i, wrapObject(*it));
    return t;
}


PyObject* ss_getParam(PyObject* self, PyObject* args)
{
    std::string param;
    PyObject* r = 0;
    if (py_arg(args, 0, param) == 0) {
        if (param == "ticketRatio")
            r = PyInt_FromLong(serverSettings->getTicketRatio());
        else if (param == "maxPlayers")
            r = PyInt_FromLong(serverSettings->getMaxPlayers());
        else if (param == "gameMode")
            r = PyString_FromString(game->getGameMode().c_str());
        else if (param == "mapName")
            r = PyString_FromString(game->getMapName().c_str());
        else if (param == "timeLimit")
            r = PyInt_FromLong(serverSettings->m_timeLimit);
        else if (param == "scoreLimit")
            r = PyInt_FromLong(serverSettings->m_scoreLimit);
        else if (param == "autoBalance")
            r = PyInt_FromLong(serverSettings->m_autoBalance != 0);
        else if (param == "teamRatioPct")
            r = PyFloat_FromDouble(serverSettings->getTeamRatioPercent());
        else if (param == "tkpEnabled")
            r = PyInt_FromLong(serverSettings->m_tkpEnabled != 0);
        else if (param == "tkpNeeded")
            r = PyInt_FromLong(serverSettings->m_tkpNeeded);
        else if (param == "tkpDefault")
            r = PyInt_FromLong(serverSettings->m_tkpDefault != 0);
        else if (param == "globRank")
            r = PyInt_FromLong(serverSettings->getUseGlobalRank());
        else if (param == "globUnlocks" || param == "globUnlocks")
            r = PyInt_FromLong(serverSettings->getUseGlobalUnlocks());
        else if (param == "noVehicles")
            r = PyInt_FromLong(serverSettings->getNoVehicles());
        else if (param == "ranked") {
            bool ranked = serverSettings->getRanked();
            IGameServer* gs = 0;
            if (game)
                gs = static_cast<IGameServer*>(game->queryInterface(IID_IGameServer));
            gs->v53(0, 1);
            r = PyInt_FromLong(ranked);
        } else if (param == "hosted") {
            IGameServer* gs = 0;
            if (game)
                gs = static_cast<IGameServer*>(game->queryInterface(IID_IGameServer));
            gs->v53(1, 1);
            r = PyInt_FromLong(1);
        } else {
            r = 0;
            PyErr_SetString(PyExc_RuntimeError, "unknown serversetting");
        }
    }
    return r;
}

PyObject* sgl_setParam(PyObject* self, PyObject* args)
{
    std::string param;
    if (py_arg(args, 0, param) != 0)
        return 0;
    int id, value;
    double team;
    if (py_arg(args, 1, id) + py_arg(args, 2, team) + py_arg(args, 3, value) != 0) {
        PyErr_SetString(PyExc_RuntimeError, "function needs team, value and id parameter");
        return 0;
    }
    ServerGameLogic* game = static_cast<ServerGameLogic*>(gameLogic);
    if (param == "tickets")
        game->setNumberOfTickets(id, (int)team);
    else if (param == "ticketLimit")
        game->setTicketLimit(id, (int)team, value);
    else if (param == "ticketState")
        game->v35(id, (int)team);
    else if (param == "ticketChangePerSecond")
        game->setTicketChangePerSecond(id, (float)team);
    else if (param == "healScoreLimit")
        world::scoreManager->v10((float)team);
    else if (param == "repairScoreLimit")
        world::scoreManager->v12((float)team);
    else if (param == "giveAmmoScoreLimit")
        world::scoreManager->v14((float)team);
    else if (param == "teamDamageScoreLimit")
        world::scoreManager->v16((float)team);
    else if (param == "teamVehicleDamageScoreLimit")
        world::scoreManager->v18((float)team);
    else {
        PyErr_SetString(PyExc_RuntimeError, "bad attribute");
        return 0;
    }
    Py_RETURN_NONE;
}

PyObject* sgl_sendGameLogicEvent(PyObject* self, PyObject* args)
{
    int player, id, value;
    if (py_arg(args, 0, player) + py_arg(args, 1, id) + py_arg(args, 2, value) != 0)
        return 0;
    if ((unsigned int)id >= 25) {
        PyErr_SetString(PyExc_RuntimeError, "only one event ID byte allowed");
        return 0;
    }
    game->sendEventToPlayer(player, new PostRemoteEvent(0, id, player, &value, 4, 0.0f));
    Py_RETURN_NONE;
}

PyObject* sgl_sendHudEvent(PyObject* self, PyObject* args)
{
    int player, id, value;
    if (py_arg(args, 0, player) + py_arg(args, 1, id) + py_arg(args, 2, value) != 0)
        return 0;
    if ((unsigned int)id >= 79) {
        PyErr_SetString(PyExc_RuntimeError, "only one event ID byte allowed");
        return 0;
    }
    game->sendEventToPlayer(player, new PostRemoteEvent(2, id, player, &value, 4, 0.0f));
    Py_RETURN_NONE;
}

PyObject* sgl_getModDirectory(PyObject* self, PyObject* args)
{
    std::string dir = settings->getString("GSModDirectory", "");
    return PyString_FromString(dir.c_str());
}

void getAllPlayers(world::IObject* o, std::list<world::IPlayer*>& out)
{
    if (o->m_flags & 1)
        return;
    if (o->m_template->getClassID() == world::CID_SoldierTemplate && o->m_parentRef)
        return;
    world::IPlayerControlObject* pco = static_cast<world::IPlayerControlObject*>(o->queryInterface(world::IID_IPlayerControlObject));
    if (pco) {
        world::IPlayer* p = pco->getPlayer();
        if (p && p->getIsAlive())
            out.push_back(p);
    }
    for (world::IObject* c = o->getFirstChild(); c; c = c->m_nextSibling)
        getAllPlayers(c, out);
}

PyObject* object_getChildren(PyObject* self, PyObject* args)
{
    world::IObject* o = 0;
    if (py_argo(args, 0, o))
        return 0;
    std::deque<world::IObject*> children;
    for (world::IObject* c = o->getFirstChild(); c; c = c->m_nextSibling)
        children.push_back(c);
    return buildObjectList(children);
}


template <>
int py_arg<int>(PyObject* args, int i, int& out)
{
    if (PyErr_Occurred())
        return 1;
    if (!args) {
        PyErr_SetString(PyExc_RuntimeError, "no arguments");
        return 1;
    }
    PyObject* o = PyTuple_GetItem(args, i);
    if (!o)
        return 1;
    if (!PyInt_Check(o)) {
        PyErr_SetString(PyExc_RuntimeError, "expected an integer");
        return 1;
    }
    out = PyInt_AsLong(o);
    return PyErr_Occurred() ? 1 : 0;
}

template <>
int py_arg<double>(PyObject* args, int i, double& out)
{
    if (PyErr_Occurred())
        return 1;
    if (!args) {
        PyErr_SetString(PyExc_RuntimeError, "no arguments");
        return 1;
    }
    PyObject* o = PyTuple_GetItem(args, i);
    if (!o)
        return 1;
    if (!PyFloat_Check(o) && !PyInt_Check(o)) {
        PyErr_SetString(PyExc_RuntimeError, "expected a float (integers are acceptable too)");
        return 1;
    }
    if (PyFloat_Check(o))
        out = PyFloat_AsDouble(o);
    else
        out = PyInt_AsLong(o);
    return PyErr_Occurred() ? 1 : 0;
}

template <>
int py_arg<std::string>(PyObject* args, int i, std::string& out)
{
    if (PyErr_Occurred())
        return 1;
    if (!args) {
        PyErr_SetString(PyExc_RuntimeError, "no arguments");
        return 1;
    }
    PyObject* o = PyTuple_GetItem(args, i);
    if (!o)
        return 1;
    if (!PyString_Check(o)) {
        PyErr_SetString(PyExc_RuntimeError, "expected a string");
        return 1;
    }
    out = PyString_AsString(o);
    return PyErr_Occurred() ? 1 : 0;
}


template <>
int py_arg<Vec3>(PyObject* args, int i, Vec3& out)
{
    if (PyErr_Occurred())
        return 1;
    if (!args) {
        PyErr_SetString(PyExc_RuntimeError, "no arguments");
        return 1;
    }
    PyObject* o = PyTuple_GetItem(args, i);
    if (!o)
        return 1;
    if (!PyTuple_Check(o)) {
        PyErr_SetString(PyExc_RuntimeError, "[vec3] expected a tuple");
        return 1;
    }
    if (PyTuple_Size(o) != 3) {
        PyErr_SetString(PyExc_RuntimeError, "[vec3] expected a tuple of size 3");
        return 1;
    }
    float* f = &out.x;
    for (int k = 0; k < 3; ++k) {
        PyObject* e = PyTuple_GetItem(o, k);
        if (!e || !PyFloat_Check(e)) {
            PyErr_SetString(PyExc_RuntimeError, "[vec3] expected a float");
            return 1;
        }
        f[k] = PyFloat_AsDouble(e);
    }
    return 0;
}

template <>
bool extractField<int>(PyObject* o, const char* name, int& out)
{
    if (PyErr_Occurred())
        return false;
    if (!o) {
        PyErr_SetString(PyExc_RuntimeError, "no object");
        return false;
    }
    PyObject* f = PyObject_GetAttrString(o, name);
    if (!f)
        return false;
    bool failed;
    if (PyInt_Check(f)) {
        out = PyInt_AsLong(f);
        failed = PyErr_Occurred() != 0;
    } else {
        failed = true;
        PyErr_SetString(PyExc_RuntimeError, "expected an integer");
    }
    Py_DECREF(f);
    return failed != 1;
}

template <>
bool extractField<double>(PyObject* o, const char* name, double& out)
{
    if (PyErr_Occurred())
        return false;
    if (!o) {
        PyErr_SetString(PyExc_RuntimeError, "no object");
        return false;
    }
    PyObject* f = PyObject_GetAttrString(o, name);
    if (!f)
        return false;
    bool failed;
    if (!PyFloat_Check(f) && !PyInt_Check(f)) {
        failed = true;
        PyErr_SetString(PyExc_RuntimeError, "expected a float (integers are acceptable too)");
    } else {
        if (PyFloat_Check(f))
            out = PyFloat_AsDouble(f);
        else
            out = PyInt_AsLong(f);
        failed = PyErr_Occurred() != 0;
    }
    Py_DECREF(f);
    return failed != 1;
}

template <class T>
PyObject* to_py(const std::vector<T>& v)
{
    PyObject* t = PyTuple_New(v.size());
    int i = 0;
    for (typename std::vector<T>::const_iterator it = v.begin(); it != v.end(); ++it, ++i)
        PyTuple_SetItem(t, i, to_py(*it));
    return t;
}

template <>
PyObject* to_py<world::IPlayer*, int>(const std::map<world::IPlayer*, int>& m)
{
    PyObject* t = PyTuple_New(m.size());
    int i = 0;
    for (std::map<world::IPlayer*, int>::const_iterator it = m.begin(); it != m.end(); ++it, ++i) {
        PyObject* e = PyTuple_New(2);
        PyTuple_SetItem(e, 0, to_py(it->first));
        PyTuple_SetItem(e, 1, PyInt_FromLong(it->second));
        PyTuple_SetItem(t, i, e);
    }
    return t;
}

template <class T>
PyRef buildArgs(const T& a)
{
    if (!pythonHost()->isInitialized())
        return PyRef();
    PyObject* t = PyTuple_New(1);
    PyTuple_SetItem(t, 0, to_py(a));
    PyRef r;
    r.m_p = t;
    return r;
}

template PyObject* to_py<int>(const std::vector<int>& v);
template PyObject* to_py<std::vector<int> >(const std::vector<std::vector<int> >& v);
template PyRef buildArgs<int>(const int& a);
template PyRef buildArgs<world::IPlayer*>(world::IPlayer* const& a);


PyObject* sgl_getWorldSize(PyObject* self, PyObject* args)
{
    PyObject* t = PyTuple_New(2);
    PyTuple_SetItem(t, 0, PyInt_FromLong(settings->getInt("GLSWorldSizeX", 1024)));
    PyTuple_SetItem(t, 1, PyInt_FromLong(settings->getInt("GLSWorldSizeZ", 1024)));
    return t;
}

PyObject* sgl_getMapName(PyObject* self, PyObject* args)
{
    std::string name = game->getMapName();
    if (name.length() == 0)
        name = settings->getString("GSLoadLevel", "");
    return PyString_FromString(name.c_str());
}

PyObject* sgl_sendTextMessage(PyObject* self, PyObject* args)
{
    std::string text;
    int player, type, channel, team;
    if (py_arg(args, 0, player) + py_arg(args, 1, type) + py_arg(args, 2, channel) + py_arg(args, 3, text) + py_arg(args, 4, team) != 0)
        return 0;
    int to = team;
    if (type == 14)
        to = player;
    IGameServer* gs = 0;
    if (game)
        gs = static_cast<IGameServer*>(game->queryInterface(IID_IGameServer));
    gs->sendTextMessage(text, type, channel, player, to);
    Py_RETURN_NONE;
}


PyObject* object_pco_getIsRemoteControlled(PyObject* self, PyObject* args)
{
    world::IObject* o = 0;
    if (py_argo(args, 0, o))
        return 0;
    std::deque<world::IObject*> children;
    for (world::IObject* c = o->getFirstChild(); c; c = c->m_nextSibling)
        if (c->m_template->getClassID() == world::CID_RemoteControlledObjectTemplate)
            return PyInt_FromLong(1);
    return PyInt_FromLong(0);
}

PyObject* pers_getStatsKeyVal(PyObject* self, PyObject* args)
{
    std::string key;
    PyObject* r = 0;
    if (py_arg(args, 0, key) == 0) {
        IGameServer* gs = 0;
        if (game)
            gs = static_cast<IGameServer*>(game->queryInterface(IID_IGameServer));
        IPlayerStats* ps = static_cast<IPlayerStats*>(gs->getPersistence()->queryInterface(IID_IPlayerStats));
        if (!ps) {
            r = 0;
            PyErr_SetString(PyExc_RuntimeError, "there is no current persistence object downloaded");
        } else {
            r = PyString_FromString(ps->getValue(0, key).c_str());
        }
    }
    return r;
}


PyObject* pers_plrRequestUnlocks(PyObject* self, PyObject* args)
{
    int playerId, async;
    PyObject* r = 0;
    if (py_arg(args, 0, playerId) + py_arg(args, 1, async) != 0)
        return r;
    world::IPlayer* p = world::playerManager->getPlayerFromId(playerId);
    if (!p) {
        PyErr_SetString(PyExc_RuntimeError, "no such player");
        return r;
    }
    std::vector<int> unlocks;
    PlayerUnlocks* u = new PlayerUnlocks;
    if (game) {
        IGameServer* gs = static_cast<IGameServer*>(game->queryInterface(IID_IGameServer));
        if (gs)
            gs->addPersistenceObject(u);
    }
    if (u->requestUnlocks(p->getProfileId(), async != 0, unlocks))
        r = PyInt_FromLong(1);
    else
        r = PyInt_FromLong(0);
    return r;
}

PyObject* pers_plrRequestAwards(PyObject* self, PyObject* args)
{
    int playerId, async;
    std::string unused;
    PyObject* r = 0;
    if (py_arg(args, 0, playerId) + py_arg(args, 1, async) + py_arg(args, 2, unused) != 0)
        return r;
    int profileId = playerId;
    if (playerId < 256) {
        world::IPlayer* p = world::playerManager->getPlayerFromId(playerId);
        if (!p) {
            PyErr_SetString(PyExc_RuntimeError, "no such player");
            return 0;
        }
        profileId = p->getProfileId();
    }
    PlayerAwards* a = new PlayerAwards;
    if (game) {
        IGameServer* gs = static_cast<IGameServer*>(game->queryInterface(IID_IGameServer));
        if (gs)
            gs->addPersistenceObject(a);
    }
    if (a->requestAwards(profileId, 0, async != 0, 1))
        r = PyInt_FromLong(1);
    else
        r = PyInt_FromLong(0);
    return r;
}


struct RconFeedback {
    int player;
    std::string text;
};

PyObject* rcon_feedback(PyObject* self, PyObject* args)
{
    RconFeedback fb;
    if (py_arg(args, 0, fb.player) + py_arg(args, 1, fb.text) != 0)
        return 0;
    fb.text = std::string("rcon: ") + fb.text;
    eventManager->sendEvent(6, 0x13, &fb, 0.0f);
    Py_RETURN_NONE;
}

PyObject* rcon_invoke(PyObject* self, PyObject* args)
{
    std::string cmd;
    std::string result;
    PyObject* r = 0;
    if (py_arg(args, 0, cmd) == 0) {
        if (cmd.length() == 0) {
            r = PyString_FromString("");
        } else {
            if (cmd[cmd.length() - 1] != '\n')
                cmd += "\n";
            io::mainConsole->executeCommand(cmd, result, 0, 0, 0, 0, 0);
            if (result.length() == 0 || result[result.length() - 1] != '\n')
                result += "\n";
            r = PyString_FromString(result.c_str());
        }
    }
    return r;
}


PyObject* object_setRotation(PyObject* self, PyObject* args)
{
    world::IObject* o = 0;
    Vec3 rot;
    if (py_argo(args, 0, o) + py_arg(args, 1, rot) != 0)
        return 0;
    world::IObject* obj = o;
    Mat4 m(obj->m_parentRef == 0 ? obj->getMatrix() : obj->getRelativeMatrix());
    setRotationZXY(m, -rot.z, -rot.y, -rot.x);
    if (obj->m_parentRef == 0)
        obj->setMatrix(m);
    else
        obj->setRelativeMatrix(m);
    Py_RETURN_NONE;
}


PyObject* pmgr_p_get(PyObject* self, PyObject* args)
{
    std::string attr;
    int playerId;
    if (py_arg(args, 0, attr) + py_arg(args, 1, playerId) != 0)
        return 0;
    world::IPlayer* p = world::playerManager->getPlayerFromId(playerId);
    if (!p) {
        PyErr_SetString(PyExc_RuntimeError, "no such player");
        return 0;
    }
    if (attr == "remote")
        return PyInt_FromLong(p->getIsRemote());
    if (attr == "ai")
        return PyInt_FromLong(p->getIsAIPlayer());
    if (attr == "alive")
        return PyInt_FromLong(p->getIsAlive());
    if (attr == "mandown")
        return PyInt_FromLong(p->getIsManDown());
    if (attr == "connected")
        return PyInt_FromLong(p->getIsConnected());
    if (attr == "fholder")
        return PyInt_FromLong(p->getFlagHolder());
    if (attr == "team")
        return PyInt_FromLong(p->getTeam());
    if (attr == "suicide")
        return PyInt_FromLong(p->getSuicide());
    if (attr == "ping")
        return PyInt_FromLong(p->getPing());
    if (attr == "tts")
        return PyFloat_FromDouble(p->getTimeToSpawn());
    if (attr == "sqid")
        return PyInt_FromLong(p->getSquadId());
    if (attr == "isql")
        return PyInt_FromLong(p->getIsSquadLeader());
    if (attr == "commander")
        return PyInt_FromLong(p->getIsCommander());
    if (attr == "name")
        return PyString_FromString(p->getName().c_str());
    if (attr == "sgr")
        return PyInt_FromLong(p->getSpawnGroup());
    if (attr == "profileid")
        return PyInt_FromLong(p->getProfileId());
    if (attr == "kit") {
        world::IObject* v = p->getDefaultVehicle();
        if (v && v->m_template->getClassID() == world::CID_SoldierTemplate) {
            world::IObject* kit = static_cast<world::ISoldier*>(v->queryInterface(world::IID_ISoldier))->getKit();
            if (kit)
                return wrapObject(kit);
        }
        Py_RETURN_NONE;
    }
    if (attr == "vehicle") {
        world::IObject* v = p->getVehicle();
        if (v) {
            if (static_cast<world::IPlayerControlObject*>(v->queryInterface(world::IID_IPlayerControlObject))->getIsManned())
                v = p->getDefaultVehicle();
            return wrapObject(v);
        }
        Py_RETURN_NONE;
    }
    if (attr == "defaultvehicle") {
        world::IObject* v = p->getDefaultVehicle();
        if (v)
            return wrapObject(v);
        Py_RETURN_NONE;
    }
    if (attr == "weapon") {
        int index;
        if (py_arg(args, 2, index) != 0)
            return 0;
        world::IObject* v = p->getVehicle();
        if (v) {
            world::IObject* w = static_cast<world::IPlayerControlObject*>(v->queryInterface(world::IID_IPlayerControlObject))->getWeapon(index);
            if (w)
                return wrapObject(w);
        }
        Py_RETURN_NONE;
    }
    if (attr == "addr")
        return PyString_FromString(p->getPeerAddress().c_str());
    if (attr == "isInsideCP")
        return PyInt_FromLong(p->getIsInsideCP() != 0);
    PyErr_SetString(PyExc_RuntimeError, (std::string("bad attribute: ") + attr).c_str());
    return 0;
}


PyObject* pmgr_p_set(PyObject* self, PyObject* args)
{
    std::string attr;
    int playerId;
    if (py_arg(args, 0, attr) + py_arg(args, 1, playerId) != 0)
        return 0;
    world::IPlayer* p = world::playerManager->getPlayerFromId(playerId);
    if (!p) {
        PyErr_SetString(PyExc_RuntimeError, "no such player");
        return 0;
    }
    if (attr == "fholder") {
        int v;
        if (py_arg(args, 2, v) != 0)
            return 0;
        p->setFlagHolder(v != 0);
    } else if (attr == "team") {
        int v;
        if (py_arg(args, 2, v) != 0)
            return 0;
        p->setTeam(v == 1 ? 1 : 2, false);
    } else if (attr == "suicide") {
        int v;
        if (py_arg(args, 2, v) != 0)
            return 0;
        p->setSuicide(v != 0);
    } else if (attr == "tts") {
        double v;
        if (py_arg(args, 2, v) != 0)
            return 0;
        p->setSpawnAtTick((int)(v * 30.0) + WorldPref::getTickCount());
    } else if (attr == "name") {
        std::string v;
        if (py_arg(args, 2, v) != 0)
            return 0;
        p->setName(v);
    } else if (attr == "sgr") {
        int v;
        if (py_arg(args, 2, v) != 0)
            return 0;
        p->setSpawnGroup(v);
    } else if (attr == "isInsideCP") {
        int v;
        if (py_arg(args, 2, v) != 0)
            return 0;
        p->setIsInsideCP(v != 0);
    } else {
        PyErr_SetString(PyExc_RuntimeError, (std::string("attribute not implemented: ") + attr).c_str());
        return 0;
    }
    Py_RETURN_NONE;
}


PyObject* buildBulletStatsTuple(const std::map<unsigned int, unsigned short>& stats);

PyObject* pmgr_getScore(PyObject* self, PyObject* args)
{
    int playerId;
    std::string what;
    if (py_arg(args, 0, playerId) + py_arg(args, 1, what) != 0)
        return 0;
    world::IPlayer* p = world::playerManager->getPlayerFromId(playerId);
    if (!p) {
        PyErr_SetString(PyExc_RuntimeError, "no such player");
        return 0;
    }
    world::PlayerScoreData* sd = p->getScoreData();
    int v;
    if (!strcmp("deaths", what.c_str()))
        v = sd->deaths;
    else if (!strcmp("kills", what.c_str()))
        v = sd->kills;
    else if (!strcmp("TKs", what.c_str()))
        v = sd->teamKills;
    else if (!strcmp("score", what.c_str()))
        v = sd->score;
    else if (!strcmp("skillScore", what.c_str()))
        v = sd->skillScore;
    else if (!strcmp("rplScore", what.c_str()))
        v = sd->rplScore;
    else if (!strcmp("cmdScore", what.c_str()))
        v = sd->cmdScore;
    else if (!strcmp("fracScore", what.c_str()))
        return PyFloat_FromDouble(sd->fracScore);
    else if (!strcmp("rank", what.c_str()))
        v = sd->rank;
    else if (!strcmp("firstPlace", what.c_str()))
        v = sd->firstPlace;
    else if (!strcmp("secondPlace", what.c_str()))
        v = sd->secondPlace;
    else if (!strcmp("thirdPlace", what.c_str()))
        v = sd->thirdPlace;
    else if (!strcmp("bulletsFired", what.c_str()))
        return buildBulletStatsTuple(sd->bulletsFired);
    else if (!strcmp("bulletsGivingDamage", what.c_str()))
        return buildBulletStatsTuple(sd->bulletsGivingDamage);
    else if (!strcmp("bulletsFiredAndClear", what.c_str())) {
        PyObject* t = buildBulletStatsTuple(sd->bulletsFired);
        sd->bulletsFired.clear();
        return t;
    } else if (!strcmp("bulletsGivingDamageAndClear", what.c_str())) {
        PyObject* t = buildBulletStatsTuple(sd->bulletsGivingDamage);
        sd->bulletsGivingDamage.clear();
        return t;
    } else {
        PyErr_SetString(PyExc_RuntimeError, (std::string("no such score value: ") + what).c_str());
        return 0;
    }
    return PyInt_FromLong(v);
}

} } }

namespace dice { namespace hfe { namespace world {
extern const unsigned int IID_IControlPoint;
class SupplyGroup;
class IControlPoint {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void* queryInterface(unsigned int) const;
    virtual void getAreaValueTeam1();
    virtual void getAreaValueTeam2();
    virtual void setTeam(unsigned int);
    virtual void getTeam();
    virtual void setPlayer(int);
    virtual void getPlayer();
    virtual void reset();
    virtual void getAllowCaptureByTeam(int);
    virtual void setAllowCaptureByTeam(int, bool);
    virtual void getTimeUntilTakeOver();
    virtual void getShowOnMinimap();
    virtual void setTakeOverChangePerSecond(float);
    virtual void getTakeOverChangePerSecond() const;
    virtual void getSupplyGroupsNeeded(int, std::vector<SupplyGroup>&);
    virtual void refreshFlags();
    virtual void setFlag(int, bool);
    virtual void getFlag() const;
    virtual void setCapturingState(int);
    virtual void getCapturingState() const;
    virtual void getTakeOverCounter();
};
} } }
namespace dice { namespace hfe { namespace python {
PyObject* object_cp_setParam(PyObject* self, PyObject* args)
{
    world::IObject* o = 0;
    std::string param;
    if (py_argo(args, 0, o) + py_arg(args, 1, param) != 0)
        return 0;
    world::IControlPoint* cp = static_cast<world::IControlPoint*>(o->queryInterface(world::IID_IControlPoint));
    if (!cp) {
        PyErr_SetString(PyExc_RuntimeError, "object isn't a control point");
        return 0;
    }
    if (param == "team") {
        int v;
        if (py_arg(args, 2, v))
            return 0;
        cp->setTeam(v);
    } else if (param == "playerId") {
        int v;
        if (py_arg(args, 2, v))
            return 0;
        cp->setPlayer(v);
    } else if (param == "takeOverChangePerSecond") {
        double v;
        if (py_arg(args, 2, v))
            return 0;
        cp->setTakeOverChangePerSecond(v);
    } else if (param == "allowCaptureByTeam") {
        int team, allow;
        if (py_arg(args, 2, team) + py_arg(args, 3, allow) != 0)
            return 0;
        cp->setAllowCaptureByTeam(team, allow > 0);
    } else if (param == "flag") {
        int v;
        if (py_arg(args, 2, v))
            return 0;
        cp->setFlag(v, false);
    } else if (param == "capturingState") {
        int v;
        if (py_arg(args, 2, v))
            return 0;
        cp->setCapturingState(v);
    } else {
        PyErr_SetString(PyExc_RuntimeError, "bad attribute");
        return 0;
    }
    Py_RETURN_NONE;
}
} } }

namespace dice { namespace hfe {
std::string getLowerCase(const std::string& s);
namespace python {
struct FilterTemplateName {
    FilterTemplateName(const std::string& n) : name(getLowerCase(n)) {}
    bool operator()(world::IObject* o) const;
    std::string name;
};
template <class F> void filterObjects(F f, std::deque<world::IObject*>& out);
PyObject* omgr_getObjectsOfTemplate(PyObject* self, PyObject* args)
{
    PyObject* r = 0;
    std::string name;
    if (py_arg(args, 0, name) == 0) {
        std::deque<world::IObject*> objs;
        filterObjects(FilterTemplateName(name), objs);
        r = buildObjectList(objs);
    }
    return r;
}
} } }

#include <algorithm>
namespace dice { namespace hfe { namespace python {
struct TriggerHasId {
    TriggerHasId(const int& i) : id(i) {}
    bool operator()(const RadiusTrigger& t) const { return t.id == id; }
    const int& id;
};
PyObject* trig_getObjects(PyObject* self, PyObject* args)
{
    int id;
    if (py_arg(args, 0, id) == 0) {
        std::list<RadiusTrigger>::iterator it = std::find_if(pyHostData().triggers.begin(), pyHostData().triggers.end(), TriggerHasId(id));
        if (it == pyHostData().triggers.end()) {
            PyErr_SetString(PyExc_RuntimeError, "no such trigger");
            return 0;
        }
        PyObject* t = PyTuple_New(it->objects.size());
        if (t) {
            int i = 0;
            for (std::set<WeakPtr<world::IObject> >::iterator o = it->objects.begin(); o != it->objects.end(); ++o, ++i)
                PyTuple_SetItem(t, i, wrapObject(o->get()));
            return t;
        }
    }
    return 0;
}
} } }
