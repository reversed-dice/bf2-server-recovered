// FUNCTION: BF2 0x521b90
namespace dice { namespace hfe {
struct Base1 { virtual void fb1(); unsigned char pad[568]; virtual ~Base1(); };
struct IEv { virtual void target(); virtual ~IEv(); };
struct GM : Base1, IEv {
    void target();
    virtual ~GM();
};
void GM::target() {}
GM::~GM() {}
} }
