// FUNCTION: BF2 0x68cb30
namespace dice {
namespace hfe {
namespace world {

class IObject {
public:
    virtual ~IObject();
#define PAD(n) virtual void v_##n();
    PAD(1) PAD(2) PAD(3) PAD(4) PAD(5) PAD(6) PAD(7) PAD(8) PAD(9) PAD(10)
    virtual void slot_60(int a);
    PAD(13) PAD(14) PAD(15) PAD(16) PAD(17) PAD(18) PAD(19) PAD(20) PAD(21) PAD(22) PAD(23)
    virtual void slot_c0(int a, int b);
    PAD(25) PAD(26) PAD(27) PAD(28) PAD(29) PAD(30) PAD(31) PAD(32) PAD(33) PAD(34)
    PAD(35) PAD(36) PAD(37) PAD(38) PAD(39) PAD(40) PAD(41) PAD(42) PAD(43) PAD(44)
    PAD(45) PAD(46) PAD(47) PAD(48) PAD(49) PAD(50) PAD(51) PAD(52) PAD(53) PAD(54)
    PAD(55) PAD(56) PAD(57) PAD(58) PAD(59)
    virtual IObject* getChild();

    char pad[0x58 - 8];
    IObject* m_sibling;
};

class ObjectCache {
public:
    void unmarkObjectAsCached(IObject* obj);
};

void ObjectCache::unmarkObjectAsCached(IObject* obj) {
    for (IObject* cur = obj; cur != 0; cur = cur->m_sibling) {
        cur->slot_60(0);
        cur->slot_c0(0, 0x20);
        unmarkObjectAsCached(cur->getChild());
    }
}

}
}
}
