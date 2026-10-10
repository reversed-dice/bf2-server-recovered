// FUNCTION: BF2 0x60b330
namespace dice {
namespace hfe {
namespace world {

enum FireState {
    FS_0,
    FS_1,
    FS_2
};

class TargetObject {
public:
    virtual ~TargetObject();
#define PADV(n) virtual void v_##n();
    PADV(1) PADV(2) PADV(3) PADV(4) PADV(5) PADV(6) PADV(7) PADV(8) PADV(9) PADV(10)
    virtual void slot_60(int a);
    virtual void slot_68(char a);
    virtual void slot_70(int a);
};

class ThrownAnimationComp {
public:
    virtual ~ThrownAnimationComp();
    char pad[0x28 - 8];
    TargetObject* m_target;
    char pad2[0x3c - 0x28 - 8];
    unsigned char m_enabled;

    virtual void updateOnFiring(FireState state);
};

void ThrownAnimationComp::updateOnFiring(FireState state) {
    if (__builtin_expect(!m_target, 0)) {
        return;
    }
    if (state == FS_2) {
        if (!m_enabled) {
            m_target->slot_68(0x10);
        }
        m_enabled = 1;
    }
    if (!m_enabled) {
        m_target->slot_60(8);
    } else {
        m_target->slot_70(8);
    }
}

}
}
}
