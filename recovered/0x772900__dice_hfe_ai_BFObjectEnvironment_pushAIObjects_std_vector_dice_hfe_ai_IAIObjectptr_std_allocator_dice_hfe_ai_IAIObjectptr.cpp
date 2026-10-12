// FUNCTION: BF2 0x772900
// BF2_FLAGS: -fno-strict-aliasing
#include <vector>
namespace dice { namespace hfe { namespace world { class IObject; } } }
namespace dice { namespace hfe { namespace ai {
class IAIObject;
extern IAIObject* fn_771480(world::IObject* o);
class IAIObjectEnvironment { public: virtual void v0(); };
class BFObjectEnvironment : public IAIObjectEnvironment {
public:
    void pushAIObjects(std::vector<IAIObject*>& objList, const std::vector<world::IObject*>& objects) const;
};
void BFObjectEnvironment::pushAIObjects(std::vector<IAIObject*>& objList, const std::vector<world::IObject*>& objects) const
{
    objList.reserve(objList.size() + objects.size());
    for (std::vector<world::IObject*>::const_iterator it = objects.begin(); it != objects.end(); ++it) {
        IAIObject* o = fn_771480(*it);
        if (o != 0)
            objList.push_back(o);
    }
}
} } }
