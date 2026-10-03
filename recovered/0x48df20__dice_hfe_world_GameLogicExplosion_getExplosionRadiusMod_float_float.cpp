// FUNCTION: BF2 0x48df20
namespace dice { namespace hfe { namespace world {

extern float* g_explosionHotSpot;

struct GameLogicExplosion {
    static float getExplosionRadiusMod(float radius, float dist);
};

float GameLogicExplosion::getExplosionRadiusMod(float radius, float dist) {
    float inner = *g_explosionHotSpot * radius;
    if (__builtin_expect(inner > dist, 1))
        return 1.0f;
    float r = 1.0f - (dist - inner) / (radius - inner);
    if (r < 0.0f) return 0.0f;
    return r > 1.0f ? 1.0f : r;
}
} } }
