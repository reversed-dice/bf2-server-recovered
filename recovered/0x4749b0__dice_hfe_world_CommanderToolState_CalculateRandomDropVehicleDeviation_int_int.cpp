// FUNCTION: BF2 0x4749b0
extern "C" int rand();
extern "C" double cos(double);
extern "C" double sin(double);

namespace dice { namespace hfe {

struct Vec3 {
    float x, y, z;
    void set(float ax, float ay, float az) { x = ax; y = ay; z = az; }
    Vec3& operator=(const Vec3& o) { set(o.x, o.y, o.z); return *this; }
    Vec3() {}
    Vec3(const Vec3& o) { set(o.x, o.y, o.z); }
};

namespace world {

class CommanderToolState {
public:
    Vec3 CalculateRandomDropVehicleDeviation(int a, int b);
};

Vec3 CommanderToolState::CalculateRandomDropVehicleDeviation(int a, int b) {
    int r = rand();
    int span = a - b;
    double ang = (double)(rand() % 360) / 360.0 * 6.28;
    double rad = (double)(b + r % span);
    double cc = rad * cos(ang);
    double ss = rad * sin(ang);
    Vec3 v;
    v.set((float)(cc - ss), 0.0f, (float)(cc + ss));
    return v;
}

} }
}
