// FUNCTION: BF2 0x470510
namespace dice { namespace hfe {
class DistributedLightRenderer {
public:
    char _pad[0x8];
    int field;
    int getRef() const;
};
int DistributedLightRenderer::getRef() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_DistributedLightRenderer_getRef (0x470510)
