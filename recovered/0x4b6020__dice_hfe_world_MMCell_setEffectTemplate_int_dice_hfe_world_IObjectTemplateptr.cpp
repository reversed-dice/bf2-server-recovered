// FUNCTION: BF2 0x4b6020
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

void MMCell::setEffectTemplate(int index, IObjectTemplate* tmpl)
{
    std::map<unsigned int, IObjectTemplate*>::iterator it = m_8.find((unsigned int)index);
    if (it != m_8.end())
        it->second = tmpl;
    else
        m_8.insert(std::make_pair((unsigned int)index, tmpl));
}

} } }
