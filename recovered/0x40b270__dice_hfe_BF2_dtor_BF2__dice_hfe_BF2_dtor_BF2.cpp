// FUNCTION: BF2 0x40b270
namespace dice { namespace hfe {
class BF2Log {
public:
    ~BF2Log();
};
class BF2 {
public:
    ~BF2();
};
BF2::~BF2() { ((BF2Log*)this)->~BF2Log(); }
} }
// REVERSED_FUNCTION: dice_hfe_BF2_dtor_BF2 (0x40b270)