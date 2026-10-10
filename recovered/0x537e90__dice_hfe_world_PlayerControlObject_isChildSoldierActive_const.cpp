// BF2_FLAGS: -fno-reorder-blocks
// FUNCTION: BF2 0x537e90
namespace dice { namespace hfe { namespace world {

extern unsigned int CID_SoldierTemplate;

class PlayerControlObject {
public:
    bool isChildSoldierActive() const;
};

bool PlayerControlObject::isChildSoldierActive() const
{
    const char* s = (const char*)this;
    if (*(void**)(s + 0x2a0) != 0)
        return false;
    void* p = *(void**)(s + 0x268);
    if (p == 0)
        return false;
    if (*(void**)((char*)p + 8) == 0)
        return false;
    void* q = *(void**)(s + 0x270);
    if (q == 0)
        return false;
    void* r = *(void**)((char*)q + 8);
    if (r == 0)
        return false;
    void* t = *(void**)((char*)r + 0x28);
    int cid = ((int (*)(void*))(*(void***)t)[4])(t);
    if (cid == CID_SoldierTemplate)
        return true;
    return false;
}

}}}
