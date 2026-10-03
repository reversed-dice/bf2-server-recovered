// FUNCTION: BF2 0x40cd40
namespace dice { namespace hfe {

class EndOfRoundInfo {
public:
    void* getData() const;
};

void* EndOfRoundInfo::getData() const { return (void*)this; }

} }
// REVERSED_FUNCTION: dice_hfe_EndOfRoundInfo_getData_const (0x40cd40)