//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSSnappingTarget;

@interface MSSnapLine : NSObject
{
    MSSnappingTarget *_target;
    unsigned long long _snapTag;
    id _item;
    unsigned long long _attribute;
}

+ (struct CGPoint)snapPoint:(struct CGPoint)arg1 toLines:(id)arg2 onAxis:(unsigned long long)arg3 margin:(double)arg4;
+ (id)anchorWithLine:(struct _BCLine)arg1 inRect:(struct CGRect)arg2 item:(id)arg3 attribute:(unsigned long long)arg4 snapTag:(unsigned long long)arg5;
+ (id)linesForRect:(struct CGRect)arg1 item:(id)arg2;
+ (id)snapLineWithLine:(struct _BCLine)arg1;
@property(readonly, nonatomic) unsigned long long attribute; // @synthesize attribute=_attribute;
@property(readonly, nonatomic) __weak id item; // @synthesize item=_item;
@property(readonly, nonatomic) unsigned long long snapTag; // @synthesize snapTag=_snapTag;
@property(readonly, nonatomic) MSSnappingTarget *target; // @synthesize target=_target;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (struct CGRect)rectBySnappingToPosition:(double)arg1 oldFrame:(struct CGRect)arg2 mayResize:(BOOL)arg3;
@property(readonly, nonatomic) double position;
- (id)initWithTarget:(id)arg1 item:(id)arg2 attribute:(unsigned long long)arg3 snapTag:(unsigned long long)arg4;

@end

