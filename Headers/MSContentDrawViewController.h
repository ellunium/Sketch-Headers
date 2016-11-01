//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "MSContentDrawViewDelegate.h"

@class MSContentDrawView, MSDocument, MSRulerView, NSLayoutConstraint, NSString, NSView;

@interface MSContentDrawViewController : NSViewController <MSContentDrawViewDelegate>
{
    MSContentDrawView *_contentDrawView;
    MSRulerView *_horizontalRuler;
    MSRulerView *_verticalRuler;
    NSView *_rulerCornerView;
    MSDocument *_document;
    NSLayoutConstraint *_rulerWidthConstraint;
    NSLayoutConstraint *_rulerHeightConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *rulerHeightConstraint; // @synthesize rulerHeightConstraint=_rulerHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *rulerWidthConstraint; // @synthesize rulerWidthConstraint=_rulerWidthConstraint;
@property(nonatomic) __weak MSDocument *document; // @synthesize document=_document;
@property(retain, nonatomic) NSView *rulerCornerView; // @synthesize rulerCornerView=_rulerCornerView;
@property(retain, nonatomic) MSRulerView *verticalRuler; // @synthesize verticalRuler=_verticalRuler;
@property(retain, nonatomic) MSRulerView *horizontalRuler; // @synthesize horizontalRuler=_horizontalRuler;
@property(retain, nonatomic) MSContentDrawView *contentDrawView; // @synthesize contentDrawView=_contentDrawView;
- (void).cxx_destruct;
- (void)prepareForDealloc;
- (void)toggleRulers;
- (void)changeToPage:(id)arg1;
- (void)currentArtboardDidChange;
@property(nonatomic) double zoomValue;
@property(nonatomic) struct CGPoint scrollOrigin;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

