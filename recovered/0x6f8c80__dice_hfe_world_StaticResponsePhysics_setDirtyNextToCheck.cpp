// FUNCTION: BF2 0x6f8c80
namespace dice {
namespace hfe {
namespace world {

class StaticResponsePhysics {
public:
    virtual ~StaticResponsePhysics();
#define PAD_V(n) virtual void pad_##n();
    PAD_V(1) PAD_V(2) PAD_V(3) PAD_V(4) PAD_V(5) PAD_V(6) PAD_V(7) PAD_V(8)
    PAD_V(9) PAD_V(10) PAD_V(11) PAD_V(12) PAD_V(13) PAD_V(14) PAD_V(15) PAD_V(16)
    PAD_V(17) PAD_V(18) PAD_V(19) PAD_V(20) PAD_V(21) PAD_V(22) PAD_V(23)
    virtual StaticResponsePhysics* getNextToCheck();
    virtual void pad_26();
    virtual void clearNextToCheck();

    char pad[0x34 - 8];
    bool m_dirty;

    virtual void setDirtyNextToCheck();
};

void StaticResponsePhysics::setDirtyNextToCheck() {
    if (!m_dirty) {
        StaticResponsePhysics* cur = this;
        while (cur != 0) {
            StaticResponsePhysics* next = cur->getNextToCheck();
            cur->clearNextToCheck();
            cur = next;
        }
    }
}

}
}
}
