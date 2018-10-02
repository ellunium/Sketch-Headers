//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSSmartGuideDrawing.h"

@class NSColor, NSString;

@interface MSMeasurementDrawing : MSSmartGuideDrawing
{
    unsigned long long _orientation;
    NSString *_labelText;
    NSColor *_color;
    struct CGAffineTransform _labelTransform;
}

+ (double)minFrameSizeAtZoomScale:(double)arg1;
@property(retain, nonatomic) NSColor *color; // @synthesize color=_color;
@property(nonatomic) struct CGAffineTransform labelTransform; // @synthesize labelTransform=_labelTransform;
@property(copy, nonatomic) NSString *labelText; // @synthesize labelText=_labelText;
@property(nonatomic) unsigned long long orientation; // @synthesize orientation=_orientation;
- (void).cxx_destruct;
- (struct CGRect)frameForMeasuringSizeOfRect:(struct CGRect)arg1 zoomScale:(double)arg2;
- (void)performLabelTransformInRect:(struct CGRect)arg1 block:(CDUnknownBlockType)arg2;
- (void)drawLabel:(id)arg1 withFrame:(struct CGRect)arg2 zoomScale:(double)arg3;
- (id)textAttributesForZoomScale:(double)arg1;
- (void)drawVerticalGuideWithFrame:(struct CGRect)arg1 zoomScale:(double)arg2;
- (void)drawHorizontalGuideWithFrame:(struct CGRect)arg1 zoomScale:(double)arg2;
- (void)drawWithFrame:(struct CGRect)arg1 zoomScale:(double)arg2;
- (id)init;

@end
