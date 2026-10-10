// FUNCTION: BF2 0x64bb50
#include <string>

namespace dice { namespace hfe {

enum GHTTPResult { G_OK = 0 };

class IGFcb {
public:
    virtual void a0();
    virtual void a1();
    virtual void a2(std::string const& s);
    virtual void a3(std::string const& s);
    virtual void a4();
    virtual void a5(std::string const& s);
    virtual void a6(std::string const& s);
};

std::string getErrorString(GHTTPResult r);

int cbGetFileCallback(int n, GHTTPResult r, char* p, int len, void* pctx)
{
    if (pctx) {
        IGFcb* icb = (IGFcb*)pctx;
        if (r == 0) {
            icb->a4();
            return 1;
        }
        icb->a3(getErrorString(r));
    }
    return 1;
}

} }
