// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x51e050
#include <string>

namespace dice { namespace hfe { namespace world {

class Soldier;
class GrapplingHookRopeContainer;
class GrapplingHookRope {
public:
    void attachSoldier(Soldier*, int, float);
};

}}}

typedef void* (*FnP)(void*);
typedef int   (*FnI)(void*);
typedef void  (*FnV)(void*);
typedef void* (*FnGetTpl)(void*, const std::string&);
typedef void  (*FnSend)(void*, void*);
typedef unsigned int u32;

extern "C" void* fn_407508(unsigned long);
extern "C" void fn_426790(void* ev, int a, int b, int c, float d);
extern "C" void fn_51cc50(void* rope, void* cont, void* soldier, int n, float f);

void dice::hfe::world::GrapplingHookRope::attachSoldier(Soldier* soldier, int n, float f)
{
    if (!((FnP)(*(void***)soldier)[0x300 / 8])(soldier)) {
        return;
    }
    void* tpl = ((FnGetTpl)(*(void***)*(void**)0x0112ee40)[0x48 / 8])(*(void**)0x0112ee40,
        std::string("GrapplingHookRopeContainer"));
    void* cont = ((FnP)(*(void***)tpl)[0xa8 / 8])(tpl);
    ((FnV)(*(void***)cont)[0x40 / 8])(cont);
    FnSend send = (FnSend)(*(void***)*(void**)0x010c5420)[0x108 / 8];
    void* pl = ((FnP)(*(void***)soldier)[0x300 / 8])(soldier);
    unsigned int pid = ((FnI)(*(void***)pl)[0xa8 / 8])(pl);
    void* ev = fn_407508(0x20);
    fn_426790(ev, pid, ((u32*)this)[0x250 / 4], n, f);
    send(*(void**)0x010c5420, ev);
    fn_51cc50(this, cont, soldier, n, f);
}
