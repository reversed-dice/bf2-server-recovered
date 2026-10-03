// FUNCTION: BF2 0x516c70
namespace dice { namespace hfe { namespace world {

class DestroyableWindow {
public:
    virtual void _v00();
    virtual void _v01();
    virtual void _v02();
    virtual void _v03();
    virtual void _v04();
    virtual void _v05();
    virtual void _v06();
    virtual void _v07();
    virtual void _v08();
    virtual void _v09();
    virtual void _v10();
    virtual void _v11();
    virtual void _v12();
    virtual void _v13();
    virtual void _v14();
    virtual void _v15();
    virtual void _v16();
    virtual void _v17();
    virtual void _v18();
    virtual void _v19();
    virtual void _v20();
    virtual void _v21();
    virtual void _v22();
    virtual void _v23();
    virtual void _v24();
    virtual void _v25();
    virtual void _v26();
    virtual void _v27();
    virtual void _v28();
    virtual void _v29();
    virtual void _v30();
    virtual void _v31();
    virtual void _v32();
    virtual void _v33();
    virtual void _v34();
    virtual void _v35();
    virtual void _v36();
    virtual void _v37();
    virtual void _v38();
    virtual void _v39();
    virtual void _v40();
    virtual void _v41();
    virtual void _v42();
    virtual void _v43();
    virtual void _v44();
    virtual void _v45();
    virtual void _v46();
    virtual void _v47();
    virtual void _v48();
    virtual void _v49();
    virtual int getType() const;
    unsigned char m_unk_0x46;
    int m_unk_0x22C;
    unsigned char m_unk_0x230;
};

class DestroyableWindowsBundle {
    unsigned char m_pad[0x23C];
    unsigned int m_unk_0x23C;
public:
    void handleChildCollision(DestroyableWindow* child);
    void updateStates(unsigned int state);
};

void DestroyableWindowsBundle::handleChildCollision(DestroyableWindow* child)
{
    int i = child->getType();
    if (i != -1) {
        unsigned int mask = 0xFFFFFFFE;
        mask = (mask << i) | (mask >> (32 - i));
        mask &= m_unk_0x23C;
        m_unk_0x23C = mask;
        updateStates(mask);
    } else {
        updateStates(m_unk_0x23C);
    }
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_DestroyableWindowsBundle::handleChildCollision_dice_hfe_world_DestroyableWindowptr (0x516c70)