// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x4a3e90
#include <map>

namespace dice { namespace hfe { namespace world {

class PlayerScoreData {
public:
    int score;             // 0x00
    int rplScore;          // 0x04
    int skillScore;        // 0x08
    int cmdScore;          // 0x0c
    int deaths;            // 0x10
    int kills;             // 0x14
    int teamKills;         // 0x18
    float fracScore;       // 0x1c
    int rank;              // 0x20
    float f_24;            // 0x24
    float f_28;            // 0x28
    float f_2c;            // 0x2c
    std::map<unsigned int, unsigned short> vehiclesDestroyed;   // 0x30
    std::map<unsigned int, unsigned short> bulletsFired;         // 0x60
    std::map<unsigned int, unsigned short> bulletsGivingDamage;  // 0x90
    int firstPlace;        // 0xc0
    int secondPlace;       // 0xc4
    int thirdPlace;        // 0xc8

    PlayerScoreData();
};

PlayerScoreData::PlayerScoreData()
    : score(0),
      rplScore(0),
      skillScore(0),
      cmdScore(0),
      deaths(0),
      kills(0),
      teamKills(0),
      fracScore(0.0f),
      rank(-1),
      f_24(0.0f),
      f_28(0.0f),
      f_2c(0.0f),
      vehiclesDestroyed(),
      bulletsFired(),
      bulletsGivingDamage(),
      firstPlace(0),
      secondPlace(0),
      thirdPlace(0)
{
}

} } }
