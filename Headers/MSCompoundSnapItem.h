//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSSnapItem.h"

@class NSArray;

@interface MSCompoundSnapItem : MSSnapItem
{
    NSArray *_relativeRects;
    struct CGRect _unionRect;
}

@property(nonatomic) struct CGRect unionRect; // @synthesize unionRect=_unionRect;
@property(retain, nonatomic) NSArray *relativeRects; // @synthesize relativeRects=_relativeRects;
- (void).cxx_destruct;
- (void)setRectForSnapping:(struct CGRect)arg1;
- (struct CGRect)rectForSnapping;
- (struct CGRect)boundsRect;
- (void)concatAncestorsAndSelfTransforms;
- (double)rotation;
- (BOOL)shouldConstrainProportions;
- (id)candidateLayersForSnapping;
- (id)centerYAnchor;
- (id)centerXAnchor;
- (id)bottomAnchor;
- (id)topAnchor;
- (id)rightAnchor;
- (id)leftAnchor;
- (id)snapLines;
- (id)initWithLayers:(id)arg1;

@end

