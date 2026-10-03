// FUNCTION: BF2 0x40b290
namespace dice { namespace hfe {
class BF2 {
public:
    void* core;
    bool run();
};
extern bool func_4daa10(void*);
bool BF2::run() { return func_4daa10(core); }
}
}

// REVERSED_FUNCTION: dice_hfe_BF2_run (0x40b290)
