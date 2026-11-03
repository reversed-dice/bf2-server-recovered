// FUNCTION: BF2 0x766400
// BF2_FLAGS: -fno-strict-aliasing
#include <sstream>
#include <ostream>
#include <string>
#include <cmath>
#include <cfloat>

namespace dice { namespace hfe {

struct Vec3 {
    float x, y, z;
    // TRICK: 75
    bool isZero() const
    {
        return std::fabs(x) <= FLT_EPSILON && std::fabs(y) <= FLT_EPSILON && std::fabs(z) <= FLT_EPSILON;
    }
};

namespace io {

class IStream {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual unsigned int write(const char* data, unsigned int size);
};

}

class Sound {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual char const* getFilename();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual unsigned int getLoopCount();
    virtual void v8();
    virtual float getVolume();
    virtual void v10();
    virtual void* getVolumeEnvelope(int, int, int, int, int, long);
    virtual void v12();
    virtual void v13();
    virtual float getPitch();
    virtual void v15();
    virtual void* getPitchEnvelope(int, int, int, int, int, long);
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual float getPan();
    virtual void v22();
    virtual float getMinDistance();
    virtual void v24();
    virtual float getHalfVolumeDistance();
    virtual void v26();
    virtual bool getIs3dSound();
    virtual void v28();
    virtual int getStopType();
    virtual void v30();
    virtual float getReverbLevel();
    virtual void v32();
    virtual dice::hfe::Vec3* getPosition();
    virtual void v34();
    virtual dice::hfe::Vec3* getConeDirection();
    virtual void v36();
    virtual float getSoundRadius();
    virtual void v38();
    virtual float getConeInnerAngle();
    virtual void v40();
    virtual float getConeOuterAngle();
    virtual void v42();
    virtual float getConeOuterVolume();
    virtual void v44();
    virtual float getGlobalEffectLevel();
};

namespace world {

class ObjectTemplate {
public:
    bool makeScript(dice::hfe::io::IStream* stream);
};

class SoundObjectTemplate : public ObjectTemplate {
public:
    bool makeScript(dice::hfe::io::IStream* stream);

    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual std::string getFilename();
    virtual void v61();
    virtual std::string getVolumeEnvelope();
    virtual void v63();
    virtual std::string getPitchEnvelope();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void v76();
    virtual void v77();
    virtual void v78();
    virtual void v79();
    virtual int getLowSamples();
    virtual void v81();
    virtual int getMediumSamples();
    virtual void v83();
    virtual dice::hfe::Sound* impl();

    unsigned char _pad[0x70];
    void* m_x78;
};

bool SoundObjectTemplate::makeScript(dice::hfe::io::IStream* stream)
{
    if (m_x78 != 0 && ObjectTemplate::makeScript(stream)) {
        if (impl()->getFilename() != 0) {
            if (*impl()->getFilename() == '\0')
                return true;
        }
        std::ostringstream ss;
        std::string prefix("ObjectTemplate");
        if (getLowSamples() >= 0)
            ss << prefix << ".lowSamples " << getLowSamples() << std::endl;
        if (getMediumSamples() >= 0)
            ss << prefix << ".mediumSamples " << getMediumSamples() << std::endl;
        ss << prefix << ".soundFilename \"" << getFilename() << "\"" << std::endl;
        ss << prefix << ".loopCount " << impl()->getLoopCount() << std::endl;
        ss << prefix << ".is3dSound " << impl()->getIs3dSound() << std::endl;
        ss << prefix << ".stopType " << impl()->getStopType() << std::endl;
        ss << prefix << ".volume " << impl()->getVolume() << std::endl;
        ss << prefix << ".pitch " << impl()->getPitch() << std::endl;
        if (!impl()->getIs3dSound())
            ss << prefix << ".pan " << impl()->getPan() << std::endl;
        ss << prefix << ".reverbLevel " << impl()->getReverbLevel() << std::endl;
        if (impl()->getPitchEnvelope(0, 0, 0, 0, 0, 0) != 0)
            ss << prefix << ".pitchEnvelope " << getPitchEnvelope() << std::endl;
        if (impl()->getVolumeEnvelope(0, 0, 0, 0, 0, 0) != 0)
            ss << prefix << ".volumeEnvelope " << getVolumeEnvelope() << std::endl;
        if (!impl()->getPosition()->isZero()) {
            Vec3* p = impl()->getPosition();
            std::ostream& os = ss << prefix << ".position ";
            os << p->x << '/';
            os << p->y << '/';
            os << p->z << std::endl;
        }
        if (impl()->getMinDistance() != 1.0f)
            ss << prefix << ".minDistance " << impl()->getMinDistance() << std::endl;
        if (impl()->getIs3dSound()) {
            ss << prefix << ".halfVolumeDistance " << impl()->getHalfVolumeDistance() << std::endl;
            if (impl()->getConeInnerAngle() < 360.0f) {
                if (!impl()->getConeDirection()->isZero()) {
                    Vec3* d = impl()->getConeDirection();
                    std::ostream& os = ss << prefix << ".coneDirection ";
                    os << d->x << '/';
                    os << d->y << '/';
                    os << d->z << std::endl;
                }
                ss << prefix << ".coneInnerAngle " << impl()->getConeInnerAngle() << std::endl;
                if (impl()->getConeOuterAngle() != 360.0f)
                    ss << prefix << ".coneOuterAngle " << impl()->getConeOuterAngle() << std::endl;
                if (impl()->getConeOuterVolume() != 1.0f)
                    ss << prefix << ".coneOuterVolume " << impl()->getConeOuterVolume() << std::endl;
            }
        }
        if (impl()->getSoundRadius() > 0.0f)
            ss << prefix << ".soundRadius " << impl()->getSoundRadius() << std::endl;
        if (impl()->getGlobalEffectLevel() != 1.0f)
            ss << prefix << ".globalEffectLevel " << impl()->getGlobalEffectLevel() << std::endl;
        std::string s = ss.str();
        return stream->write(s.c_str(), s.length()) == s.length();
    }
    return false;
}

} } }
