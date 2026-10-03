// FUNCTION: BF2 0x436460
namespace dice { namespace hfe {

class ClientConnection {
public:
    // pad to match layout in binary
    char _pad[0x1e4];
    unsigned char m_contentValid; // offset 0x1e4

    // setter declaration
    void setContentValid(bool valid);
};

void ClientConnection::setContentValid(bool valid) {
    // direct assignment: should compile to "mov BYTE PTR [RDI+0x1E4], SIL" then "ret"
    m_contentValid = valid;
}

}} // namespace dice::hfe