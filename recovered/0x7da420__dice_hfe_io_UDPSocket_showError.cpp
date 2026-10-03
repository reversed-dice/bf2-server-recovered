// FUNCTION: BF2 0x7da420
// UDPSocket::showError 0x7da420 — call singleton + store 0
namespace dice { namespace hfe { namespace io {

extern int* udp_err();

void showError() {
    int* e = udp_err();
    *e = 0;
}

}}}
