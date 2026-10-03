// FUNCTION: BF2 0x424290
namespace dice { namespace hfe {

class CreatePlayerEvent {
public:
    unsigned int getType() const;
};

unsigned int CreatePlayerEvent::getType() const {
    return 0x5;
}

} } // namespace
// REVERSED_FUNCTION: dice_hfe_CreatePlayerEvent_getType_const (0x424290)