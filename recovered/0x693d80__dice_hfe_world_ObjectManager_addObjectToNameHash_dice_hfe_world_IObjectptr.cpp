// FUNCTION: BF2 0x693d80
#include <strings.h>
#include <string>

namespace dice { namespace hfe { namespace world {

class IObject {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual const std::string& getName() const;
};

struct NameEntry {
    NameEntry* next;
    std::string name;
    IObject* object;
    NameEntry(NameEntry* n, const std::string& s, IObject* o) : next(n), name(s), object(o) {}
};

struct NameTable {
    NameEntry** slots;
    unsigned int count;
};

class ObjectManager {
public:
    char _pad[0x48];
    NameTable m_names;
    void addObjectToNameHash(IObject* object);
};

}}}

void dice::hfe::world::ObjectManager::addObjectToNameHash(dice::hfe::world::IObject* object)
{
    const std::string& name = object->getName();
    const char* s = name.c_str();
    unsigned int len = (unsigned int)name.size();
    unsigned int hash = 0;
    NameTable& t = m_names;
    if (len != 0) {
        unsigned int i = 0;
        unsigned int a = 0x38462u;
        unsigned int b = 0x9ba2u;
        for (; i < len; ++i) {
            int c = s[i];
            if (c >= 'a' && c <= 'z') c -= 0x20;
            hash += ((c << ((a & 7) - (b & 7) + 16)) + (hash << ((b & 3) - (a & 3) + 15))) >> 14 | i;
            a -= 0x76dcbaccu;
            b += 0x57542289u;
        }
    }
    unsigned int h = hash >> 16;
    hash = h + hash + h - h;
    unsigned int idx = hash % t.count;
    NameEntry* e = t.slots[idx];
    while (e != 0) {
        if (strcasecmp(e->name.c_str(), s) == 0) return;
        e = e->next;
    }
    t.slots[idx] = new NameEntry(t.slots[idx], name, object);
}
