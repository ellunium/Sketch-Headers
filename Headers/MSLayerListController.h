//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSSidebarListController.h"

#import "BCOutlineViewDataSource.h"
#import "BCOutlineViewDelegate.h"

@class NSMutableSet, NSString;

@interface MSLayerListController : MSSidebarListController <BCOutlineViewDataSource, BCOutlineViewDelegate>
{
    NSMutableSet *_layersRequiringPreviewRefresh;
    long long _numberOfLayersRequiringPreviewRefresh;
}

@property long long numberOfLayersRequiringPreviewRefresh; // @synthesize numberOfLayersRequiringPreviewRefresh=_numberOfLayersRequiringPreviewRefresh;
@property(retain, nonatomic) NSMutableSet *layersRequiringPreviewRefresh; // @synthesize layersRequiringPreviewRefresh=_layersRequiringPreviewRefresh;
- (void).cxx_destruct;
- (void)dataController:(id)arg1 refreshPreviewsOnNodes:(id)arg2;
- (void)dataController:(id)arg1 hoverNodeDidChangeTo:(id)arg2;
- (id)dataController:(id)arg1 menuItemsForSelectedObjects:(id)arg2;
- (void)dataController:(id)arg1 handleBadgePressedOnNode:(id)arg2 withAltState:(BOOL)arg3;
- (void)dataController:(id)arg1 updateNode:(id)arg2 expandedState:(unsigned long long)arg3;
- (long long)mapExpandedStateToLayerListStatus:(unsigned long long)arg1;
- (BOOL)dataController:(id)arg1 isNodeExpandable:(id)arg2;
- (BOOL)dataController:(id)arg1 isNodeExpanded:(id)arg2;
- (void)dataController:(id)arg1 changeSelectionTo:(id)arg2;
- (BOOL)dataController:(id)arg1 isNodeSelected:(id)arg2;
- (id)layerForNode:(id)arg1;
- (id)dataController:(id)arg1 childrenOfNode:(id)arg2;
- (id)rootObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

