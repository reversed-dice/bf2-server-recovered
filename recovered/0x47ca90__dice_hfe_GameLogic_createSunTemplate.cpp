// FUNCTION: BF2 0x47ca90
#include <string>

namespace dice { namespace hfe {

class IClassServer;
class SingletonRegInfo;

class ClassManager {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void queryInterface(unsigned int) const;
    virtual ~ClassManager();
    virtual void registerServer(IClassServer*);
    virtual void unregisterServer(IClassServer*);
    virtual void setDefaultClass(unsigned int, unsigned int);
    virtual void getDefaultClass(unsigned int, unsigned int&);
    virtual void getClassName(unsigned int, std::string&);
    virtual void getClassID(std::string const&, unsigned int&);
    virtual void createInstance(unsigned int, void*);
    virtual void createInstance(unsigned int, unsigned int, void*);
    virtual void createInstance(std::string, unsigned int, void*);
    virtual void setSingletonClass(std::string const&, unsigned int);
    virtual void getSingletonClass(std::string const&, unsigned int&);
    virtual void registerSingleton(SingletonRegInfo const&);
    virtual void unregisterSingleton(std::string const&);
    virtual void* getSingleton(std::string const&);
};

extern ClassManager* classManager;

namespace world {

class ObjectTemplateManager {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void queryInterface(unsigned int) const;
    virtual void setEngineIsInitialized();
    virtual void registerTemplateClass(unsigned int, std::string const&);
    virtual void getTemplateClasses(void*);
    virtual void getClassNameFromTemplateClassID(unsigned int) const;
    virtual void getClassIDFromTemplateClassName(std::string const&) const;
    virtual void getTemplate(std::string const&) const;
    virtual void getTemplate(std::string const&, unsigned int) const;
    virtual void getTemplate(void*, unsigned int) const;
    virtual void getTemplate(void const*, unsigned int) const;
    virtual void renameTemplate(std::string const&, std::string const&);
    virtual void deleteAll(bool);
    virtual void deleteAllNotUsed();
    virtual void deleteTemplate(std::string const&);
    virtual void deleteTemplate(void*);
    virtual void getObjectOfCIDAndInputId(void*, unsigned int, int) const;
    virtual void getObjectOfIIDAndInputId(void*, unsigned int, int) const;
    virtual void getActiveObjectTemplate() const;
    virtual void setActiveObjectTemplate(void const*);
    virtual void createTemplate(unsigned int, std::string const&);
    virtual void createTemplate(std::string const&, std::string const&);
};

} // namespace world

class GameLogic {
public:
    void createSunTemplate();
};

} }

void dice::hfe::GameLogic::createSunTemplate() {
    dice::hfe::world::ObjectTemplateManager* tm =
        (dice::hfe::world::ObjectTemplateManager*)dice::hfe::classManager->getSingleton(std::string("ObjectTemplateManager"));
    if (tm != 0) {
        tm->createTemplate(std::string("LightSource"), std::string("sunlight"));
    }
}
