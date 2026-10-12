// FUNCTION: BF2 0x5c3980

namespace dice { namespace hfe { namespace world {

unsigned int IID_IPlayerControlObject;
unsigned int IID_IObject;
unsigned int IID_IProjectileObject;

class Obj
{
public:
	virtual void v0();
	virtual void v1();
	virtual void v2();
	virtual void* queryInterface(unsigned int iid);
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
	virtual Obj* v17();
	char m_pad[0x48];
	Obj* m_next;
};


Obj* getRootParent(Obj* gone);

class Base
{
public:
	virtual void p0();
	virtual void p1();
	virtual void p2();
	virtual void p3();
	virtual void p4();
	virtual void p5();
	virtual void p6();
	virtual void p7();
	virtual void p8();
	virtual void p9();
	virtual void p10();
	virtual void p11();
	virtual void p12();
	virtual void p13();
	virtual void p14();
	virtual void p15();
	virtual void p16();
	virtual void p17();
	virtual void p18();
	virtual void p19();
	virtual void p20();
	virtual void p21();
	virtual void p22();
	virtual void p23();
	virtual void p24();
	virtual void p25();
	virtual void p26();
	virtual void p27();
	virtual void p28();
	virtual void p29();
	virtual void p30();
	virtual void p31();
	virtual void p32();
	virtual void p33();
	virtual void p34();
	virtual void p35();
	virtual void p36();
	virtual void p37();
	virtual void p38();
	virtual void p39();
	virtual void p40();
	virtual void p41();
	virtual void p42();
	virtual void p43();
	virtual void p44();
	virtual void p45();
	virtual void p46();
	virtual void p47();
	virtual void p48();
	virtual void p49();
	virtual void p50();
	virtual void p51();
	virtual void p52();
	virtual bool p53();
};


class Holder
{
public:
	char m_pad[0x50];
	Obj* m_first;
};

class Comp
{
public:
	char m_pad[0x10];
	Base* m_0x10;
	Holder* m_0x18;
	bool getShowOnCamMode(int mode);
};

bool Comp::getShowOnCamMode(int)
{
	if (m_0x10->p53())
		return true;
	for (Obj* o = m_0x18->m_first; o != 0; o = o->m_next)
	{
		Obj* c = (Obj*)o->queryInterface(IID_IPlayerControlObject);
		if (c == 0)
			continue;
		Obj* x = c->v17();
		if (x == 0)
			return false;
		Obj* y = (Obj*)x->queryInterface(IID_IObject);
		Obj* root = getRootParent(y);
		if (root->queryInterface(IID_IProjectileObject) != 0)
			return true;
		return false;
	}
	return false;
}

} } }
