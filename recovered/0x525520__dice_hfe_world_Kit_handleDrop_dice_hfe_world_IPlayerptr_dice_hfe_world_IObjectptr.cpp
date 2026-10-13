// BF2_FLAGS: -fno-reorder-blocks
// FUNCTION: BF2 0x525520
#include <string>

namespace dice { namespace hfe { namespace world {

void setGeometry(void* object, std::string const& geometry);

class Kit {
public:
    void updateGeometry(bool force);
    void handleDrop(void* player, void* object);
};

void Kit::handleDrop(void* player, void* object)
{
    ((void (*)(void*, int, int)) (*(void***) this)[24]) (this, 0, 1);

    if (*(void**) ((char*) this + 0x50) != 0)
        ((void (*)(void*, void*)) (*(void***) object)[62]) (object, this);

    if (*(void**) ((char*) this + 0x50) != 0)
        abort();

    std::string& geometry =
        ((std::string& (*)(void*)) (*(void***) (*(void**) ((char*) this + 0x28)))[61]) (
            *(void**) ((char*) this + 0x28));

    setGeometry(this, geometry);

    int value = *(int*) ((char*) (*(void**) ((char*) this + 0x2d8)) + 0x218);
    *(int*) ((char*) this + 0x2cc) = value;
    *(int*) ((char*) this + 0x2c8) = value;

    updateGeometry(false);

    ((void (*)(void*)) (*(void***) this)[102]) (this);

    return ((void (*)(void*, int)) (*(void***) this)[98]) (this, -1);
}

} } }
