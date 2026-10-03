// FUNCTION: BF2 0x7dc390
namespace dice { namespace hfe { namespace world {
class Release_0x7dc390 {
public:
    virtual void slot00();
    virtual void slot01();
    virtual void slot02();
    virtual void slot03();
    virtual void slot04();
    virtual void slot05();
    virtual void slot06();
    virtual void slot07();
    virtual void slot08();
    virtual void slot09();
    virtual void slot0a();
    virtual void slot0b();
    virtual void slot0c();
    virtual void slot0d();
    virtual void slot0e();
    virtual void slot0f();
    virtual void slot10();
    virtual void slot88();
    unsigned char _pad[0x10];
    unsigned int m_ref;
    unsigned int release() { unsigned int r = --m_ref; if (r == 0) { if (this != 0) { slot88(); } } return r; }
};
unsigned int release_0x7dc390(Release_0x7dc390* p) { return p->release(); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_BufferedStream_release (0x7dc390)
