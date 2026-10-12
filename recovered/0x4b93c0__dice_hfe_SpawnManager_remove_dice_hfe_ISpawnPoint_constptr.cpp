// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0x4b93c0
#include <list>
#include <map>

namespace dice { namespace hfe {

class ISpawnPoint {
};

class ISpawnGroup {
public:
    void removeSpawnPoint(ISpawnPoint*);
};

class ISpawnPointBase {
public:
    virtual void i0();
    virtual void i1();
    virtual void i2();
    virtual void i3();
    virtual void i4();
    virtual void i5();
    virtual void i6();
    virtual void i7();
    virtual void i8();
    virtual void i9();
    virtual void i10();
    virtual void i11();
    virtual void i12();
    virtual void i13();
    virtual void i14();
    virtual void i15();
    virtual void i16();
    virtual void i17();
    virtual void i18();
    virtual void i19();
    virtual void i20();
    virtual void i21();
    virtual void i22();
    virtual void i23();
    virtual void i24();
    virtual void i25();
    virtual void i26();
    virtual void i27();
    virtual void i28();
    virtual void i29();
    virtual void i30();
    virtual void i31();
    virtual void i32();
    virtual void i33();
    virtual void i34();
    virtual void i35();
    virtual void i36();
    virtual void i37();
    virtual void i38();
    virtual void i39();
    virtual void i40();
    virtual void i41();
    virtual void i42();
    virtual void i43();
    virtual void i44();
    virtual void i45();
    virtual void i46();
    virtual void i47();
    virtual void i48();
    virtual void i49();
    virtual void i50();
    virtual void i51();
    virtual void i52();
    virtual void i53();
    virtual void i54();
    virtual void i55();
    virtual void i56();
    virtual void i57();
    virtual void i58();
    virtual void i59();
    virtual void i60();
    virtual void i61();
    virtual void i62();
    virtual void i63();
    virtual void i64();
    virtual void i65();
    virtual void i66();
    virtual void i67();
    virtual void i68();
    virtual void i69();
    virtual void i70();
    virtual void i71();
    virtual void i72();
    virtual void i73();
    virtual void i74();
    virtual void i75();
    virtual void i76();
    virtual void i77();
    virtual void i78();
    virtual void i79();
    virtual void i80();
    virtual void i81();
    virtual void i82();
    virtual void i83();
    virtual void i84();
    virtual void i85();
    virtual void i86();
    virtual void i87();
    virtual void i88();
    virtual void i89();
    virtual void i90();
    virtual void i91();
    virtual void i92();
    virtual void i93();
    virtual void i94();
    virtual void i95();
    virtual void i96();
    virtual void i97();
    virtual void i98();
    virtual void i99();
    virtual void i100();
    virtual void i101();
    virtual void i102();
    virtual void i103();
    virtual unsigned int getGroupId() const;
};

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
    virtual ISpawnGroup* getGroupForId(unsigned int);
    char _pad1[0x8];
    std::list<ISpawnPoint*> m_list;
    std::map<unsigned int, ISpawnGroup*> m_map;
    ISpawnPoint const* remove(ISpawnPoint const* p);
};

ISpawnPoint const* SpawnManager::remove(ISpawnPoint const* p)
{
    unsigned int id = ((ISpawnPointBase*)(p ? (char*)p - 0x218 : 0))->getGroupId();
    ISpawnGroup* group = getGroupForId(id);
    if (group != 0)
        m_map[id]->removeSpawnPoint((ISpawnPoint*)p);
    ISpawnPoint const* found = 0;
    for (std::list<ISpawnPoint*>::iterator it = m_list.begin(); it != m_list.end(); ++it)
    {
        if (*it == p)
        {
            m_list.erase(it);
            found = p;
            break;
        }
    }
    return found;
}

} }
