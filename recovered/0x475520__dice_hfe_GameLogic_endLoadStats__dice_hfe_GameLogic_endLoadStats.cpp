// FUNCTION: BF2 0x475520
namespace dice { namespace hfe {

class GameLogic {
public:
    void endLoadStats();
};

void EndLoadStatsPhase1(void*);

struct GameLoadStatsTarget {
    virtual void pad0() = 0;
    virtual void pad1() = 0;
    virtual void pad2() = 0;
    virtual void pad3() = 0;
    virtual void pad4() = 0;
    virtual void Dispatch(unsigned int, unsigned int, unsigned int, float) = 0;
};

extern void* g_endLoadStatsPhase1Arg;
extern GameLoadStatsTarget* g_endLoadStatsTarget;

void GameLogic::endLoadStats()
{
    EndLoadStatsPhase1(g_endLoadStatsPhase1Arg);
    g_endLoadStatsTarget->Dispatch(2, 8, 0, 0.0f);
}

} }
// REVERSED_FUNCTION: dice_hfe_GameLogic_endLoadStats (0x475520)