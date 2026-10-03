// FUNCTION: BF2 0x4a2870
namespace dice { namespace hfe {
class Player {
public:
    char _pad[0x288];
    void* field;
    void* getPersonalDecalTemplate() const;
};
void* Player::getPersonalDecalTemplate() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_Player_getPersonalDecalTemplate (0x4a2870)
