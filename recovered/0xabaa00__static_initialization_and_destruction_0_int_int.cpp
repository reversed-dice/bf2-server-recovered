// FUNCTION: BF2 0xabaa00
#include <iostream>
#include <list>

namespace dice { namespace hfe {

class SetConsoleClassDefaults
{
public:
	SetConsoleClassDefaults(char const*, unsigned int, unsigned char);
};

class ConsoleObject
{
public:
	static char*          mDefaultDynamicObjectName;
	static int            mDefaultAccess;
	static unsigned char  mDefaultCategory;
};

namespace world { namespace {

struct ListHeader
{
	ListHeader()
	{
		*(void**)0x01133ba0 = (void*)0x01133ba0;
		*(void**)0x01133ba8 = (void*)0x01133ba0;
	}

	~ListHeader() {}
};

ListHeader objectList;

SetConsoleClassDefaults ObjectfullAccessSetConsoleClassDefaults("Object", 2, 0);
SetConsoleClassDefaults TerrainfullAccessSetConsoleClassDefaults("Terrain", 2, 0);

struct MyNode {
	char  _p[0x10];
	void* m_data;
};

struct ConsoleObject27 {
	void*          m_vptr;   // +0x0
	unsigned int   m_08;     // +0x8
	void*          m_10;     // +0x10
	const char*    m_18;     // +0x18
	unsigned int   m_20;     // +0x20
	unsigned char  m_24;     // +0x24
	int            m_28;     // +0x28
	int            m_2c;     // +0x2c
	char           _pad[0x88 - 0x30];
	const char*    m_88;     // +0x88
	char           _pad2[0x108 - 0x90];
	char           m_108;    // +0x108
	char           m_109;    // +0x109

	ConsoleObject27() {
		m_18  = (char*)0x00c7d3d8;
		*(void**)this = (void*)0xabb590;
		m_109 = 0;
		m_08  = 0;
		m_28  = 0;
		m_10  = ConsoleObject::mDefaultDynamicObjectName;
		m_2c  = 0;
		m_88  = (char*)0x00ba030e;
		m_108 = 0;
		m_20  = ConsoleObject::mDefaultAccess;
		m_24  = ConsoleObject::mDefaultCategory;

		MyNode* n = new MyNode;
		n->m_data = this;
		((std::_List_node_base*)n)->hook((std::_List_node_base*)&objectList);
	}
	~ConsoleObject27() {}
};

ConsoleObject27 consoleObject27;

} } } }
