// FUNCTION: BF2 0x6d3e20
namespace maya {

class AwPoint
{
public:
	double x;
	double y;
	double z;
	double w;
	AwPoint& cartesianize();
	AwPoint cartesianSub(AwPoint const& p) const;
};

AwPoint AwPoint::cartesianSub(AwPoint const& p) const
{
	AwPoint t = *this;
	AwPoint& a = t.cartesianize();
	double x = a.x;
	double y = a.y;
	double z = a.z;
	t = p;
	AwPoint& b = t.cartesianize();
	z -= b.z;
	y -= b.y;
	x -= b.x;
	AwPoint r;
	r.x = x;
	r.y = y;
	r.z = z;
	return r;
}

}
