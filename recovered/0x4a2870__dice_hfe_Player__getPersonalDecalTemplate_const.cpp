// FUNCTION: BF2 0x4a2870
namespace dice { namespace hfe {
class Player {
public:
    void* getPersonalDecalTemplate() const;
    char _pad_0x000[0x288];
    void* m_personalDecalTemplate; // +0x288
};
void* Player::getPersonalDecalTemplate() const { return m_personalDecalTemplate; }
} }
// REVERSED_FUNCTION: dice::hfe::Player::getPersonalDecalTemplate_const (0x4a2870)