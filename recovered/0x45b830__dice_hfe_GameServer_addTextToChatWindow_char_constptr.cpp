// FUNCTION: BF2 0x45b830
#include <string>

namespace dice { namespace hfe { namespace io {

class IConsole
{
public:
	virtual void a0();
	virtual void a1();
	virtual void a2();
	virtual void a3();
	virtual void a4();
	virtual void print(std::string const& s);
};

extern IConsole* mainConsole;

} } }

namespace dice { namespace hfe {

class GameServer
{
public:
	void addTextToChatWindow(char const* text);
};

} }

using namespace dice::hfe;

void GameServer::addTextToChatWindow(char const* text)
{
	dice::hfe::io::mainConsole->print(std::string(text));
}
