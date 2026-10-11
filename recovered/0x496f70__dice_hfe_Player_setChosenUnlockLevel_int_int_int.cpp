// FUNCTION: BF2 0x496f70
#include <map>
namespace dice { namespace hfe {
class Player {
public:
    void setChosenUnlockLevel(int level, int index, int value);
private:
    char m_pad[0x348];
    std::map<int, int> m_maps[3];
};

void Player::setChosenUnlockLevel(int level, int index, int value)
{
    m_maps[index][level] = value;
}
}}
