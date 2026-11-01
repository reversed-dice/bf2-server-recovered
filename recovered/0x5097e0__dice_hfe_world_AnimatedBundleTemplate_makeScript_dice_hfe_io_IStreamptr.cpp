// FUNCTION: BF2 0x5097e0
// BF2_FLAGS: -fno-strict-aliasing
#include <sstream>
#include <string>
#include <ostream>

namespace dice { namespace hfe { namespace io {

class IStream {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual unsigned int write(const char* data, unsigned int size);
};

} } }

namespace dice { namespace anim {

class Skeleton {
public:
    char _pad[0x80];
    ~Skeleton();
    const std::string& getPath() const {
        static std::string tmp;
        return tmp;
    }
};

} }

namespace dice { namespace hfe { namespace world {

class BundleTemplate {
public:
    bool makeScript(dice::hfe::io::IStream* stream);
};

class AnimSystem {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5();
    virtual const std::string& getName() const;
};

class AnimatedBundleTemplate : public BundleTemplate {
public:
    char _pad0[0x1f4];
    int m_ref;                        // 0x1f4
    dice::anim::Skeleton* m_skeleton; // 0x1f8
    AnimSystem* m_first;              // 0x200
    AnimSystem* m_second;             // 0x208
    bool makeScript(dice::hfe::io::IStream* stream);
};

bool AnimatedBundleTemplate::makeScript(dice::hfe::io::IStream* stream)
{
    if (!BundleTemplate::makeScript(stream))
        return false;
    std::ostringstream ss;
    if (m_skeleton) {
        ss << "ObjectTemplate.createSkeleton " << m_skeleton->getPath() << std::endl;
    }
    if (m_first && m_first->getName().size() != 0) {
        ss << "ObjectTemplate.animationSystem1P " << m_first->getName() << std::endl;
    }
    if (m_second && m_second->getName().size() != 0) {
        ss << "ObjectTemplate.animationSystem3P " << m_second->getName() << std::endl;
    }
    std::string str = ss.str();
    return stream->write(str.data(), (unsigned int)str.size()) == str.size();
}

} } }
