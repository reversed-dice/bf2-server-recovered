// FUNCTION: BF2 0x516390
namespace dice { namespace hfe { namespace world {

class DestroyableWindow {
public:
    int getRef();
};

int DestroyableWindow::getRef() {
    return *(int*)((char*)this + 0x22c);
}

} } }
