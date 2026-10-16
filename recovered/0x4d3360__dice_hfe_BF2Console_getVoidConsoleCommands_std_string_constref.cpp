// FUNCTION: BF2 0x4d3360
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <list>

namespace dice { namespace hfe {

class ConsoleObject;

class ConsoleObjects {
public:
    std::list<ConsoleObject*>& getConsoleObjects() const;
};

extern ConsoleObjects* mainConsoleObjects;
int compareIgnoreCase(char const*, char const*);

class ConsoleObject {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual char const* getObjectName();
    virtual char const* getFunctionName();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual char const* getReturnType();
    virtual void v9();
    virtual void v10();
    virtual int getArgCount();
    virtual bool isVisible();
};

class BF2Console {
public:
    unsigned char m_active;
    std::list<std::string> m_commands;
    std::list<std::string>& getVoidConsoleCommands(std::string const& name);
};

std::list<std::string>& BF2Console::getVoidConsoleCommands(std::string const& name)
{
    m_commands.clear();
    std::list<ConsoleObject*>& objs = mainConsoleObjects->getConsoleObjects();
    for (std::list<ConsoleObject*>::iterator it = objs.begin(); it != objs.end(); ++it) {
        ConsoleObject* obj = *it;
        if (compareIgnoreCase(obj->getObjectName(), name.c_str()) == 0
            && compareIgnoreCase(obj->getReturnType(), "Void") == 0
            && obj->getArgCount() == 0
            && obj->isVisible()) {
            std::string s(obj->getFunctionName());
            m_commands.push_front(s);
        }
    }
    return m_commands;
}

} }
