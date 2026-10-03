// FUNCTION: BF2 0x623910
namespace dice { namespace hfe { namespace world {

// vptr at 0x00, sized so the second base lands at 0x20
struct CompBase {
    virtual ~CompBase() {}
    char _pad[0x18];
};

// vptr at 0x20
struct Followable {
    virtual ~Followable() {}
};

class DefaultFollowComp : public CompBase, public Followable {
public:
    char  _pad2[0x18];   // 0x28 .. 0x40
    int*  m_rc;          // 0x40
    virtual ~DefaultFollowComp();
};

DefaultFollowComp::~DefaultFollowComp()
{
    int* p = m_rc;
    if (p && --*p == 0)
        ::operator delete(p);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_DefaultFollowComp_dtor_DefaultFollowComp (0x623910)
