// FUNCTION: BF2 0x43baf0
namespace dice { namespace hfe {

class ServerConnection {
public:
    void sub_436d90();
    void sub_4085b8();
    ~ServerConnection();
};

ServerConnection::~ServerConnection() {
    *reinterpret_cast<void**>(this) = reinterpret_cast<void*>(0xb2f350);
    this->sub_436d90();
    this->sub_4085b8();
}

} }
// REVERSED_FUNCTION: dice_hfe_ServerConnection_dtor_ServerConnection (0x43baf0)