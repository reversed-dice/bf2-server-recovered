// FUNCTION: BF2 0x707a60
namespace dice {
namespace hfe {
namespace world {

class BspNode {
public:
    class Face {
        float m_v[6];
    };
};

class BspV8 {
public:
    BspNode::Face const* getFaceVector() const;
};

class Bsp {
public:
    char _pad0[0x78];
    BspV8* m_pBspV8;

    int getFaceIndex(BspNode::Face const* face) const;
};

int Bsp::getFaceIndex(BspNode::Face const* face) const
{
    BspNode::Face const* vec = m_pBspV8->getFaceVector();
    return face - vec;
}

} // namespace world
} // namespace hfe
} // namespace dice
// REVERSED_FUNCTION: dice_hfe_world_Bsp_getFaceIndex_dice_hfe_world_BspNode_Face_constptr_const (0x707a60)
