// FUNCTION: BF2 0x4dc3a0
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

class IGame;
class BF2Console;

class Demo
{
public:
	void recordDemo(IGame* game, std::string const& name, BF2Console* console);
	char _pad[0x10];
	void* m_field10;
};

class BF2Engine
{
public:
	char _pad[0x28];
	BF2Console* m_console;
	char _pad2[0xd8];
	Demo* m_demo;
	void recordDemo(std::string const& name);
};

extern void* gameLogic;
extern void* game;

void BF2Engine::recordDemo(std::string const& name)
{
	if (gameLogic != 0 && ((bool (*)(void*))(*(void***)gameLogic)[0x278 / 8])(gameLogic)) {
		m_demo->recordDemo((IGame*)game, name, m_console);
		if (m_demo->m_field10 == 0)
			io::mainConsole->print(std::string("Failed to record demo. Maybe the demo '") + name + std::string("' already exists."));
		return;
	}
	if (io::mainConsole != 0)
		io::mainConsole->print(std::string("can't record demos as a client\n"));
}

} }
