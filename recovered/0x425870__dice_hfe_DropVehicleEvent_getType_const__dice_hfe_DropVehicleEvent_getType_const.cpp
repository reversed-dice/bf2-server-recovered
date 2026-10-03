// FUNCTION: BF2 0x425870
namespace dice {
namespace hfe {

class DropVehicleEvent {
public:
    unsigned int getType() const;
};

unsigned int DropVehicleEvent::getType() const
{
    return 0x33;
}

} // namespace hfe
} // namespace dice