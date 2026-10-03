// FUNCTION: BF2 0x785720
namespace dice { namespace hfe { namespace ai {
struct Vec3f { float x, y, z; };
struct AITemplateCover { char pad[0x30]; Vec3f (*m_30)[3]; };
Vec3f* dice_hfe_ai_AITemplateCover_getPathfindingPlaneCorner(const AITemplateCover* self, int i, int j)
{
    return &self->m_30[i][j];
}
}}}
