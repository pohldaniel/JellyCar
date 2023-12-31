#ifndef _H_IKLEG_
#define _H_IKLEG_

#include "CCDSolver.h"
#include "FABRIKSolver.h"
#include "Skeleton.h"
#include "Track.h"

class IKLeg {
private:
protected:
	ScalarTrack mPinTrack;
	FABRIKSolver mSolver;
	Pose mIKPose;

	unsigned int mHipIndex;
	unsigned int mKneeIndex;
	unsigned int mAnkleIndex;
	unsigned int mToeIndex;

	// The ankle is not flat on the ground. We have to solve taking this into account!
	float mAnkleToGroundOffset;
public:
	IKLeg(Skeleton& skeleton, const std::string& hip, const std::string& knee, const std::string& ankle, const std::string& toe);
	IKLeg();
	IKLeg(const IKLeg&);
	IKLeg& operator=(const IKLeg&);
	~IKLeg();
	
	void SolveForLeg(const Transform& model, Pose& pose, const AnimVec3& ankleTargetPosition);
	
	Pose& GetAdjustedPose();
	ScalarTrack& GetTrack();

	void Draw(const AnimMat4& vp, const AnimVec3& legColor);

	unsigned int Hip();
	unsigned int Knee();
	unsigned int Ankle();
	unsigned int Toe();

	void SetAnkleOffset(float offset);
};

#endif