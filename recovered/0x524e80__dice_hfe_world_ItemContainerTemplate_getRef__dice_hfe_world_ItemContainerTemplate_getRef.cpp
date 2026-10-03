// FUNCTION: BF2 0x524e80
namespace dice { namespace hfe { namespace world {

class ItemContainerTemplate {
public:
    int getRef();
};

int ItemContainerTemplate::getRef() {
    return *(int*)((char*)this + 0x200);
}

} } }
