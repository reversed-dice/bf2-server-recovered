// FUNCTION: BF2 0x549600
#include <vector>

namespace dice { namespace hfe { namespace world {

class IObject;

class Soldier {
public:
    char m_pad[0x380];
    std::vector<IObject*> m_items;   // +0x380

    IObject* removeItem(IObject* item);
};

IObject* Soldier::removeItem(IObject* item)
{
    for (unsigned int i = 1; i < m_items.size(); i++)
    {
        if (m_items[i] == item)
            return ((IObject* (*)(void*, unsigned int))(*(void***)this)[152])(this, i);
    }
    return 0;
}

}}}
