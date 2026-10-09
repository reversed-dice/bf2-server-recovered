// FUNCTION: BF2 0x608c40
namespace dice { namespace hfe { namespace world {

class RefCounted {
public:
    int m_refs;
};

class WeakPtr {
public:
    RefCounted* m_h;
    void reset() {
        if (m_h != 0) {
            if (--m_h->m_refs == 0) delete m_h;
        }
        m_h = 0;
    }
};

class TargetComp {
public:
    void enable();
};

} } }

void dice::hfe::world::TargetComp::enable() {
    void* obj = *(void**)((char*)this + 0x18);
    void* p = ((void* (*)(void*))(*(void***)obj)[0x380 / 8])(obj);
    if (p != 0) {
        void* t = *(void**)((char*)this + 0x48);
        if (t != 0 && *(void**)((char*)t + 8) != 0) {
            unsigned int v = ((unsigned int (*)(void*))(*(void***)p)[0xa8 / 8])(p);
            void* t2 = *(void**)((char*)this + 0x48);
            void* n = t2 != 0 ? *(void**)((char*)t2 + 8) : 0;
            *(unsigned int*)((char*)n + 0x24c) = v;
        }
    }
    (*(dice::hfe::world::WeakPtr*)((char*)this + 0x58)).reset();
    *(char*)((char*)this + 0x70) = 0;
}
// REVERSED_FUNCTION: dice_hfe_world_TargetComp_enable (0x608c40)
