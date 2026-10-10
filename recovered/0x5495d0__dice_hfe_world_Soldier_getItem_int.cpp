// FUNCTION: BF2 0x5495d0
#include <vector>
namespace dice { namespace hfe { namespace world {

class IObject;

class Soldier {
public:
    char _pad[0x380];
    std::vector<IObject*> m_items;

    IObject* getItem(int index);
};

IObject* Soldier::getItem(int index) {
    if (index <= 0) return 0;
    if (index >= (int)m_items.size()) return 0;
    return m_items[index];
}

} } }
