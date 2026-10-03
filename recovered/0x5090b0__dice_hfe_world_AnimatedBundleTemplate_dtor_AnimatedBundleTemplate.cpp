// FUNCTION: BF2 0x5090b0
namespace dice { namespace hfe { namespace world {

struct Skeleton { ~Skeleton(); };   // non-virtual, out of line

struct A1 { virtual ~A1(); char _pad[0x08]; };    // vptr 0x000, ends 0x010
struct A2 { virtual ~A2(); char _pad[0x50]; };    // vptr 0x010, ends 0x068
struct A3 { virtual ~A3(); char _pad[0x158]; };   // vptr 0x068, ends 0x1c8
struct A4 { virtual ~A4(); char _pad[0x28]; };    // vptr 0x1c8, ends 0x1f8

// Declared, not defined: the target tail-calls this dtor.
struct AnimatedBundleTemplateBase : public A1, public A2, public A3, public A4 {
    ~AnimatedBundleTemplateBase();
};

class AnimatedBundleTemplate : public AnimatedBundleTemplateBase {
public:
    Skeleton* m_skeleton;   // 0x1f8
    void*     m_first;      // 0x200
    void*     m_second;     // 0x208
    virtual ~AnimatedBundleTemplate();
};

AnimatedBundleTemplate::~AnimatedBundleTemplate()
{
    Skeleton* sk = m_skeleton;
    if (sk)
        delete sk;
    void* mgr = *(void**)0x010935c8;
    ((void (*)(void*, void*))(*(void***)mgr)[0x20 / 8])(mgr, m_first);
    void* mgr2 = *(void**)0x010935c8;
    ((void (*)(void*, void*))(*(void***)mgr2)[0x20 / 8])(mgr2, m_second);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_AnimatedBundleTemplate_dtor_AnimatedBundleTemplate (0x5090b0)
