// FUNCTION: BF2 0x524f90
namespace dice { namespace hfe { namespace world {

class KitTemplate {
public:
    int getKitType() const;
};

int KitTemplate::getKitType() const {
    return *(int*)((char*)this + 0x220);
}

} } }
