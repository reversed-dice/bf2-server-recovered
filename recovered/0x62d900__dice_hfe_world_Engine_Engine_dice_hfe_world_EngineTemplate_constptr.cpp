// FUNCTION: BF2 0x62d900
namespace dice { namespace hfe { namespace world {

class EngineTemplate;

struct EngineIface0 { virtual void f0(); char _pad[0xf8]; };
struct EngineIface1 { virtual void f1(); char _pad[0x130]; };
struct EngineIface2 { virtual void f2(); };

class EngineBase : public EngineIface0, public EngineIface1, public EngineIface2 {
public:
    EngineBase(const EngineTemplate* t);
    char _pad240[0xf4];
};

class Engine : public EngineBase {
public:
    Engine(const EngineTemplate* t);
    float m_334;
    int m_338;
    int m_33c;
    float m_340;
};

Engine::Engine(const EngineTemplate* t)
    : EngineBase(t), m_334(0.0f), m_338(0), m_33c(0), m_340(0.0f)
{
}

} } }
