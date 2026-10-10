// FUNCTION: BF2 0x72c8c0
namespace dice { namespace hfe {

struct Vec3 { float x; float y; float z; Vec3(Vec3 const&); };

class BoundingBox {
public:
    Vec3 getMin() const;
    Vec3 getMax() const;
};

class LocalBoundingBox {
public:
    void expand(Vec3 const&);
    void expand(BoundingBox const&);
};

void LocalBoundingBox::expand(BoundingBox const& b)
{
    expand(b.getMin());
    expand(b.getMax());
}

} }
