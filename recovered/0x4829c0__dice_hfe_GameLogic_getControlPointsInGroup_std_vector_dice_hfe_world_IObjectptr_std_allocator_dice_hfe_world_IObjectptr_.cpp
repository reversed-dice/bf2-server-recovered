// FUNCTION: BF2 0x4829c0
// BF2_FLAGS: -fno-strict-aliasing
#include <map>
#include <set>
#include <string>
#include <vector>
#include <ostream>

extern char DAT_00bb25f1;

namespace dice { namespace hfe {

namespace world {

class IObject {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void queryInterface();
};

}

class Debug {
    char _pad[0x20];
    char _stream[0x160];
public:
    Debug(int type, std::string const& file, int line, std::string const& func = "");
    ~Debug();
    template <typename T>
    std::ostream& operator<<(T const& val) {
        return *(std::ostream*)(_stream) << val;
    }
};

typedef world::IObject* (*FnGetObject)(void*, int);

static inline world::IObject* getObject(void* self, int id)
{
    return ((FnGetObject)(*(void***)self)[0x2f0 / 8])(self, id);
}

class GameLogic {
public:
    virtual void v0();
    char _pad[0x138];
    std::map<int, std::set<int> > m_controlPointGroups;   // 0x140

    bool getControlPointsInGroup(std::vector<world::IObject*>& out, int group);
};

bool GameLogic::getControlPointsInGroup(std::vector<world::IObject*>& out, int group)
{
    for (std::set<int>::iterator it = m_controlPointGroups[group].begin();
         it != m_controlPointGroups[group].end(); ++it)
    {
        if (getObject(this, *it) != 0)
        {
            out.push_back(getObject(this, *it));
        }
        else
        {
            Debug(6, std::string("Game/GameLogic/GameLogic.cpp"), 2205,
                  std::string(&DAT_00bb25f1))
                << "Control point not found even though its in group " << (int)group;
            return false;
        }
    }
    return true;
}

} }
