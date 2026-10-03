// FUNCTION: BF2 0x61cae0
namespace dice { namespace hfe { namespace world {

// vptr at 0x00, sized so the second base lands at 0x20
struct CompBase {
    virtual ~CompBase() {}
    char _pad[0x18];
};

// vptr at 0x20
struct Detonatable {
    virtual ~Detonatable() {}
};

class DefaultDetonationComp : public CompBase, public Detonatable {
public:
    char  _pad2[0x18];   // 0x28 .. 0x40
    int*  m_rc;          // 0x40
    virtual ~DefaultDetonationComp();
};

DefaultDetonationComp::~DefaultDetonationComp()
{
    int* p = m_rc;
    if (p && --*p == 0)
        ::operator delete(p);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_DefaultDetonationComp_dtor_DefaultDetonationComp (0x61cae0)
