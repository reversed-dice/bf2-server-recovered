// FUNCTION: BF2 0x5be840
#include <string>
namespace dice { namespace hfe { namespace world {

class IComponentTemplate { public: virtual ~IComponentTemplate(); };
class IStrategicObjectCompTemplate { public: virtual ~IStrategicObjectCompTemplate(); };
class RefCounted { public: RefCounted() : m_refCount(1) {} int m_refCount; };

class StrategicObjectCompTemplate : public IComponentTemplate, public IStrategicObjectCompTemplate, public RefCounted {
public:
    StrategicObjectCompTemplate();
    virtual ~StrategicObjectCompTemplate();
    std::string m_name;
    int m_team;
    std::string m_team1Name;
    std::string m_team2Name;
    int m_38;
    int m_3c;
    int m_controlPointId;
    bool m_isDestroyed;
};

StrategicObjectCompTemplate::StrategicObjectCompTemplate()
    : m_controlPointId(-1), m_isDestroyed(false)
{
    m_name = "";
    m_team = 0;
    m_team1Name = "";
    m_team2Name = "";
    m_38 = 0;
    m_3c = 0;
}

StrategicObjectCompTemplate::~StrategicObjectCompTemplate() {}

} } }
