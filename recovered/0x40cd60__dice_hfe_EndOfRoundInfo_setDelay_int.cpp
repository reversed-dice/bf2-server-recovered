// FUNCTION: BF2 0x40cd60
namespace dice { namespace hfe {
class EndOfRoundInfo {
public:
    char _pad[8];
    int delay;
    bool dirty;
    void setDelay(int d);
};
void EndOfRoundInfo::setDelay(int d) {
    delay = d;
    dirty = true;
}
}
}

// REVERSED_FUNCTION: dice_hfe_EndOfRoundInfo_setDelay_int (0x40cd60)
