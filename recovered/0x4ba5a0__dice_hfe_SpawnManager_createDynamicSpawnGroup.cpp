// FUNCTION: BF2 0x4ba5a0
namespace dice { namespace hfe {

class SpawnGroup;

class SpawnManager {
public:
    virtual void s0();
    virtual void s1();
    virtual void s2();
    virtual void s3();
    virtual void s4();
    virtual void s5();
    virtual void s6();
    virtual void s7();
    virtual void s8();
    virtual void s9();
    virtual SpawnGroup* getSpawnGroup(int);
    virtual void s11();
    virtual void s12();
    virtual void s13();
    virtual void s14();
    virtual void s15();
    virtual void s16();
    virtual void s17();
    virtual void s18();
    virtual void s19();
    virtual void s20();
    void getCreateSpawnGroup(unsigned int, unsigned int, bool);
    int createDynamicSpawnGroup();
};

int SpawnManager::createDynamicSpawnGroup()
{
    unsigned int id = 0xc0;
    for (;;)
    {
        if (id == 0x100)
            return -1;
        if (getSpawnGroup(id) == 0)
            break;
        id = id + 1;
    }
    getCreateSpawnGroup(id, 0, false);
    return (int)id;
}

} }
