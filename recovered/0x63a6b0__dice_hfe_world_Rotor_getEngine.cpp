// FUNCTION: BF2 0x63a6b0
#include <string>
namespace dice { namespace hfe { namespace world {
void* getRootParent(void* p);
void* findEngine(void* p, std::string const& s);
class Rotor {
    char _p[0x28];
    void* m_28;
    char _p2[0x248-0x30];
    void* m_248;
public:
    void* getEngine();
};
void* Rotor::getEngine()
{
    void* e = m_248;
    if (e == 0)
    {
        e = findEngine(getRootParent(this), *(std::string*)((char*)m_28 + 0x200));
        m_248 = e;
    }
    return e;
}
} } }
