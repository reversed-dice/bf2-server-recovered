// FUNCTION: BF2 0x439cc0

#include <iostream>
#include <string>

namespace dice { namespace hfe {

class GameEventRegistry
{
public:
    GameEventRegistry();
private:
    char m_data[0x78];
};

GameEventRegistry* gameEventRegistry = new GameEventRegistry();

std::string UnknownEventName("Unknown event");

} }
