// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x707c70
namespace dice { namespace hfe { namespace world {
struct BspNode { unsigned int m_count; char pad[4]; void** m_faces; };
void dice_hfe_world_BspNode_addFace_dice_hfe_world_BspNode_Faceptr(BspNode* self, void* face)
{
    self->m_faces[self->m_count] = face;
    self->m_count = self->m_count + 1;
}
} } }
