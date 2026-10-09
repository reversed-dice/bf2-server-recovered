// FUNCTION: BF2 0x57e4b0
namespace dice { namespace hfe { namespace world {

class RefCounted {
public:
    int m_refs;
    void addRef() { ++m_refs; }
    void release() { if (--m_refs == 0) delete this; }
};

class WeakPtr {
public:
    RefCounted* m_h;
    WeakPtr() : m_h(0) {}
    WeakPtr(WeakPtr const& o) : m_h(o.m_h) { if (m_h) m_h->addRef(); }
    ~WeakPtr() { if (m_h) m_h->release(); }
    WeakPtr& operator=(WeakPtr const& o) {
        if (o.m_h) o.m_h->addRef();
        if (m_h) m_h->release();
        m_h = o.m_h;
        return *this;
    }
};

class IPlayer;

class FreeCamera {
public:
    bool enter(dice::hfe::world::IPlayer* player);
};

} } }

bool dice::hfe::world::FreeCamera::enter(dice::hfe::world::IPlayer* player) {
    if (player == 0) {
        return false;
    }
    ((void (*)(void*, unsigned int, unsigned int))(*(void***)this)[0xc0 / 8])(this, 0x800, 0);
    (*(dice::hfe::world::WeakPtr*)((char*)this + 0x298)) = ((dice::hfe::world::WeakPtr (*)(void*))(*(void***)player)[0x38 / 8])(player);
    ((void (*)(void*, void*, unsigned int))(*(void***)player)[0x98 / 8])(player, this, ((unsigned int (*)(void*))(*(void***)this)[0x4f0 / 8])(this));
    ((void (*)(void*, unsigned int, unsigned int))(*(void***)this)[0xc0 / 8])(this, 0x800, 0);
    return true;
}
// BF2_FLAGS: -fno-strict-aliasing
// REVERSED_FUNCTION: dice_hfe_world_FreeCamera_enter_dice_hfe_world_IPlayerptr (0x57e4b0)
