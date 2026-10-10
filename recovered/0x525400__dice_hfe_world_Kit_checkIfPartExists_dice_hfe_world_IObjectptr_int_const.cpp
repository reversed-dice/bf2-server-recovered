// FUNCTION: BF2 0x525400

namespace dice { namespace hfe { namespace world {

extern unsigned int IID_IItemObject;

class IItemObject {
public:
    virtual void id0();
    virtual void id1();
    virtual void id2();
    virtual void id3();
    virtual void id4();
    virtual void id5();
    virtual void id6();
    virtual void id7();
    virtual void id8();
    virtual void id9();
    virtual void id10();
    virtual void id11();
    virtual int getPartId();
};

class IObject {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void* queryInterface(unsigned int);

    char _pad[0x58 - 8];
    IObject* m_sibling;
};

class Kit {
public:
    virtual void od0();
    virtual void od1();
    virtual void od2();
    virtual void od3();
    virtual void od4();
    virtual void od5();
    virtual void od6();
    virtual void od7();
    virtual void od8();
    virtual void od9();
    virtual void od10();
    virtual void od11();
    virtual void od12();
    virtual void od13();
    virtual void od14();
    virtual void od15();
    virtual void od16();
    virtual void od17();
    virtual void od18();
    virtual void od19();
    virtual void od20();
    virtual void od21();
    virtual void od22();
    virtual void od23();
    virtual void od24();
    virtual void od25();
    virtual void od26();
    virtual void od27();
    virtual void od28();
    virtual void od29();
    virtual void od30();
    virtual void od31();
    virtual void od32();
    virtual void od33();
    virtual void od34();
    virtual void od35();
    virtual void od36();
    virtual void od37();
    virtual void od38();
    virtual void od39();
    virtual void od40();
    virtual void od41();
    virtual void od42();
    virtual void od43();
    virtual void od44();
    virtual void od45();
    virtual void od46();
    virtual void od47();
    virtual void od48();
    virtual void od49();
    virtual void od50();
    virtual void od51();
    virtual void od52();
    virtual void od53();
    virtual void od54();
    virtual void od55();
    virtual void od56();
    virtual void od57();
    virtual void od58();
    virtual void od59();
    virtual IObject* getChild() const;

    bool checkIfPartExists(IObject* ignore, int partId) const;
};

bool Kit::checkIfPartExists(IObject* ignore, int partId) const {
    IObject* cur = getChild();
    while (cur) {
        if (cur != ignore) {
            IItemObject* item = (IItemObject*)cur->queryInterface(IID_IItemObject);
            if (item && item->getPartId() == partId) {
                return true;
            }
        }
        cur = cur->m_sibling;
    }
    return false;
}

} } }
