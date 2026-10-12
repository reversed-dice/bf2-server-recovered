// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x4a3960
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

    void reset();
};

void PlayerScoreData::reset() {
    float z = 0.0f;
    f_24 = z;
    f_28 = z;
    f_2c = z;
    fracScore = z;

    score = 0;
    rplScore = 0;
    cmdScore = 0;
    skillScore = 0;
    deaths = 0;
    kills = 0;
    teamKills = 0;

    vehiclesDestroyed.clear();
    bulletsFired.clear();
    bulletsGivingDamage.clear();
}

} } }
