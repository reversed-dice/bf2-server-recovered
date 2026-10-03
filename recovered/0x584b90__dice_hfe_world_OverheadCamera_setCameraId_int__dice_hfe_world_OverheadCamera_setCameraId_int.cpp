// FUNCTION: BF2 0x584b90
namespace dice { namespace hfe { namespace world {

class OverheadCamera {
public:
    void setCameraId(int id);

private:
    char m_pad0x000[0x288];   // offset 0x000
    int m_cameraId;            // offset 0x288
};

void OverheadCamera::setCameraId(int id) {
    m_cameraId = id;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_OverheadCamera_setCameraId_int (0x584b90)