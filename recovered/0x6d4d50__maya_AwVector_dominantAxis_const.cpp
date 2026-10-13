// FUNCTION: BF2 0x6d4d50
#include <math.h>
namespace maya {

class AwVector {
public:
    double x;
    double y;
    double z;
    int dominantAxis() const;
};

int AwVector::dominantAxis() const {
    double ax = fabs(x);
    double ay = fabs(y);
    if (ax > ay) {
        if (ax > fabs(z)) return 0;
        return 2;
    }
    if (ay > fabs(z)) return 1;
    return 2;
}

}
