// FUNCTION: BF2 0x5be080
namespace dice { namespace hfe { namespace world {

class PostProcessCompTemplate {
public:
    int getRef();
};

int PostProcessCompTemplate::getRef() {
    return *(int*)((char*)this + 0x10);
}

} } }
