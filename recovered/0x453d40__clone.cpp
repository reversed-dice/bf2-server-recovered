// FUNCTION: BF2 0x453d40
// Reconstructed from: 0x436260
// Namespace pattern: dice::hfe (nested to satisfy older compilers)
namespace dice {
namespace hfe {
namespace world { class IPlayer; }

class ClientConnection {
public:
    world::IPlayer* getPlayer();

private:
    unsigned char __pad_00[0xb0]; // pad to match layout
    world::IPlayer* m_player;     // at offset 0xb0
};

world::IPlayer* ClientConnection::getPlayer()
{
    return m_player;
}

} // namespace hfe
} // namespace dice