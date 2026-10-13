// FUNCTION: BF2 0x529e80
#include <map>

namespace dice { namespace hfe { namespace world {

class SimpleObject {
public:
    virtual ~SimpleObject();     // declared only: the dtor CALLs it (0x58b170)
    char _pad[0xf8];
};

class SecondBase {
public:
    virtual void vf1();
};

class Ladder : public SimpleObject, public SecondBase {
public:
    char pad_08[0x130];
    int m_238;                                     // +0x238
    static std::map<int, Ladder*> m_ladders;
    static int globalLadderId;
    virtual ~Ladder();
};

Ladder::~Ladder() {
    int id = m_238;
    m_ladders.erase(m_ladders.find(id));
    if (m_ladders.empty()) globalLadderId = 1;
}

} } }
