// FUNCTION: BF2 0x6ba970
namespace dice { namespace anim {

struct BoneInfo {
    char _pad[0x48];
    int m_index;
    char _pad2[0x58 - 0x48 - 4];
};

class RagDollTemplate {
public:
    int findBoneIndex(int i) const;

    char _pad[0x20];
    BoneInfo* m_bones;
};

int RagDollTemplate::findBoneIndex(int i) const
{
    return m_bones[i].m_index;
}

} }
// REVERSED_FUNCTION: dice_anim_RagDollTemplate_findBoneIndex_int (0x6ba970)
