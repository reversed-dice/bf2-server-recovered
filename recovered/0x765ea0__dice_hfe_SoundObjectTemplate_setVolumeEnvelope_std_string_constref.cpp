// FUNCTION: BF2 0x765ea0
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
#include <sstream>
#include <string>
#include <vector>

namespace dice { namespace hfe {

struct SoundEnvelopePoint {
    float m_f0;
    float m_f1;
    float m_f2;
};

struct SoundEnvelopeHeader {
    float        m_f0;
    float        m_f1;
    float        m_f2;
    float        m_f3;
    bool         m_b;
    unsigned int m_u;
};

std::istream& operator>>(std::istream& is, SoundEnvelopeHeader& h);
std::istream& operator>>(std::istream& is, SoundEnvelopePoint& p);

class ISoundTemplate {
public:
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void v09();
    virtual void setVolumeEnvelope(float f0, float f1, float f2, float f3,
                                   bool b, unsigned int n,
                                   SoundEnvelopePoint const* points);
};

class SoundObjectTemplate {
public:
    char            _pad0[0x78];
    ISoundTemplate* m_sound;        // +0x78
    void setVolumeEnvelope(std::string const& value);
    void pad1(std::string const& value);
    void pad2(std::string const& value);
};

void SoundObjectTemplate::pad1(std::string const& value)
{
    std::istringstream iss(value, std::ios_base::in);
    SoundEnvelopeHeader hdr = SoundEnvelopeHeader();
    iss >> hdr;
    if (hdr.m_u == 0) {
        m_sound->setVolumeEnvelope(hdr.m_f0, hdr.m_f1, hdr.m_f2, hdr.m_f3,
                                   hdr.m_b, 0, 0);
    } else {
        std::vector<SoundEnvelopePoint> points;
        points.insert(points.begin(), hdr.m_u, SoundEnvelopePoint());
        for (unsigned int i = 0; i < points.size(); ++i)
            iss >> points[i];
        if (!iss.good())
            return;
        m_sound->setVolumeEnvelope(hdr.m_f0, hdr.m_f1, hdr.m_f2, hdr.m_f3,
                                   hdr.m_b, hdr.m_u, &points[0]);
    }
}

void SoundObjectTemplate::pad2(std::string const& value)
{
    std::istringstream iss(value, std::ios_base::in);
    SoundEnvelopeHeader hdr = SoundEnvelopeHeader();
    iss >> hdr;
    if (hdr.m_u == 0) {
        m_sound->setVolumeEnvelope(hdr.m_f0, hdr.m_f1, hdr.m_f2, hdr.m_f3,
                                   hdr.m_b, 0, 0);
    } else {
        std::vector<SoundEnvelopePoint> points;
        points.insert(points.begin(), hdr.m_u, SoundEnvelopePoint());
        for (unsigned int i = 0; i < points.size(); ++i)
            iss >> points[i];
        if (!iss.good())
            return;
        m_sound->setVolumeEnvelope(hdr.m_f0, hdr.m_f1, hdr.m_f2, hdr.m_f3,
                                   hdr.m_b, hdr.m_u, &points[0]);
    }
}

void SoundObjectTemplate::setVolumeEnvelope(std::string const& value)
{
    std::istringstream iss(value, std::ios_base::in);
    SoundEnvelopeHeader hdr = SoundEnvelopeHeader();
    iss >> hdr;
    if (hdr.m_u == 0) {
        m_sound->setVolumeEnvelope(hdr.m_f0, hdr.m_f1, hdr.m_f2, hdr.m_f3,
                                   hdr.m_b, 0, 0);
    } else {
        std::vector<SoundEnvelopePoint> points;
        points.insert(points.begin(), hdr.m_u, SoundEnvelopePoint());
        for (unsigned int i = 0; i < points.size(); ++i)
            iss >> points[i];
        if (!iss.good())
            return;
        m_sound->setVolumeEnvelope(hdr.m_f0, hdr.m_f1, hdr.m_f2, hdr.m_f3,
                                   hdr.m_b, hdr.m_u, &points[0]);
    }
}

} }
