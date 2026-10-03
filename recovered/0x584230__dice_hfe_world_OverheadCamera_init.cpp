// FUNCTION: BF2 0x584230
#include <map>
namespace dice { namespace hfe { namespace world {

class ICameraObject;
class Bundle {
public:
    virtual void _v00(); virtual void _v08(); virtual void _v10();
    virtual ICameraObject* queryInterface(int id);
    void init();
};
extern int g_cameraObjectId;

class OverheadCamera : public Bundle {
public:
    void init();
    void pan(float x, float y, float z);
    char _pad8[0x290];
    std::map<int, ICameraObject*> m_cameras;
};

void OverheadCamera::init()
{
    Bundle::init();
    m_cameras.insert(std::make_pair(0, queryInterface(g_cameraObjectId)));
    pan(0.0f, 0.0f, 0.001f);
}

} } }
