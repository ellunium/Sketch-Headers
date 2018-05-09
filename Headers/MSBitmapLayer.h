//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSBitmapLayer.h"

#import "MSImageOwner.h"

@class MSImageData;

@interface MSBitmapLayer : _MSBitmapLayer <MSImageOwner>
{
}

+ (unsigned long long)traits;
+ (unsigned long long)scalingFactorForFilename:(id)arg1;
+ (double)bestScaleAccountingForPixelDensityOfImage:(id)arg1;
+ (id)bitmapLayerFromImage:(id)arg1 withSizeScaledDownByFactor:(double)arg2;
+ (id)bitmapLayerWithImageFromPath:(id)arg1;
+ (id)bitmapLayerWithImageFromPasteboard:(id)arg1;
- (void)correctInvalidGamma;
- (void)resizeToOriginalSize;
- (BOOL)isAtOriginalSize;
- (id)NSImage;
@property(readonly, nonatomic) BOOL canReduceImageSize;
- (void)setReducedImage:(id)arg1;
@property(readonly, nonatomic) struct CGSize targetSizeForReduction;
- (BOOL)canInsertIntoGroup:(id)arg1;
- (void)reduceImageSize;
- (void)replaceImageWithImage:(id)arg1;
- (id)handlerName;
- (void)copyPropertiesToObject:(id)arg1 options:(unsigned long long)arg2;
- (void)performInitEmptyObject;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (id)initWithFrame:(struct CGRect)arg1 image:(id)arg2;
- (Class)handlerClass;
- (id)inspectorViewControllerNames;
- (id)unselectedPreviewImage;
- (id)selectedPreviewImage;
- (void)applyOverride:(id)arg1 toPoint:(id)arg2;
- (id)setupWithLayerBuilderDictionary:(id)arg1;

// Remaining properties
@property(retain, nonatomic) MSImageData *image;

@end

