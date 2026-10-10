// FUNCTION: BF2 0x6f8a10
struct IResponsePhysics {
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void* queryInterface(unsigned int);
    virtual ~IResponsePhysics();
    virtual void setEnabled(bool);
    virtual bool getEnabled() const;
    virtual void reset();
    virtual unsigned int getClassID() const;
    virtual void checkObjectVsObject(void*, void*, float, bool);
    virtual void checkVsTerrain(float);
    virtual void impulseOn(void*, void*, void*, float, int, int);
    virtual void solveImpulse(void*);
    virtual void addFriction(void*);
    virtual void setObject(void*);
    virtual void* getObject() const;
    virtual void setCollisionChecked(unsigned int);
    virtual unsigned int getCollisionChecked() const;
    virtual void addToCollisionGroup(unsigned int);
    virtual void removeFromCollisionGroup(unsigned int);
    virtual unsigned int getCollisionGroups() const;
    virtual void setCollisionGroups(unsigned int);
    virtual void setDirtyNextToCheck();
    virtual void* getNextToCheck();
    virtual void* getSimpleNextToCheck();
    virtual void extraSlot();
    virtual void setNextToCheck(IResponsePhysics*);
    virtual void resetNextToCheck();
    virtual int hasCollisionLod() const;
    virtual void* getCollisionMesh() const;
    bool shouldCheckCollision();
    unsigned char pad18[0x18];
    bool m_enabled;
    unsigned char pad_21[7];
    void* m_holder;
};

bool IResponsePhysics::shouldCheckCollision()
{
    if (!m_enabled)
        return false;
    unsigned int f = *(unsigned int*)((char*)m_holder + 8);
    if ((f & 0x100) == 0)
        return false;
    if ((f & 1) != 0)
        return false;
    if (getCollisionMesh() != 0)
        return true;
    if (getClassID() == *(unsigned int*)0xc965a0)
        return true;
    if (getClassID() == *(unsigned int*)0xc9659c)
        return true;
    return false;
}
