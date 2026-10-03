// FUNCTION: BF2 0x470510
namespace dice { namespace hfe {

class DistributedLightRenderer {
public:
    int getRef();
};

int DistributedLightRenderer::getRef() {
    return *(int*)((char*)this + 0x8);
}

} }
