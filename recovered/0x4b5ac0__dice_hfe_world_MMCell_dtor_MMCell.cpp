// FUNCTION: BF2 0x4b5ac0
// BF2_FLAGS: -fno-strict-aliasing
// dice_hfe_world_MMCell_dtor_MMCell (0x4b59b0)
#include <map>

struct IMMCell { virtual ~IMMCell(); };
struct IObjectTemplate;
struct Poly { virtual ~Poly(); };
struct CellSound { void* a; Poly* p; };

class MMCell : public IMMCell {
public:
    std::map<unsigned int, IObjectTemplate*> m_8;
    std::map<unsigned int, IObjectTemplate*> m_38;
    std::map<unsigned int, CellSound> m_68;
    virtual ~MMCell();
};

MMCell::~MMCell()
{
    std::map<unsigned int, CellSound>::iterator i = m_68.begin();
    if (i != m_68.end()) {
        do {
            delete i->second.p;
            ++i;
        } while (i != m_68.end());
    }
}

// REVERSED_FUNCTION: dice_hfe_world_MMCell_dtor_MMCell (0x4b59b0)
