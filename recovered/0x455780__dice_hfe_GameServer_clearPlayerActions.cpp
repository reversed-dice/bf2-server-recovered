// FUNCTION: BF2 0x455780
#include <list>
#include <map>

namespace dice { namespace hfe { namespace io {
class PlayerInput
{
public:
    unsigned char m_pad[0x20];
};
}}}

namespace dice { namespace hfe {

class ActionBuffer
{
public:
    int size() const;
};

class ActionSource
{
public:
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();

    virtual ActionBuffer* getBuffer();   // slot 0x130
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void flushActions();         // slot 0x1b8
};

class ActionHolder
{
public:
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual ActionSource* getSource();   // slot 0x30
};

class GameServer
{
public:
    void clearPlayerActions();
};

void GameServer::clearPlayerActions()
{
    char* end = (char*)this + 0xf0;
    char* n = *(char**)((char*)this + 0x100);
    while (n != end)
    {
        ActionHolder* obj = *(ActionHolder**)(n + 0x28);
        ActionSource* act = obj->getSource();
        if (act != 0)
        {
            if (act->getBuffer()->size() > 4)
            {
                while (act->getBuffer()->size() > 4)
                {
                    ActionBuffer* b = act->getBuffer();
                    void* it = *(void**)b;
                    if (it != (void*)b)
                    {
                        *(int*)((char*)b + 0x14) = *(int*)((char*)it + 0x10);
                        *(long*)((char*)b + 0x18) = *(long*)((char*)it + 0x10);
                        *(long*)((char*)b + 0x20) = *(long*)((char*)it + 0x18);
                        *(long*)((char*)b + 0x28) = *(long*)((char*)it + 0x20);
                        *(int*)((char*)b + 0x30) = *(int*)((char*)it + 0x28);
                    }
                    ((std::_List_node_base*)it)->unhook();
                    operator delete(it);
                }
                act->flushActions();
            }
        }
        n = (char*)std::_Rb_tree_increment((std::_Rb_tree_node_base const*)n);
    }
    std::list<io::PlayerInput>* inputs = (std::list<io::PlayerInput>*)((char*)this + 0x50);
    inputs->clear();
}

}}
