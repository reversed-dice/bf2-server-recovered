// BF2_FLAGS: -fno-tree-dominator-opts
// FUNCTION: BF2 0x6d2690
namespace maya {

class AwMatrix {
public:
    double m[16];
    bool operator==(AwMatrix const& o) const;
};

bool AwMatrix::operator==(AwMatrix const& o) const
{
    if (m[0] != o.m[0]) return false;
    if (m[1] != o.m[1]) return false;
    if (m[2] != o.m[2]) return false;
    if (m[3] != o.m[3]) return false;
    if (m[4] != o.m[4]) return false;
    if (m[5] != o.m[5]) return false;
    if (m[6] != o.m[6]) return false;
    if (m[7] != o.m[7]) return false;
    if (m[8] != o.m[8]) return false;
    if (m[9] != o.m[9]) return false;
    if (m[10] != o.m[10]) return false;
    if (m[11] != o.m[11]) return false;
    if (m[12] != o.m[12]) return false;
    if (m[13] != o.m[13]) return false;
    if (m[14] != o.m[14]) return false;
    if (m[15] != o.m[15]) return false;
    return true;
}

}
