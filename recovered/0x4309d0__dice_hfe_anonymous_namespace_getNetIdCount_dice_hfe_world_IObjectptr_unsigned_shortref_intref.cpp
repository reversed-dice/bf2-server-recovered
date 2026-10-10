// FUNCTION: BF2 0x4309d0
namespace dice { namespace hfe {
class IObject;
namespace {
void* findFirstRealNetworkable(IObject* p);
void internalGetNetIdCount(IObject* a, IObject* b, int& count);
}
void getNetIdCount(IObject* obj, unsigned short& a, int& b)
{
    a = 0;
    b = 0;
    void* p = findFirstRealNetworkable(obj);
    if (p != 0) {
        long v = ((long (*)(void*))(*(void***)p)[0x1b0 / 8])(p);
        a = *(unsigned short*)(v + 8);
        internalGetNetIdCount((IObject*)p, obj, b);
    }
}
} }
