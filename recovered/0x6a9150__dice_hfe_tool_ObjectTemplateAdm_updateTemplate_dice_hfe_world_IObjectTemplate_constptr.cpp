// FUNCTION: BF2 0x6a9150
// BF2_FLAGS: -fno-strict-aliasing
#include <map>
#include <string>

namespace dice { namespace hfe {

class IBase {
public:
    virtual void b0();
};

namespace io {
class IStream {
public:
    virtual void s0();
};
class IMemStream : public IStream {
public:
    virtual void v0();
    virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
    virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12();
    virtual void v13();
    virtual unsigned int getLength();
    virtual char* getData();
};
class Console {
public:
    virtual void c0(); virtual void c1(); virtual void c2();
    virtual void run(const std::string& cmd, const std::string& ignored, int a, int b, int c, int d, int e);
    static const std::string ignoredString_;
};
extern Console* mainConsole;
std::string getAsString(IMemStream* stream);
}

namespace world {
class IObjectTemplate;
class IObject : public IBase {
public:
    char _pad0[0x20];
    const IObjectTemplate* m_template;
    char _pad1[0x20];
    void* m_script;
};
class ObjectManager {
public:
    virtual void d00(); virtual void d01(); virtual void d02(); virtual void d03();
    virtual void d04(); virtual void d05(); virtual void d06(); virtual void d07();
    virtual void d08(); virtual void d09(); virtual void d10(); virtual void d11();
    virtual void d12();
    virtual std::map<unsigned int, IObject*>& m68();
};
extern ObjectManager* objectManager;
}

namespace tool {
void makeConsoleScript(const IBase* obj, io::IStream* stream);

class ObjectTemplateAdm {
public:
    io::IMemStream* initMemStream();
    bool activateObject(world::IObject* obj, bool toggle);
    void updateAllTemplates();
    void updateTemplate(const world::IObjectTemplate* t);

    char _pad[0x808];
    io::IMemStream* m_stream;
};
} } }

void dice::hfe::tool::ObjectTemplateAdm::updateTemplate(const world::IObjectTemplate* t) {
    if (t) {
        initMemStream();
        std::map<unsigned int, world::IObject*>& m = world::objectManager->m68();
        std::map<unsigned int, world::IObject*>::iterator it = m.begin();
        while (it != m.end()) {
            world::IObject* o = it->second;
            if (t == o->m_template) {
                makeConsoleScript(o, m_stream);
                io::mainConsole->run(io::getAsString(m_stream), io::Console::ignoredString_, 0, 0, 0, 0, 0);
            }
            ++it;
        }
        activateObject(0, false);
    }
}
