// FUNCTION: BF2 0x64bd00
#include <string>
#include <string.h>

namespace dice { namespace hfe {

enum GHTTPResult { GHTTPResult_placeholder };

class IGHTTPCallback {
public:
    virtual void v0();
    virtual void v1();
    virtual void onGetResult(std::string const& s);
    virtual void onGetError(std::string const& s);
    virtual void v4();
    virtual void onPostResult(std::string const& s);
    virtual void onPostError(std::string const& s);
};

std::string getErrorString(GHTTPResult r);

extern char DAT_00bb25f1;

int cbPostCallback(int n, GHTTPResult r, char* p, int len, void* ctx)
{
    if (ctx) {
        IGHTTPCallback* cb = (IGHTTPCallback*)ctx;
        if (r == 0) {
            std::string s(&DAT_00bb25f1);
            if (p)
                s.assign(p, strlen(p));
            cb->onPostResult(s);
        } else {
            cb->onPostError(getErrorString(r));
        }
    }
    return 1;
}

} }
