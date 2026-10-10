// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0x4b5c50
#include <map>

namespace dice { namespace hfe { namespace world {

class IObjectTemplate;

struct IMMCell { virtual ~IMMCell(); };

struct Poly { virtual ~Poly(); };

struct CellSound { void* a; Poly* p; };

class MMCell : public IMMCell {
public:
    CellSound* getCellSound(int index, bool create);
    IObjectTemplate* getDecalTemplate(int index, bool create);
    IObjectTemplate* getEffectTemplate(int index, bool create);
    void setDecalTemplate(int index, IObjectTemplate* tmpl);
    void setEffectTemplate(int index, IObjectTemplate* tmpl);
    std::map<unsigned int, IObjectTemplate*> m_8;
    std::map<unsigned int, IObjectTemplate*> m_38;
    std::map<unsigned int, CellSound> m_68;
    virtual ~MMCell();
};

CellSound* MMCell::getCellSound(int index, bool create)
{
    std::map<unsigned int, CellSound>::iterator it = m_68.find((unsigned int)index);
    if (it != m_68.end() && it->second.a != 0)
        return &it->second;
    if (!create)
        return 0;
    it = m_68.find(0u);
    if (it == m_68.end())
        return 0;
    return &it->second;
}

} } }
