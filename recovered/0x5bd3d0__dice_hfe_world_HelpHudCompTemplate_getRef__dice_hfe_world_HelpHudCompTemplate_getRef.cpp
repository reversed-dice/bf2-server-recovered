// FUNCTION: BF2 0x5bd3d0
namespace dice { namespace hfe { namespace world {

class HelpHudCompTemplate {
public:
    int getRef();
};

int HelpHudCompTemplate::getRef() {
    return *(int*)((char*)this + 0x10);
}

} } }
