// FUNCTION: BF2 0x538020
#include <map>

namespace dice { namespace hfe { namespace world {

class ICameraObject;

class PlayerControlObject {
public:
    void addExternalCamera(ICameraObject* cam);

    unsigned char m_pad[0x278];
    std::map<int, ICameraObject*> m_cameras;     // 0x278
};

typedef int (*GetIdFn)(void*);

void PlayerControlObject::addExternalCamera(ICameraObject* cam)
{
    m_cameras.insert(std::make_pair(((GetIdFn)(*(void***)cam)[0x58 / 8])(cam), cam));
}

} } }
