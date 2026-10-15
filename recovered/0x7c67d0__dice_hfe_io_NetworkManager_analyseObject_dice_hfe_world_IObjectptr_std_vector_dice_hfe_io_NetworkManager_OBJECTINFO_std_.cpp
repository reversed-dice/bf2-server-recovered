// FUNCTION: BF2 0x7c67d0
// BF2_FLAGS: -fno-strict-aliasing
#include <vector>

namespace dice { namespace hfe { namespace world {

extern const unsigned int IID_IPlayerControlObject;

class Networkable {
public:
    char _pad[0x8];
    unsigned int m_id;
};

class Helper {
public:
    virtual void _h0();
    virtual void _h1();
    virtual void _h2();
    virtual void _h3();
    virtual unsigned int getValue();
};

class IObject {
public:
#define V(n) virtual void _v##n();
    V(0) V(1) V(2)
#undef V
    virtual void* queryInterface(const unsigned int iid);
#define V(n) virtual void _v##n();
    V(4) V(5) V(6) V(7) V(8) V(9)
    V(10) V(11) V(12) V(13) V(14) V(15) V(16) V(17) V(18) V(19)
    V(20) V(21) V(22) V(23) V(24) V(25) V(26) V(27) V(28) V(29)
    V(30) V(31) V(32) V(33) V(34) V(35) V(36) V(37) V(38) V(39)
    V(40) V(41) V(42) V(43) V(44) V(45) V(46) V(47) V(48) V(49)
    V(50) V(51) V(52) V(53)
#undef V
    virtual Networkable* getNetworkable();
#define V(n) virtual void _v##n();
    V(55) V(56) V(57) V(58) V(59)
#undef V
    virtual IObject* getFirstChild();

    char _pad0[0x20];
    Helper* m_helper;
    char _pad1[0x28];
    IObject* m_nextChild;
};

} } }

namespace dice { namespace hfe { namespace io {

class NetworkManager {
public:
    struct OBJECTINFO { unsigned int id; dice::hfe::world::IObject* obj; };

    void _analyseObject(dice::hfe::world::IObject* obj, std::vector<OBJECTINFO, std::allocator<OBJECTINFO> >& out);
};

} } }

void dice::hfe::io::NetworkManager::_analyseObject(dice::hfe::world::IObject* obj, std::vector<OBJECTINFO, std::allocator<OBJECTINFO> >& out)
{
    dice::hfe::world::Helper* h = obj->m_helper;
    if (obj->getNetworkable()) {
        OBJECTINFO info;
        info.id = h->getValue();
        info.obj = obj;
        out.push_back(info);
    }
    for (dice::hfe::world::IObject* child = obj->getFirstChild(); child; child = child->m_nextChild) {
        if (child->queryInterface(dice::hfe::world::IID_IPlayerControlObject) == 0)
            _analyseObject(child, out);
    }
}
