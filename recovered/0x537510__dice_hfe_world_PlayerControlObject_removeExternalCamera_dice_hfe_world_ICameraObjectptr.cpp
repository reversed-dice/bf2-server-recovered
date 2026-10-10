// FUNCTION: BF2 0x537510
#include <map>

namespace dice { namespace hfe { namespace world {

class ICameraObject;

class PlayerControlObject {
public:
    char m_pad[0x278];
    std::map<int, ICameraObject*> m_cameras;   // +0x278

    void removeExternalCamera(ICameraObject* cam);
};

void PlayerControlObject::removeExternalCamera(ICameraObject* cam)
{
    int id = ((int (*)(void*))(*(void***)cam)[11])(cam);
    std::map<int, ICameraObject*>::iterator it = m_cameras.find(id);
    if (it != m_cameras.end())
        m_cameras.erase(it);
}

}}}
