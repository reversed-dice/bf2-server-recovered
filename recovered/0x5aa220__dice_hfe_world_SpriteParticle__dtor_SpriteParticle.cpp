// FUNCTION: BF2 0x5aa220
namespace dice { namespace hfe { namespace world {
  class Object {
  public:
    unsigned int m_unk_0x1;
    unsigned int m_unk_0x8;
    unsigned char m_unk_0xB;
    void* m_unk_0x18;
    int m_unk_0x21;
    long* m_unk_0x50;
    long* m_unk_0x58;
    long* m_unk_0x60;
    long* m_unk_0x70;
    int m_unk_0x108;
    float m_unk_0x13C;
    float m_unk_0x140;
    float m_unk_0x144;
    void* m_unk_0x158;
    unsigned int m_unk_0x160;
    unsigned int m_unk_0x1EC;
    unsigned char m_unk_0x208;
    char m_unk_0x209;
    char m_unk_0x20A;
    unsigned char m_unk_0x20B;
    unsigned char m_unk_0x20C;
    unsigned char m_unk_0x20F;
    unsigned char m_unk_0x211;
    unsigned char m_unk_0x212;
    ~Object();
  };
} } }

namespace dice { namespace hfe { namespace world {
  class SpriteParticle {
  public:
    unsigned int m_unk_0x44;
    unsigned int m_unk_0x220;
    unsigned char m_unk_0x224;
    ~SpriteParticle();
  };
  SpriteParticle::~SpriteParticle() {
    *reinterpret_cast<void**>(this) = reinterpret_cast<void*>(0xb64630);
    *reinterpret_cast<void**>(reinterpret_cast<char*>(this) + 0x100) = reinterpret_cast<void*>(0xb64940);
    reinterpret_cast<Object*>(this)->~Object();
    operator delete(this);
  }
} } }
// REVERSED_FUNCTION: dice::hfe::world::SpriteParticle::dtor_SpriteParticle (0x5aa220)