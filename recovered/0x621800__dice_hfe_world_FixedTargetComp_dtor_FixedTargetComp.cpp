// FUNCTION: BF2 0x621800
namespace dice { namespace hfe { namespace world {

// vptr at 0x00, sized so the second base lands at 0x20
struct CompBase {
    virtual ~CompBase() {}
    char _pad[0x18];
};

// vptr at 0x20
struct Targetable {
    virtual ~Targetable() {}
};

class FixedTargetComp : public CompBase, public Targetable {
public:
    char  _pad2[0x8];    // 0x28 .. 0x30
    int*  m_rc;          // 0x30
    virtual ~FixedTargetComp();
};

FixedTargetComp::~FixedTargetComp()
{
    int* p = m_rc;
    if (p && --*p == 0)
        ::operator delete(p);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_FixedTargetComp_dtor_FixedTargetComp (0x621800)
