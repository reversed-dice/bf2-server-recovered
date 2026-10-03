// FUNCTION: BF2 0x46b920
namespace dice { namespace hfe {

static unsigned char s_registeredKeys;

class GameSpyBackend {
public:
    static void registerKeys();
};

void qr2_register_keyA(unsigned int, const char*);

void GameSpyBackend::registerKeys() {
    if (s_registeredKeys) return;
    qr2_register_keyA(0x33, "bf2_dedicated");
    qr2_register_keyA(0x34, "bf2_ranked");
    qr2_register_keyA(0x35, "bf2_anticheat");
    qr2_register_keyA(0x36, "bf2_os");
    qr2_register_keyA(0x37, "bf2_autorec");
    qr2_register_keyA(0x38, "bf2_d_idx");
    qr2_register_keyA(0x39, "bf2_d_dl");
    qr2_register_keyA(0x3a, "bf2_voip");
    qr2_register_keyA(0x3b, "bf2_autobalanced");
    qr2_register_keyA(0x3c, "bf2_friendlyfire");
    qr2_register_keyA(0x3d, "bf2_tkmode");
    qr2_register_keyA(0x3e, "bf2_startdelay");
    qr2_register_keyA(0x3f, "bf2_spawntime");
    qr2_register_keyA(0x40, "bf2_sponsortext");
    qr2_register_keyA(0x41, "bf2_sponsorlogo_url");
    qr2_register_keyA(0x42, "bf2_scorelimit");
    qr2_register_keyA(0x43, "bf2_ticketratio");
    qr2_register_keyA(0x44, "bf2_teamratio");
    qr2_register_keyA(0x4f, "bf2_coopbotratio");
    qr2_register_keyA(0x50, "bf2_coopbotcount");
    qr2_register_keyA(0x51, "bf2_coopbotdiff");
    qr2_register_keyA(0x52, "bf2_novehicles");
    qr2_register_keyA(0x45, "bf2_team1");
    qr2_register_keyA(0x46, "bf2_team2");
    qr2_register_keyA(0x47, "bf2_bots");
    qr2_register_keyA(0x48, "bf2_pure");
    qr2_register_keyA(0x49, "bf2_mapsize");
    qr2_register_keyA(0x4a, "bf2_globalunlocks");
    qr2_register_keyA(0x4b, "");
    qr2_register_keyA(0x4c, "bf2_communitylogo_url");
    qr2_register_keyA(0x4d, "bf2_plasma");
    qr2_register_keyA(0x4e, "bf2_reservedslots");
    s_registeredKeys = 1;
}

} }
// REVERSED_FUNCTION: dice_hfe_GameSpyBackend::registerKeys (0x46b920)