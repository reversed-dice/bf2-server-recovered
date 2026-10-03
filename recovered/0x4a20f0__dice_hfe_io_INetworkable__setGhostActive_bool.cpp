// FUNCTION: BF2 0x4a20f0
class dice_hfe_io_INetworkable {
public:
    void setGhostActive_bool(unsigned char);
};

void dice_hfe_io_INetworkable::setGhostActive_bool(unsigned char value) {
    *(unsigned char*)((char*)this + 0x18) = value;
}
