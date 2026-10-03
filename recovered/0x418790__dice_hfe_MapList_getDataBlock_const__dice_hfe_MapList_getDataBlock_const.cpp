// FUNCTION: BF2 0x418790
namespace dice { namespace hfe {

class MapList {
public:
    void assertDataBlockValid() const;
    void* getDataBlock() const;

private:
    unsigned char pad_[0x68];
    void* m_dataBlock;
};

void* MapList::getDataBlock() const {
    assertDataBlockValid();
    return m_dataBlock;
}

} }  // namespace
// REVERSED_FUNCTION: dice_hfe_MapList_getDataBlock_const (0x418790)