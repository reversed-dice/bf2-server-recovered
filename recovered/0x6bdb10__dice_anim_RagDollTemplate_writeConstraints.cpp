// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x6bdb10
#include <string>
#include <list>
#include <sstream>

namespace dice { namespace hfe {
namespace io {
enum FileMode {};
enum FileAccess {};
class IStream {
public:
    virtual void _v00(); virtual void _v08(); virtual void _v10(); virtual void _v18(); virtual void _v20();
    virtual unsigned int write(const char* data, unsigned int size);
};
class File {
public:
    File();
    ~File();
    bool open(const std::string& name, FileMode mode, FileAccess access, unsigned int flags);
    IStream* getStream();
    void close();
    void* m_stream;
};
}

namespace anim {

class RagDollTemplate {
public:
    struct Constraint {
        int m_x0;
        int m_x4;
        float m_x8;
    };
    char _pad0[0xa8];
    std::list<Constraint> m_a8;

    int findBoneIndex(int bone);
    void getBoneDistance(int a, int b);
    void writeConstraints();
};

void RagDollTemplate::writeConstraints()
{
    hfe::io::File f;
    f.open(std::string("ragDollConstraints.inc"), (hfe::io::FileMode)0, (hfe::io::FileAccess)2, 0);
    hfe::io::IStream* stream = f.getStream();
    std::ostringstream ss(std::ios_base::out);
    for (std::list<Constraint>::iterator it = m_a8.begin(); it != m_a8.end(); ++it) {
        int a = findBoneIndex(it->m_x0);
        int b = findBoneIndex(it->m_x4);
        getBoneDistance(a, b);
        ss << "ragDoll.addConstraint " << a << " " << b << " " << it->m_x8 << std::endl;
    }
    std::string s = ss.str();
    stream->write(s.data(), s.length());
    f.close();
}

} } }
