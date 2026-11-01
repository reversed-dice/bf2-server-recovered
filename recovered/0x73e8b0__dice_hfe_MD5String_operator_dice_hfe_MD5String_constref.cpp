// FUNCTION: BF2 0x73e8b0
namespace dice { namespace hfe {
class MD5String
{
public:
	bool operator<(MD5String const& rhs) const;
	bool operator>(MD5String const& rhs) const;
	bool operator==(MD5String const& rhs) const;
	int operator<=(MD5String const& rhs) const;
};
bool MD5String::operator<(MD5String const& rhs) const
{
	(void)rhs;
	return false;
}
bool MD5String::operator==(MD5String const& rhs) const
{
	(void)rhs;
	return false;
}
int MD5String::operator<=(MD5String const& rhs) const
{
	return (*this < rhs) || (*this == rhs);
}
} }
