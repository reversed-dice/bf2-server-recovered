// FUNCTION: BF2 0x564a80
#include <stdlib.h>
namespace dice { namespace hfe {
extern int CID_TriggerableTargetNetworkable;
namespace world {
void setNetworkableComp(void* obj, int cid);
class TriggerableTarget {
public:
    void initNetworkableComp();
private:
    char _p[0x248];
    void* m_248;
};
} } }
void dice::hfe::world::TriggerableTarget::initNetworkableComp()
{
    void* raw = m_248;
    if (raw != 0) {
        long* p = ((long* (*)(void*))(*(void***)raw)[0x128 / 8])(raw);
        if (*(long*)(*p - 0x18) == 0) abort();
        long* q = ((long* (*)(void*))(*(void***)raw)[0x128 / 8])(raw);
        if (*(long*)(*q - 0x18) != 0)
            dice::hfe::world::setNetworkableComp(this, dice::hfe::CID_TriggerableTargetNetworkable);
    }
}
