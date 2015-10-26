#import "NSBezierPath.h"

@interface NSBezierPath (FitCurvePrivate)
- (struct CGPoint)fb_computeCenterTangentAtIndex:(unsigned long long)arg1;
- (struct CGPoint)fb_computeRightTangentAtIndex:(unsigned long long)arg1;
- (struct CGPoint)fb_computeLeftTangentAtIndex:(unsigned long long)arg1;
- (id)fb_estimateParametersUsingChordLengthMethodInRange:(struct _NSRange)arg1;
- (id)fb_fitBezierInRange:(struct _NSRange)arg1 withParameters:(id)arg2 leftTangent:(struct CGPoint)arg3 rightTangent:(struct CGPoint)arg4;
- (id)fb_fitBezierUsingNaiveMethodInRange:(struct _NSRange)arg1 leftTangent:(struct CGPoint)arg2 rightTangent:(struct CGPoint)arg3;
- (double)fb_findMaximumErrorForBezier:(id)arg1 inRange:(struct _NSRange)arg2 parameters:(id)arg3 maximumIndex:(unsigned long long *)arg4;
- (id)fb_refineParameters:(id)arg1 forRange:(struct _NSRange)arg2 bezier:(id)arg3;
- (id)fb_fitCubicToRange:(struct _NSRange)arg1 leftTangent:(struct CGPoint)arg2 rightTangent:(struct CGPoint)arg3 errorThreshold:(double)arg4;
@end

