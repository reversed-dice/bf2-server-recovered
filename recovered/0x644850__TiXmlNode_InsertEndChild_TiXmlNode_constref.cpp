// FUNCTION: BF2 0x644850
namespace dice { namespace hfe {
extern void* LinkEndChild_0x644810(void* self, void* arg2);
struct V6_0x644850 {
    virtual void s000();
    virtual void s001();
    virtual void s002();
    virtual void s003();
    virtual void s004();
    virtual void s005();
    virtual void* Clone();
};
void* InsertEndChild_0x644850(void* self, void* arg2) {
    void* clone = ((V6_0x644850*)arg2)->Clone();
    if (!clone)
        return 0;
    return LinkEndChild_0x644810(self, clone);
}
} }
