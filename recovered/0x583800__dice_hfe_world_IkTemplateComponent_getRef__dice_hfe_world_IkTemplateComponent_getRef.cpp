// FUNCTION: BF2 0x583800
namespace dice { namespace hfe { namespace world {

class IkTemplateComponent {
public:
    int getRef();
};

int IkTemplateComponent::getRef() {
    return *(int*)((char*)this + 0x10);
}

} } }
