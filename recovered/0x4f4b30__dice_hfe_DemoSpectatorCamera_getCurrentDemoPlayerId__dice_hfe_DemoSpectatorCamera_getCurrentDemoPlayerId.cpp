// FUNCTION: BF2 0x4f4b30
namespace dice { namespace hfe {

class DemoSpectatorCamera {
public:
    int getCurrentDemoPlayerId();
};

int DemoSpectatorCamera::getCurrentDemoPlayerId() {
    return *(int*)((char*)this + 0x10);
}

} }
