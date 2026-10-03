// FUNCTION: BF2 0x4922e0
namespace dice { namespace hfe { namespace world { namespace {

class ObjectFlagPredicator {
public:
    virtual ~ObjectFlagPredicator() {}
    virtual void _d1() {}
    virtual void _d2() {}
    virtual void _d3() {}
    virtual void _d4() {}
    virtual void _d5() {}
    virtual void _d6() {}
    virtual void _d7() {}
    virtual ObjectFlagPredicator* getObj() = 0;
    virtual void _d10() {}
    virtual void _d11() {}
    virtual void _d12() {}
    virtual void _d13() {}
    virtual void _d14() {}
    virtual void _d15() {}
    virtual void _d16() {}
    virtual void _d17() {}
    virtual void _d18() {}
    virtual void _d19() {}
    virtual void _d20() {}
    virtual void _d21() {}
    virtual void _d22() {}
    virtual void _d23() {}
    virtual void _d24() {}
    virtual unsigned char checkFlag() = 0;
};

class FlagIgnoreWaterPredicator : public ObjectFlagPredicator {
public:
    unsigned char predicateSurface(int);
};

unsigned char FlagIgnoreWaterPredicator::predicateSurface(int) {
    return reinterpret_cast<ObjectFlagPredicator*>(
        *reinterpret_cast<void**>(0x010c2800)
    )->getObj()->checkFlag() ^ 1;
}

} } } }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_FlagIgnoreWaterPredicator::predicateSurface_int (0x4922e0)