// FUNCTION: BF2 0x64bc00
#include <string>
#include <string.h>

namespace dice { namespace hfe {

enum GHTTPResult { GHTTPResult_placeholder };

class IGetCallback {
public:
    virtual void _v0();
    virtual void _v1();
    virtual void onResult(std::string const& s);
    virtual void onError(std::string const& s);
};

std::string getErrorString(GHTTPResult r);

int cbGetCallback(int n, GHTTPResult r, char* p, int len, void* ctx)
{
    if (ctx) {
        IGetCallback* cb = (IGetCallback*)ctx;
        if (r == 0) {
            std::string s;
            if (p)
                s.assign(p, strlen(p));
            cb->onResult(s);
        } else {
            cb->onError(getErrorString(r));
        }
    }
    return 1;
}

} }
