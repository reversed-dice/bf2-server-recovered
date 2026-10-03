// FUNCTION: BF2 0x707930
namespace dice { namespace hfe {
struct Base1 { virtual void fb1(); unsigned char pad[232]; virtual ~Base1(); };
struct IEv { virtual void target(); virtual ~IEv(); };
struct GM : Base1, IEv {
    void target();
    virtual ~GM();
};
void GM::target() {}
GM::~GM() {}
} }
