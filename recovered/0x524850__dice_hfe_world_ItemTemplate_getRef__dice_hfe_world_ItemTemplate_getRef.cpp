// FUNCTION: BF2 0x524850
namespace dice { namespace hfe { namespace world {

class ItemTemplate {
public:
    int getRef();
};

int ItemTemplate::getRef() {
    return *(int*)((char*)this + 0x200);
}

} } }
