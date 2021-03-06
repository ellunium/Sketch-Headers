//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/_MSImmutableLayer.h>

#import <SketchModel/MSFlowContainmentCheck-Protocol.h>
#import <SketchModel/MSLayer-Protocol.h>
#import <SketchModel/MSLayerContainment-Protocol.h>
#import <SketchModel/MSLayerTraits-Protocol.h>

@class MSPath, NSAffineTransform, NSObject, NSSet, NSString;

@interface MSImmutableLayer : _MSImmutableLayer <MSFlowContainmentCheck, MSLayerContainment, MSLayer, MSLayerTraits>
{
    struct CGRect _calculatedInfluenceRectForBounds;
    // Error parsing type: A^v, name: _calculatedInfluenceRectForBoundsAtomicPointer
    NSObject *_calculatedInfluenceRectForBoundsAtomicity;
    MSPath *_pathInDocument;
    // Error parsing type: A^v, name: _pathInDocumentAtomicPointer
    NSObject *_calculatePathInDocumentAtomicity;
    unsigned long long _traits;
    struct CGRect _influenceRectForFrame;
}

+ (unsigned long long)traitsForPropertyName:(id)arg1;
+ (unsigned long long)traits;
+ (id)defaultName;
@property(readonly, nonatomic) struct CGRect influenceRectForFrame; // @synthesize influenceRectForFrame=_influenceRectForFrame;
@property(readonly, nonatomic) unsigned long long traits; // @synthesize traits=_traits;
- (void).cxx_destruct;
- (id)parentShapeInAncestors:(id)arg1;
- (BOOL)canSkipAdvancedClipForStrokes;
@property(readonly, nonatomic) struct BCEdgePaddings influenceRectEdgePaddingsThatDoNotCascade;
@property(readonly, nonatomic) struct BCEdgePaddings influenceRectEdgePaddingsThatCascadeToContainedLayers;
- (struct CGRect)calculateInfluenceRectForBoundsInDocument:(id)arg1 visitedSymbols:(id)arg2;
@property(readonly, nonatomic) BOOL hasCalculatedInfluenceRectForBounds;
- (id)pathInFrameWithTransformsInDocument:(id)arg1 asSubpath:(BOOL)arg2;
- (id)pathInFrameInDocument:(id)arg1 asSubpath:(BOOL)arg2;
- (id)calculatePathInBoundsInDocument:(id)arg1 asSubpath:(BOOL)arg2;
- (id)pathInBoundsInDocument:(id)arg1 asSubpath:(BOOL)arg2;
- (struct CGRect)influenceRectForBoundsOrCalculateInBlock:(CDUnknownBlockType)arg1;
- (struct CGRect)influenceRectForBoundsInDocument:(id)arg1 visitedSymbols:(id)arg2;
- (struct CGRect)influenceRectForFrameInDocument:(id)arg1 visitedSymbols:(id)arg2;
- (struct CGRect)influenceRectForBoundsInDocument:(id)arg1;
- (struct CGRect)influenceRectForFrameInDocument:(id)arg1;
- (void)decodePropertiesWithUnarchiver:(id)arg1;
- (BOOL)isLine;
- (struct CGRect)rectByTransformingRect:(struct CGRect)arg1 andPaddingWithAncestors:(id)arg2;
- (struct CGRect)transformRectToParentCoordinates:(struct CGRect)arg1;
- (struct CGRect)absoluteOverlayInfluenceRectForAncestorGroups:(id)arg1;
- (struct CGRect)absoluteInfluenceRectForAncestorGroups:(id)arg1 document:(id)arg2;
- (id)bezierBoundsInAbsoluteCoordinatesWithAncestors:(id)arg1;
- (struct CGRect)absoluteRectForAncestorGroups:(id)arg1;
@property(readonly, nonatomic) struct CGRect frameForTransforms;
@property(readonly, nonatomic) NSAffineTransform *transform;
@property(readonly, nonatomic) struct CGAffineTransform CGTransformForFrame;
- (id)transformForRect:(struct CGRect)arg1;
- (id)childrenIncludingSelf:(BOOL)arg1;
- (id)children;
@property(readonly, nonatomic) struct CGPoint center;
@property(readonly, nonatomic) struct CGPoint origin;
- (BOOL)canBreakMaskChain;
- (BOOL)hasClippingMask;
@property(readonly, nonatomic) struct CGRect rect;
@property(readonly, nonatomic) struct CGRect bounds;
@property(readonly, nonatomic) BOOL hasEnabledBackgroundBlur;
@property(readonly, nonatomic) BOOL hasTransforms;
@property(readonly, nonatomic) BOOL isLayerExportable;
@property(readonly, nonatomic) BOOL shouldBeIncludedInParentPath;
- (id)layerWithID:(id)arg1;
- (id)keysDifferingFromObject:(id)arg1;
- (void)objectDidInit;
- (id)initWithMinimalSetup;
- (BOOL)containsFlowWithSymbolsFromDocument:(id)arg1;
- (id)firstFlowWithSymbolsFromDocument:(id)arg1 visited:(id)arg2;
- (id)firstFlowWithSymbolsFromDocument:(id)arg1;
- (id)descendantsToLayerWithID:(id)arg1;
- (id)lastLayer;
- (id)firstLayer;
- (unsigned long long)indexOfLayer:(id)arg1;
- (id)layerAtIndex:(unsigned long long)arg1;
- (BOOL)enumerateLayersWithOptions:(unsigned long long)arg1 classFilter:(Class)arg2 block:(CDUnknownBlockType)arg3;
- (BOOL)enumerateLayersWithOptions:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)enumerateLayers:(CDUnknownBlockType)arg1;
- (BOOL)containsMultipleLayers;
- (BOOL)containsOneLayer;
- (BOOL)containsLayers;
- (BOOL)containsNoOrOneLayers;
- (unsigned long long)containedLayersCount;
- (id)containedLayers;
- (void)enumerateImmutableWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2 parentCreatorBlock:(CDUnknownBlockType)arg3 inBlock:(CDUnknownBlockType)arg4;
- (struct CGRect)overlayRectForAncestors:(id)arg1 document:(id)arg2;
- (struct CGRect)influenceRectForAncestors:(id)arg1 document:(id)arg2;
- (id)enumeratorWithOptions:(unsigned long long)arg1;
@property(readonly, nonatomic) NSSet *unavailableFontNames;
@property(readonly, nonatomic) NSSet *fontNames;
- (BOOL)defaultOverrideVisibilityForPoint:(id)arg1 ancestors:(id)arg2;
- (id)overridePointsWithParent:(id)arg1 overrides:(id)arg2 document:(id)arg3;
- (id)defaultValueForOverridePoint:(id)arg1 relatedOverrides:(id)arg2 document:(id)arg3;
- (BOOL)canOverridePoint:(id)arg1 withAncestors:(id)arg2;
@property(readonly, nonatomic) NSString *dataSupplierIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isFlippedHorizontal;
@property(readonly, nonatomic) BOOL isFlippedVertical;
@property(readonly, nonatomic) BOOL isVisible;
@property(readonly, nonatomic) NSString *objectID;
@property(readonly, nonatomic) double rotation;
@property(readonly) Class superclass;

@end

