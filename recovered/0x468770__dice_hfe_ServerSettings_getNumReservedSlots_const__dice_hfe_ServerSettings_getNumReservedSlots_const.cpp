// FUNCTION: BF2 0x468770
namespace dice { namespace hfe {

class ServerSettings {
public:
    int getNumReservedSlots() const;
};

int ServerSettings::getNumReservedSlots() const {
    return *(int*)((char*)this + 0x14c);
}

} }
