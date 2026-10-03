// FUNCTION: BF2 0x657920
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <vector>

namespace dice { namespace hfe {

struct PlayerStatKey {
    int m0;
    std::string s8;
    std::string s10;
    std::string s18;
    int m20;
    PlayerStatKey(const std::string&, const std::string&, int);
    PlayerStatKey(int n, const std::string& a, const std::string& b, const std::string& c)
        : m0(n), s8(b), s10(a), s18(c) {}
    ~PlayerStatKey();
};

struct PlayerStatsManager {
    int refcount;      // +0x8 (vptr @ 0)
    char c_c;          // +0xC
    char c_d;          // +0xD
    std::string s10;   // +0x10
    std::string s18;   // +0x18
    std::vector<PlayerStatKey> m_keys;   // +0x20
    PlayerStatsManager();
    virtual ~PlayerStatsManager();
};

PlayerStatsManager::PlayerStatsManager() : refcount(1), c_c(0), c_d(0) {
m_keys.push_back(PlayerStatKey("player id", "pID", 0));

m_keys.push_back(PlayerStatKey("player id", "pID", 0));

m_keys.push_back(PlayerStatKey("clanID", "cID", 0));

m_keys.push_back(PlayerStatKey("team", "t", 0));

m_keys.push_back(PlayerStatKey("map", "m", 0));

m_keys.push_back(PlayerStatKey("game mode", "gm", 0));

m_keys.push_back(PlayerStatKey("round end army", "a", 0));

m_keys.push_back(PlayerStatKey("time", "ctime", 0));

m_keys.push_back(PlayerStatKey("complete", "c", 0));

m_keys.push_back(PlayerStatKey(1, "hostname", "h", "undefined"));

m_keys.push_back(PlayerStatKey("ip address", "ip", 0));

m_keys.push_back(PlayerStatKey("version", "v", 0));

m_keys.push_back(PlayerStatKey("times kicked", "kck", 0));

m_keys.push_back(PlayerStatKey("times banned", "ban", 0));

m_keys.push_back(PlayerStatKey("round end score", "rs", 0));

m_keys.push_back(PlayerStatKey("commander score", "cs", 0));

m_keys.push_back(PlayerStatKey("team score", "ts", 0));

m_keys.push_back(PlayerStatKey("skill scoare", "ss", 0));

m_keys.push_back(PlayerStatKey("badges", "ab", 0));

m_keys.push_back(PlayerStatKey("medals", "am", 0));

m_keys.push_back(PlayerStatKey("end of round start", "as", 0));

m_keys.push_back(PlayerStatKey("purple hear", "ap", 0));

m_keys.push_back(PlayerStatKey("time played as commander", "tco", 0));

m_keys.push_back(PlayerStatKey("time played as squad leader", "tsl", 0));

m_keys.push_back(PlayerStatKey("time played as squad member", "tsm", 0));

m_keys.push_back(PlayerStatKey("time played as lone wolf", "tlw", 0));

m_keys.push_back(PlayerStatKey("time as anti-tank", "tk0", 0));

m_keys.push_back(PlayerStatKey("time as assault", "tk1", 0));

m_keys.push_back(PlayerStatKey("time as engineer", "tk2", 0));

m_keys.push_back(PlayerStatKey("time as medic", "tk3", 0));

m_keys.push_back(PlayerStatKey("time as spec op", "tk4", 0));

m_keys.push_back(PlayerStatKey("time as support", "tk5", 0));

m_keys.push_back(PlayerStatKey("time as sniper", "tk6", 0));

m_keys.push_back(PlayerStatKey("kills as anti-tank", "kk0", 0));

m_keys.push_back(PlayerStatKey("kills as assault", "kk1", 0));

m_keys.push_back(PlayerStatKey("kills as engineer", "kk2", 0));

m_keys.push_back(PlayerStatKey("kills as medic", "kk3", 0));

m_keys.push_back(PlayerStatKey("kills as spec ops", "kk4", 0));

m_keys.push_back(PlayerStatKey("kills as support", "kk5", 0));

m_keys.push_back(PlayerStatKey("kills as sniper", "kk6", 0));

m_keys.push_back(PlayerStatKey("deaths as anti-tank", "dk0", 0));

m_keys.push_back(PlayerStatKey("deaths as assault", "dk1", 0));

m_keys.push_back(PlayerStatKey("deaths as engineer", "dk2", 0));

m_keys.push_back(PlayerStatKey("deaths as medic", "dk3", 0));

m_keys.push_back(PlayerStatKey("deaths as spec ops", "dk4", 0));

m_keys.push_back(PlayerStatKey("deaths as support", "dk5", 0));

m_keys.push_back(PlayerStatKey("deaths as sniper", "dk6", 0));

m_keys.push_back(PlayerStatKey("time in armor", "tv0", 0));

m_keys.push_back(PlayerStatKey("time in aviator", "tv1", 0));

m_keys.push_back(PlayerStatKey("time in air-defense", "tv2", 0));

m_keys.push_back(PlayerStatKey("time in helicopter", "tv3", 0));

m_keys.push_back(PlayerStatKey("time in transport", "tv4", 0));

m_keys.push_back(PlayerStatKey("time in artillery", "tv5", 0));

m_keys.push_back(PlayerStatKey("time in ground-def", "tv6", 0));

m_keys.push_back(PlayerStatKey("time in parachute", "tvp", 0));

m_keys.push_back(PlayerStatKey("time in night vision", "tnv", 0));

m_keys.push_back(PlayerStatKey("time in gas mask", "tgm", 0));

m_keys.push_back(PlayerStatKey("kills in armor", "kv0", 0));

m_keys.push_back(PlayerStatKey("kills in aviator", "kv1", 0));

m_keys.push_back(PlayerStatKey("kills in air-defense", "kv2", 0));

m_keys.push_back(PlayerStatKey("kills in helicopter", "kv3", 0));

m_keys.push_back(PlayerStatKey("kills in transport", "kv4", 0));

m_keys.push_back(PlayerStatKey("kills in artillery", "kv5", 0));

m_keys.push_back(PlayerStatKey("kills in ground-def", "kv6", 0));

m_keys.push_back(PlayerStatKey("road kill", "kvr", 0));

m_keys.push_back(PlayerStatKey("deaths by armor", "bv0", 0));

m_keys.push_back(PlayerStatKey("deaths by aviator", "bv1", 0));

m_keys.push_back(PlayerStatKey("deaths by air-def", "bv2", 0));

m_keys.push_back(PlayerStatKey("deaths by helicopter", "bv3", 0));

m_keys.push_back(PlayerStatKey("deaths by transport", "bv4", 0));

m_keys.push_back(PlayerStatKey("deaths by artillery", "bv5", 0));

m_keys.push_back(PlayerStatKey("deaths by ground-def", "bv6", 0));

m_keys.push_back(PlayerStatKey("time as USA", "ta0", 0));

m_keys.push_back(PlayerStatKey("time as MEC", "ta1", 0));

m_keys.push_back(PlayerStatKey("time as Chinese", "ta2", 0));

m_keys.push_back(PlayerStatKey("time as SEALS", "ta3", 0));

m_keys.push_back(PlayerStatKey("time as SAS", "ta4", 0));

m_keys.push_back(PlayerStatKey("time as Spetsnaz", "ta5", 0));

m_keys.push_back(PlayerStatKey("time as MEC Special Forces", "ta6", 0));

m_keys.push_back(PlayerStatKey("time as Rebels", "ta7", 0));

m_keys.push_back(PlayerStatKey("time as Insurgent Forces", "ta8", 0));

m_keys.push_back(PlayerStatKey("time as European Union", "ta9", 0));

m_keys.push_back(PlayerStatKey("time with assault rifle", "tw0", 0));

m_keys.push_back(PlayerStatKey("time with assault rifle w/gl", "tw1", 0));

m_keys.push_back(PlayerStatKey("time with carbine", "tw2", 0));

m_keys.push_back(PlayerStatKey("time with light mg", "tw3", 0));

m_keys.push_back(PlayerStatKey("time with sniper rifle", "tw4", 0));

m_keys.push_back(PlayerStatKey("time with pistol", "tw5", 0));

m_keys.push_back(PlayerStatKey("time with at/aa", "tw6", 0));

m_keys.push_back(PlayerStatKey("time with smg", "tw7", 0));

m_keys.push_back(PlayerStatKey("time with shotgun", "tw8", 0));

m_keys.push_back(PlayerStatKey("kills with assault rifle", "kw0", 0));

m_keys.push_back(PlayerStatKey("kills with assault rifle w/gl", "kw1", 0));

m_keys.push_back(PlayerStatKey("kills with carbine", "kw2", 0));

m_keys.push_back(PlayerStatKey("kills with light mg", "kw3", 0));

m_keys.push_back(PlayerStatKey("kills with sniper rifle", "kw4", 0));

m_keys.push_back(PlayerStatKey("kills with pistol", "kw5", 0));

m_keys.push_back(PlayerStatKey("kills with at/aa", "kw6", 0));

m_keys.push_back(PlayerStatKey("kills with smg", "kw7", 0));

m_keys.push_back(PlayerStatKey("kills with shotgun", "kw8", 0));

m_keys.push_back(PlayerStatKey("deaths by assault rifle", "bw0", 0));

m_keys.push_back(PlayerStatKey("deaths by assault rifle w/gl", "bw1", 0));

m_keys.push_back(PlayerStatKey("deaths by carbine", "bw2", 0));

m_keys.push_back(PlayerStatKey("deaths by light mg", "bw3", 0));

m_keys.push_back(PlayerStatKey("deaths by sniper rifle", "bw4", 0));

m_keys.push_back(PlayerStatKey("deaths by pistol", "bw5", 0));

m_keys.push_back(PlayerStatKey("deaths by at/aa", "bw6", 0));

m_keys.push_back(PlayerStatKey("deaths by smg", "bw7", 0));

m_keys.push_back(PlayerStatKey("deaths by shotgun", "bw8", 0));

m_keys.push_back(PlayerStatKey("shots with assault rifle", "sw0", 0));

m_keys.push_back(PlayerStatKey("shots with assault rifle w/gl", "sw1", 0));

m_keys.push_back(PlayerStatKey("shots with carbine", "sw2", 0));

m_keys.push_back(PlayerStatKey("shots with light mg", "sw3", 0));

m_keys.push_back(PlayerStatKey("shots with sniper rifle", "sw4", 0));

m_keys.push_back(PlayerStatKey("shots with pistol", "sw5", 0));

m_keys.push_back(PlayerStatKey("shots with at/aa", "sw6", 0));

m_keys.push_back(PlayerStatKey("shots with smg", "sw7", 0));

m_keys.push_back(PlayerStatKey("shots with shotgun", "sw8", 0));

m_keys.push_back(PlayerStatKey("hits with assault rifle", "hw0", 0));

m_keys.push_back(PlayerStatKey("hits with assault rifle w/gl", "hw1", 0));

m_keys.push_back(PlayerStatKey("hits with carbine", "hw2", 0));

m_keys.push_back(PlayerStatKey("hits with light mg", "hw3", 0));

m_keys.push_back(PlayerStatKey("hits with sniper rifle", "hw4", 0));

m_keys.push_back(PlayerStatKey("hits with pistol", "hw5", 0));

m_keys.push_back(PlayerStatKey("hits with at/aa", "hw6", 0));

m_keys.push_back(PlayerStatKey("hits with smg", "hw7", 0));

m_keys.push_back(PlayerStatKey("hits with shotgun", "hw8", 0));

m_keys.push_back(PlayerStatKey("time with knife", "te0", 0));

m_keys.push_back(PlayerStatKey("time with C4", "te1", 0));

m_keys.push_back(PlayerStatKey("time with claymore", "te2", 0));

m_keys.push_back(PlayerStatKey("time with handgrenade", "te3", 0));

m_keys.push_back(PlayerStatKey("time with shockpaddles", "te4", 0));

m_keys.push_back(PlayerStatKey("time with AT mine", "te5", 0));

m_keys.push_back(PlayerStatKey("time with tactical", "te6", 0));

m_keys.push_back(PlayerStatKey("time with grappling hook", "te7", 0));

m_keys.push_back(PlayerStatKey("time with zip line", "te8", 0));

m_keys.push_back(PlayerStatKey("kills with knife", "ke0", 0));

m_keys.push_back(PlayerStatKey("kills with C4", "ke1", 0));

m_keys.push_back(PlayerStatKey("kills with claymore", "ke2", 0));

m_keys.push_back(PlayerStatKey("kills with handgrenade", "ke3", 0));

m_keys.push_back(PlayerStatKey("kills with shockpaddles", "ke4", 0));

m_keys.push_back(PlayerStatKey("kills with AT mine", "ke5", 0));

m_keys.push_back(PlayerStatKey("kills with tactical", "ke6", 0));

m_keys.push_back(PlayerStatKey("kills with grappling hook", "ke7", 0));

m_keys.push_back(PlayerStatKey("kills with zip line", "ke8", 0));

m_keys.push_back(PlayerStatKey("killed by knife", "be0", 0));

m_keys.push_back(PlayerStatKey("killed by C4", "be1", 0));

m_keys.push_back(PlayerStatKey("killed by claymore", "be2", 0));

m_keys.push_back(PlayerStatKey("killed by handgrenade", "be3", 0));

m_keys.push_back(PlayerStatKey("killed by shockpaddles", "be4", 0));

m_keys.push_back(PlayerStatKey("killed by AT mine", "be5", 0));

m_keys.push_back(PlayerStatKey("killed by zip line", "be8", 0));

m_keys.push_back(PlayerStatKey("deployed tactical", "de6", 0));

m_keys.push_back(PlayerStatKey("deployed grappling hook", "de7", 0));

m_keys.push_back(PlayerStatKey("deployed zip line", "de8", 0));

m_keys.push_back(PlayerStatKey("cp capture", "cpc", 0));

m_keys.push_back(PlayerStatKey("cp assist", "cpa", 0));

m_keys.push_back(PlayerStatKey("cp defened", "cpd", 0));

m_keys.push_back(PlayerStatKey("kill assist", "ka", 0));

m_keys.push_back(PlayerStatKey("heal", "he", 0));

m_keys.push_back(PlayerStatKey("revive", "riv", 0));

m_keys.push_back(PlayerStatKey("resupply", "rsp", 0));

m_keys.push_back(PlayerStatKey("target enemy", "tre", 0));

m_keys.push_back(PlayerStatKey("driver special", "drs", 0));

m_keys.push_back(PlayerStatKey("driver kill assist", "drka", 0));

m_keys.push_back(PlayerStatKey("team kill", "tmkl", 0));

m_keys.push_back(PlayerStatKey("team damage", "tmdg", 0));

m_keys.push_back(PlayerStatKey("team vehicle damage", "tmvd", 0));

m_keys.push_back(PlayerStatKey("suicide", "su", 0));

m_keys.push_back(PlayerStatKey("kill streak", "ks", 0));

m_keys.push_back(PlayerStatKey("death streak", "ds", 0));

m_keys.push_back(PlayerStatKey("my victim name", "mvns", 0));

m_keys.push_back(PlayerStatKey("my victim kills", "mvks", 0));

m_keys.push_back(PlayerStatKey("victimized me name", "vmns", 0));

m_keys.push_back(PlayerStatKey("victimized me kills", "vmks", 0));


s18 = "&getarg=";
for (unsigned int i = 0; i < m_keys.size() - 1; i++) {
    s18 += m_keys[i].s8;
    s18 += ",";
}
s18 += m_keys[m_keys.size() - 1].s8;

}

} }
