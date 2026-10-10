// FUNCTION: BF2 0x76d580
// Target: 0x76d580 dice::hfe::ai::BFCollisionHandler::reset()
// Compiler: gcc-4.0
// Flags: -O2

namespace dice { namespace hfe { namespace ai {

class BFCollisionHandler {
public:
    virtual ~BFCollisionHandler();
    virtual void dummy2();
    virtual void dummy3();
    virtual void dummy4();
    virtual void dummy5();
    virtual void dummy6();
    virtual void dummy7();
    virtual void dummy8();
    virtual void dummy9();
    virtual void dummy10();
    virtual void dummy11();
    virtual void dummy12();
    virtual void reset();
    virtual void dummy14();
    virtual void dummy15();
    virtual void removeBotProjectile(int);

    int m_count;
    char _pad[4];
    void** m_contacts;
};


void pad0(BFCollisionHandler* h) {
    for (int i = 0; i < h->m_count; ++i) {
        h->removeBotProjectile(i);
    }
}

void pad1(BFCollisionHandler* h) {
    for (int i = 0; i < h->m_count; ++i) {
        h->removeBotProjectile(i);
    }
}

void pad2(BFCollisionHandler* h) {
    for (int i = 0; i < h->m_count; ++i) {
        h->removeBotProjectile(i);
    }
}


void BFCollisionHandler::reset() {
    for (int i = 0; i < m_count; ++i) {
        removeBotProjectile(i);
    }
}

} } }
