// BF2_FLAGS: -mbranch-cost=0
// FUNCTION: BF2 0x5ffb10
namespace dice { namespace hfe { namespace world {

enum FireState {};

class FireComp {
public:
    void setFireState(FireState s);
};

class ThrownFireComp : public FireComp {
public:
    virtual void _v0(); virtual void _v1(); virtual void _v2(); virtual void _v3(); virtual void _v4(); virtual void _v5(); virtual void _v6(); virtual void _v7(); virtual void _v8(); virtual void _v9(); virtual void _v10(); virtual void _v11(); virtual void _v12(); virtual void _v13(); virtual void _v14(); virtual void _v15(); virtual void _v16(); virtual void _v17(); virtual void _v18(); virtual void _v19(); virtual void _v20(); virtual void _v21(); virtual void _v22(); virtual void _v23(); virtual void _v24(); virtual void _v25(); virtual void _v26(); virtual void _v27(); virtual void _v28(); virtual void _v29(); virtual void _v30(); virtual void _v31(); virtual void _v32(); virtual void _v33(); virtual void _v34(); virtual void _v35(); virtual void _v36(); virtual void _v37(); virtual void _v38(); virtual void _v39(); virtual void _v40(); virtual void _v41(); virtual void _v42(); virtual void _v43(); virtual void _v44(); virtual void _v45(); virtual void _v46(); virtual void _v47(); virtual void _v48(); virtual void _v49(); virtual void _v50(); virtual void _v51(); virtual void _v52(); virtual void _v53(); virtual void _v54(); virtual void _v55(); virtual void _v56(); virtual void _v57(); virtual void _v58(); virtual void _v59(); virtual void _v60(); virtual void _v61(); virtual void _v62(); virtual void _v63(); virtual void _v64(); virtual void _v65(); virtual void _v66(); virtual void _v67(); virtual void _v68(); virtual void _v69(); virtual void _v70(); virtual void _v71();
    virtual int getFireState();
    bool setThrowState(FireState s, bool force);
};

bool ThrownFireComp::setThrowState(FireState s, bool force)
{
    if (s == getFireState() + 1 || (getFireState() == 4 && s == 0) || (getFireState() == 0 && s == 2)) {
        if (force)
            return true;
        else {
            FireComp::setFireState(s);
            return true;
        }
    }
    return false;
}

} } }
