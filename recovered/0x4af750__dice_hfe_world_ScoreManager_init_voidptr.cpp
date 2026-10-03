// FUNCTION: BF2 0x4af750
namespace dice { namespace hfe { namespace world {
class ScoreManager {
    char _pad[0x1E0];
public:
    void* m_unk_0x1E0;
    unsigned int init(void* ptr);
};
unsigned int ScoreManager::init(void* ptr) {
    unsigned int result;
    if (m_unk_0x1E0 == 0) {
        unsigned char* p = new unsigned char[0x290];
        m_unk_0x1E0 = p;
        result = 0;
        if (p != 0) {
            result = 1;
        }
    } else {
        result = 1;
    }
    return result;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_ScoreManager::init_voidptr (0x4af750)