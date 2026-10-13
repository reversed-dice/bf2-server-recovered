// FUNCTION: BF2 0x772fc0
#include <string>
#include <ostream>
extern char DAT_00bb25f1;
namespace dice { namespace hfe { namespace ai {
struct Debug {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug(int type, const std::string& file, int line, const std::string& tag);
    ~Debug();
};
class TargetData {
public:
    TargetData& operator=(TargetData const& o);
private:
    int m_0;
    char _p[0xc];
    void* m_10;
};
TargetData& TargetData::operator=(TargetData const& o)
{
    Debug(6, std::string("AI/AIInterface/BFKnowledge/BFObjectEnvironment.cpp"), 0x4b,
          std::string(&DAT_00bb25f1)).os
        << "This does not work!";
    m_0 = o.m_0;
    m_10 = o.m_10;
    return *this;
}
} } }
