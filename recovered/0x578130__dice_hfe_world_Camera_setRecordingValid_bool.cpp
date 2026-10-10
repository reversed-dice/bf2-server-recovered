// FUNCTION: BF2 0x578130
#include <list>

namespace dice { namespace hfe { namespace world {

class Camera {
public:
    class Frame {
    public:
        ~Frame();
    };
    void setRecordingValid(bool valid);
private:
    char _pad0[0x2ec];
    bool m_recordingValid;
    char _pad1[3];
    std::list<Frame> m_frames;
};

void Camera::setRecordingValid(bool valid)
{
    m_recordingValid = valid;
    if (valid) {
        m_frames.clear();
    }
}

} } }
