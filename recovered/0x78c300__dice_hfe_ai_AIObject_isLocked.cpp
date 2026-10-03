// FUNCTION: BF2 0x78c300
// AIObject::isLocked() - try forcing branch-based return
extern "C" {
    extern long dice_hfe_ai_CommonSingletonServer_m_iaiGame;
}

class AIObject {
public:
    char _pad[0x10];
    int m_locked;
};

int AIObject_isLocked(AIObject* self) {
    if (self->m_locked != 0) {
        return 1;
    }
    long iaiGame = dice_hfe_ai_CommonSingletonServer_m_iaiGame;
    char result = (*(char(**)(long))(*(long*)iaiGame + 0xd0))(iaiGame);
    if (__builtin_expect(result != 0, 1)) {
        return 1;
    }
    return 0;
}
