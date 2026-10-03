// FUNCTION: BF2 0x46cef0
namespace dice { namespace hfe {

class Authenticator;

class MatchMakingServer {
public:
    Authenticator* getAuthenticator() const;
};

Authenticator* MatchMakingServer::getAuthenticator() const {
    return (Authenticator*)((*(void***)this)[1]);
}

} }
// REVERSED_FUNCTION: dice_hfe_MatchMakingServer_getAuthenticator_const (0x46cef0)