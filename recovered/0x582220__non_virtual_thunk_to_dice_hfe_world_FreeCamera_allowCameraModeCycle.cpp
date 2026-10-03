// FUNCTION: BF2 0x582220
namespace dice { namespace hfe {
struct Base1 { virtual void fb1(); unsigned char pad[560]; virtual ~Base1(); };
struct IEv { virtual void target(); virtual ~IEv(); };
struct GM : Base1, IEv {
    void target();
    virtual ~GM();
};
void GM::target() {}
GM::~GM() {}
} }
