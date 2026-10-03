// FUNCTION: BF2 0x4f1f10
// DemoRecorder::getCurrentDemoPlayerId 0x4f1f10 — null → -1
namespace dice { namespace hfe {

extern int demo_player_id(void* a);

int getCurrentDemoPlayerId(void* self) {
    void* a = *(void**)((char*)self + 0xa0);
    if (a == 0)
        return -1;
    return demo_player_id(a);
}

}}
