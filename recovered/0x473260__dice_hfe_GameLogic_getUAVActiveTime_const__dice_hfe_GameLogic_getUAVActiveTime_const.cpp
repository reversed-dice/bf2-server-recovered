// FUNCTION: BF2 0x473260
namespace dice { namespace hfe {

class GameLogic {
public:
    GameLogic();
    ~GameLogic();
    float getUAVActiveTime() const;
};

GameLogic::GameLogic() {
    *reinterpret_cast<void**>(this) = reinterpret_cast<void*>(0x0);
}

GameLogic::~GameLogic() {
}

float GameLogic::getUAVActiveTime() const {
    return *reinterpret_cast<const float*>(reinterpret_cast<const char*>(this) + 0x44c);
}

} }
// REVERSED_FUNCTION: dice_hfe_GameLogic_getUAVActiveTime_const (0x473260)