// FUNCTION: BF2 0x4b60b0
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

IObjectTemplate* MMCell::getEffectTemplate(int index, bool create)
{
    std::map<unsigned int, IObjectTemplate*>::iterator it = m_8.find((unsigned int)index);
    if (it != m_8.end() && it->second != 0)
        return it->second;
    if (!create)
        return 0;
    it = m_8.find(0u);
    if (it == m_8.end())
        return 0;
    return it->second;
}

} } }
