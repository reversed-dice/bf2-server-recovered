// FUNCTION: BF2 0x4ae790
namespace dice { namespace hfe { namespace world {

extern long* playerManager;
extern unsigned int IID_IObject;

extern "C" void moveLocalHumanCameraToPoint(void* param_1, void* param_2) {
    typedef long* (*f0_t)(long*);
    long* plVar1 = ((f0_t)(*(long**)playerManager)[0xc])(playerManager);
    if (plVar1 != 0) {
        typedef long* (*f1_t)(long*);
        plVar1 = ((f1_t)(*(long**)plVar1)[0x60])(plVar1);
        if (plVar1 != 0) {
            typedef long* (*f2_t)(long*, unsigned int);
            plVar1 = ((f2_t)(*(long**)plVar1)[3])(plVar1, IID_IObject);
            typedef void (*f3_t)(long*, void*);
            ((f3_t)(*(long**)plVar1)[0x1c])(plVar1, param_2);
        }
    }
}
} } }
