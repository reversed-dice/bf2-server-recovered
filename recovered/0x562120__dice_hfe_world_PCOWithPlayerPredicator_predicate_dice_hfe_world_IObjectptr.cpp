// FUNCTION: BF2 0x562120
#include <list>
namespace dice { namespace hfe { namespace world {
class IPlayer;
class IObject;
void getAllPlayers(IObject* o, std::list<IPlayer*>& out);

class ObjectPredicator {
public:
    virtual bool predicate(IObject* o);
};

class PCOWithPlayerPredicator : public ObjectPredicator {
public:
    virtual bool predicate(IObject* o);
};

bool PCOWithPlayerPredicator::predicate(IObject* o)
{
    std::list<IPlayer*> players;
    getAllPlayers(o, players);
    return players.size() != 0;
}
} } }
