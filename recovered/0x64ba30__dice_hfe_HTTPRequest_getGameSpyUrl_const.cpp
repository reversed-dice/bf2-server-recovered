// FUNCTION: BF2 0x64ba30
// HTTPRequest getGameSpyUrl 0x64ba30 — return-by-value std::string
#include <string>
std::string getGameSpyUrl_64ba30() {
    std::string r;
    r.assign("http://BF2Web.gamespy.com/ASP/", 30);
    std::string tmp("BF2Web.gamespy.com");
    return r;
}
// REVERSED_FUNCTION: dice_hfe_HTTPRequest_getGameSpyUrl_const (0x64ba30)
