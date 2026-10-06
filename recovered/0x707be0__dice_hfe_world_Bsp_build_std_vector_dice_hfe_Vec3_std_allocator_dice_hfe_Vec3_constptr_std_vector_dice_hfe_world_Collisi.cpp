// FUNCTION: BF2 0x707be0
#include <vector>

namespace dice { namespace hfe {

struct Vec3;

namespace world {

struct CollisionFace;

class BspV8 {
public:
    BspV8();
    bool build(const std::vector<Vec3>* v, const std::vector<CollisionFace>* f, int i);
    char _pad[0x70];
};

class Bsp {
public:
    bool build(const std::vector<Vec3>* v, const std::vector<CollisionFace>* f, int i);

    char _pad[0x78];
    BspV8* m_bspV8;
};

bool Bsp::build(const std::vector<Vec3>* v, const std::vector<CollisionFace>* f, int i)
{
    if (!m_bspV8) {
        m_bspV8 = new BspV8();
        return m_bspV8->build(v, f, i);
    }
    return true;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_Bsp_build_std_vector_dice_hfe_Vec3_std_allocator_dice_hfe_Vec3_constptr_std_vector_dice_hfe_world_CollisionFace_std_allocator_dice_hfe_world_CollisionFace_constptr_int (0x707be0)
