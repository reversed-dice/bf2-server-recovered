// FUNCTION: BF2 0x7335a0
namespace dice { namespace hfe {
namespace {

bool planeBoxOverlap(float* normal, float d, float* maxbox)
{
    float vmin[3], vmax[3];
    for (int q = 0; q < 3; ++q) {
        if (normal[q] > 0.0f) {
            vmin[q] = -maxbox[q];
            vmax[q] = maxbox[q];
        } else {
            vmin[q] = maxbox[q];
            vmax[q] = -maxbox[q];
        }
    }
    if (normal[0] * vmin[0] + normal[1] * vmin[1] + normal[2] * vmin[2] + d > 0.0f)
        return false;
    if (normal[0] * vmax[0] + normal[1] * vmax[1] + normal[2] * vmax[2] + d >= 0.0f)
        return true;
    return false;
    return true;
}

}
}}
