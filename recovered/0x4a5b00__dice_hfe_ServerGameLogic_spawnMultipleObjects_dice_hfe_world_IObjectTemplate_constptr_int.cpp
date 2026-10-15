// FUNCTION: BF2 0x4a5b00
// BF2_FLAGS: -fno-strict-aliasing
#include <vector>
#include <string>

namespace dice { namespace hfe {

struct Vec3 {
    Vec3() : x(0), y(0), z(0) {}
    Vec3(float x_, float y_, float z_) : x(x_), y(y_), z(z_) {}
    float x, y, z;
};

namespace world {

class IObject {
public:
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
};

class IObjectTemplate {
public:
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
    virtual const std::string& getName() const;
};

} // namespace world

class Game {
public:
    virtual void g0();
    virtual void g1();
    virtual void g2();
    virtual void g3();
    virtual void g4();
    virtual void g5();
    virtual void g6();
    virtual void g7();
    virtual void g8();
    virtual void g9();
    virtual void g10();
    virtual void g11();
    virtual void g12();
    virtual void g13();
    virtual void g14();
    virtual void g15();
    virtual void g16();
    virtual void g17();
    virtual void g18();
    virtual void g19();
    virtual void g20();
    virtual void g21();
    virtual void g22();
    virtual void g23();
    virtual void g24();
    virtual void g25();
    virtual void g26();
    virtual void g27();
    virtual void g28();
    virtual void g29();
    virtual world::IObject* spawnObject(world::IObjectTemplate const* t, Vec3 const& a, Vec3 const& b, int, int, int);
};

extern Game* game;

class ServerGameLogic {
public:
    std::vector<world::IObject*>* spawnMultipleObjects(world::IObjectTemplate const* t, int n);
};

std::vector<world::IObject*>* ServerGameLogic::spawnMultipleObjects(world::IObjectTemplate const* t, int n)
{
    static std::vector<world::IObject*> dummy;
    world::IObject* zero = 0;
    Vec3 va(0.f, 0.f, 0.f);
    Vec3 vb(0.f, 0.f, 0.f);
    if ((unsigned long)(int)n < dummy.size())
        dummy.erase(dummy.begin() + n, dummy.end());
    else
        dummy.insert(dummy.end(), (unsigned long)(int)n - dummy.size(), zero);
    for (int i = 0; i < n; ++i) {
        dummy[i] = game->spawnObject(t, Vec3(0.f,0.f,0.f), Vec3(0.f,0.f,0.f), 1, 0, 0);
    }
    return &dummy;
}

} } // namespace dice::hfe
