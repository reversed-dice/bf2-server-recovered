// BF2_FLAGS: -fno-reorder-blocks
// FUNCTION: BF2 0x62acc0
namespace dice { namespace hfe { namespace world {

class ZoomComp {};

class ToggleCameraComp : public ZoomComp {
public:
    bool requestFire(bool a, bool b);
    bool fireAllowed() const;
    char _pad[0x38];
    void* m_38;
};

bool ToggleCameraComp::requestFire(bool a, bool b)
{
    if (m_38 != 0) {
        void* p = *(void**)((char*)m_38 + 8);
        if (p != 0 && ((bool (*)(void*))(*(void***)p)[0x78 / 8])(p))
            return false;
    }
    if (fireAllowed())
        return true;
    return false;
}

} } }
