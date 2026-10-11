// FUNCTION: BF2 0x5f5680
// BF2_FLAGS: -fno-guess-branch-probability
namespace dice { namespace hfe {

extern void* gameLogic;

namespace world {

class IObjectTemplate;
class IProjectileObjectTemplate;

extern unsigned int IID_IProjectileObjectTemplate;
extern void* playerManager;
extern int* g_localPrediction;

class GenericFireArm {
public:
    void* getPlayerByForce() const;
};

class FireComp {
public:
    char _pad0[0x18];
    GenericFireArm* m_arm;
    bool getUseLocalPrediction(IObjectTemplate const* tmpl) const;
};

bool FireComp::getUseLocalPrediction(IObjectTemplate const* tmpl) const {
    void* player = m_arm->getPlayerByForce();
    IProjectileObjectTemplate* pt = (IProjectileObjectTemplate*)
        ((void* (*)(IObjectTemplate const*, unsigned int))(*(void***)tmpl)[0x18 / 8])(tmpl, IID_IProjectileObjectTemplate);
    if (((char (*)(void*))(*(void***)gameLogic)[0x278 / 8])(gameLogic)) {
        return false;
    }
    if (player != ((void* (*)(void*))(*(void***)playerManager)[0x60 / 8])(playerManager)) {
        return false;
    }
    if (!pt) {
        return false;
    }
    long* p = (long*)((long* (*)(IObjectTemplate const*))(*(void***)tmpl)[0x128 / 8])(tmpl);
    if (*(long*)(*p - 0x18) == 0) {
        return false;
    }
    if (((char (*)(void*))(*(void***)pt)[0x68 / 8])(pt)) {
        return true;
    } else if (*g_localPrediction == 1) {
        return true;
    }
    return false;
}

} } }
