// FUNCTION: BF2 0x441970
class dice_hfe_GameEventManager {
public:
    int getStreamManagerId() const;
private:
    char _pad[0x120];
    int m_streamManagerId; // at offset 0x120
};

int dice_hfe_GameEventManager::getStreamManagerId() const {
    return m_streamManagerId;
}