// FUNCTION: BF2 0x578bf0
// BF2_FLAGS: -fno-guess-branch-probability
namespace dice { namespace hfe { namespace world {

class RotationalBundle
{
public:
    void handleMessage(int msg, void* player, bool used);
};

class Camera : public RotationalBundle
{
public:
    void handleMessage(int msg, void* player, bool used);
    void changeSubGeometry(unsigned int geom, int mode);
    void setRecordingValid(bool valid);
    void resetChaseCamera();
};

extern void* playerManager;

typedef char (*PlayerFn)(void*);
typedef void* (*ManagerFn)(void*);

} } }

using namespace dice::hfe::world;

void Camera::handleMessage(int msg, void* player, bool used)
{
    if (msg == 2)
    {
        *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x370) = 8;
        if (player != 0)
        {
            if (((PlayerFn)(*(void***)player)[25])(player) == 0)
            {
                setRecordingValid(true);
                resetChaseCamera();
            }
            if (player == ((ManagerFn)(*(void***)playerManager)[12])(playerManager))
            {
                changeSubGeometry(0, 2);
            }
        }
    }
    else if (msg == 3)
    {
        setRecordingValid(false);
        if (player != 0)
        {
            if (player == ((ManagerFn)(*(void***)playerManager)[12])(playerManager))
            {
                changeSubGeometry(0, 3);
            }
        }
    }
    RotationalBundle::handleMessage(msg, player, used);
}
