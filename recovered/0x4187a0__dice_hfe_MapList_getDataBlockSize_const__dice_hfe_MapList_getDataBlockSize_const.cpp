// FUNCTION: BF2 0x4187a0
namespace dice { namespace hfe {

class MapList {
    void assertDataBlockValid() const;

public:
    unsigned int getDataBlockSize() const;

private:
    unsigned char _pad[0x64];
    unsigned int m_dataBlockSize;
};

unsigned int MapList::getDataBlockSize() const {
    assertDataBlockValid();
    return m_dataBlockSize;
}

} }
// REVERSED_FUNCTION: dice_hfe_MapList_getDataBlockSize_const (0x4187a0)