// FUNCTION: BF2 0x76f510
namespace dice { namespace hfe { namespace ai {
struct V4g {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void* v0x20();
};
extern V4g* g_game_10c0ea0;
int getTickets_0x76f510() {
    return *(int*)((char*)g_game_10c0ea0->v0x20() + 0x84);
}
} } }
