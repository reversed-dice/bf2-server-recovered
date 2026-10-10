// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x53b750
#include <string>

namespace dice { namespace hfe { namespace world {

struct Mat4 {
    float m[16];
    Mat4() {
        float* p = m;
        long i = 3;
        do {
            --i;
            p[0] = 0.0f;
            p[1] = 0.0f;
            p[2] = 0.0f;
            p[3] = 0.0f;
            p += 4;
        } while (i != -1);
        m[15] = 1.0f;
        m[10] = 1.0f;
        m[5] = 1.0f;
        m[0] = 1.0f;
    }
};

class PlayerControlObjectTemplate {
public:
    struct SeatTemplateInformation {
        std::string m_name;
        Mat4 m_mat;
        void* m_ptr;
        int m_a;
        int m_b;

        SeatTemplateInformation();
    };
};

PlayerControlObjectTemplate::SeatTemplateInformation::SeatTemplateInformation()
    : m_name(), m_mat(), m_ptr(0), m_a(0), m_b(0)
{
}

} } }
