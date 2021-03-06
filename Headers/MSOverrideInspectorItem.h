//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSInspectorItem.h"

#import "MSDataMenuProviderDelegate-Protocol.h"

@class MSAvailableOverride, MSDataMenuProvider, MSDocument, MSDocumentData, MSOverrideRepresentation, NSLayoutConstraint, NSString, NSTrackingArea, NSView;

@interface MSOverrideInspectorItem : MSInspectorItem <MSDataMenuProviderDelegate>
{
    BOOL _displaysLabel;
    MSOverrideRepresentation *_overrideRepresentation;
    MSDataMenuProvider *_dataController;
    NSView *_contentView;
    NSLayoutConstraint *_indentationConstraint;
    NSTrackingArea *_trackingArea;
}

+ (BOOL)allOverridesInLayers:(id)arg1 match:(id)arg2;
+ (double)heightForOverride:(id)arg1 layers:(id)arg2 shouldShowLabel:(BOOL)arg3 indentationLevel:(unsigned long long)arg4;
@property(nonatomic) __weak NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property(retain, nonatomic) NSLayoutConstraint *indentationConstraint; // @synthesize indentationConstraint=_indentationConstraint;
@property(retain, nonatomic) NSView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MSDataMenuProvider *dataController; // @synthesize dataController=_dataController;
@property(nonatomic) BOOL displaysLabel; // @synthesize displaysLabel=_displaysLabel;
@property(readonly, nonatomic) MSOverrideRepresentation *overrideRepresentation; // @synthesize overrideRepresentation=_overrideRepresentation;
- (void).cxx_destruct;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)viewWillDisappear;
- (void)viewWillAppear;
- (void)updateCanvasHighlight;
- (void)highlightItemInCanvas:(id)arg1;
@property(readonly, nonatomic) BOOL hasSingleOverride;
- (void)applyOverrideToSelectedLayers:(id)arg1;
- (void)overrideValueAction:(id)arg1;
- (void)dataMenuProviderRefreshMasterData:(id)arg1;
- (void)dataMenuProviderRefreshData:(id)arg1;
- (id)dataMenuProviderDataIdentifier:(id)arg1;
- (void)dataMenuProviderRemoveDataRecord:(id)arg1;
- (BOOL)dataMenuProviderCanRefreshData:(id)arg1;
- (BOOL)dataMenuProviderCanApplyMasterDataToInstances:(id)arg1;
- (id)dataMenuProviderSelectedLayersWithAppliedData:(id)arg1;
- (void)dataMenuProvider:(id)arg1 didChooseData:(id)arg2;
- (unsigned long long)dataMenuProviderDataTypeForMenuBuilding:(id)arg1;
- (BOOL)dataMenuProviderIsOverrideMenu:(id)arg1;
- (BOOL)dataMenuProvider:(id)arg1 canChooseDataOfType:(unsigned long long)arg2;
- (id)labelView;
- (id)valueFromControlView:(id)arg1;
- (id)controlViewForEditingOverride;
- (void)build;
- (void)setIndentationLevel:(unsigned long long)arg1;
- (id)views;
@property(readonly, nonatomic) MSDocument *document;
@property(readonly, nonatomic) MSDocumentData *documentData;
@property(readonly, nonatomic) MSAvailableOverride *primaryOverride;
- (id)initWithPrimaryOverrideRepresentation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

