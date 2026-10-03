// FUNCTION: BF2 0x40b260
namespace dice { namespace hfe {

class BF2Engine {
public:
    virtual ~BF2Engine();
};

extern void BF2Engine_shutdown(BF2Engine* engine);

class BF2 {
public:
    BF2Engine* m_engine;
    ~BF2();
};

BF2::~BF2() {
    BF2Engine_shutdown((BF2Engine*)this);
}

} }
// REVERSED_FUNCTION: dice_hfe_BF2_dtor_BF2 (0x40b260)