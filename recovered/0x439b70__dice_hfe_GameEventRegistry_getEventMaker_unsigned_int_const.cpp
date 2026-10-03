// FUNCTION: BF2 0x439b70
#include <map>
namespace dice { namespace hfe {

class GameEventMaker;

class GameEventRegistry {
public:
    GameEventMaker* getEventMaker(unsigned int id) const;
    char _pad0[0x10];
    std::map<unsigned int, GameEventMaker*> m_makers;
};

GameEventMaker* GameEventRegistry::getEventMaker(unsigned int id) const
{
    std::map<unsigned int, GameEventMaker*>::const_iterator it = m_makers.find(id);
    if (it == m_makers.end())
        return 0;
    return it->second;
}

} }
