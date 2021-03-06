//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSOverrideAction.h"

#import "MSDataMenuProviderDelegate-Protocol.h"

@class MSDataMenuProvider, NSArray, NSString;

@interface MSOverrideDataAction : MSOverrideAction <MSDataMenuProviderDelegate>
{
    MSDataMenuProvider *_dataProvider;
}

- (void).cxx_destruct;
- (void)applyDataFromSupplier:(id)arg1 toLayersWithIdentifier:(id)arg2;
@property(readonly, nonatomic) NSArray *dataIdentifiers;
- (void)dataMenuProvider:(id)arg1 willUpdateMenu:(id)arg2;
- (void)dataMenuProvider:(id)arg1 didChooseData:(id)arg2;
- (void)dataMenuProviderRefreshMasterData:(id)arg1;
- (void)dataMenuProviderRefreshData:(id)arg1;
- (id)dataMenuProviderDataIdentifier:(id)arg1;
- (void)dataMenuProviderRemoveDataRecord:(id)arg1;
- (BOOL)dataMenuProviderCanRefreshData:(id)arg1;
- (BOOL)dataMenuProviderCanApplyMasterDataToInstances:(id)arg1;
- (id)dataMenuProviderSelectedLayersWithAppliedData:(id)arg1;
- (unsigned long long)dataMenuProviderDataTypeForMenuBuilding:(id)arg1;
- (BOOL)dataMenuProviderIsOverrideMenu:(id)arg1;
- (BOOL)dataMenuProvider:(id)arg1 canChooseDataOfType:(unsigned long long)arg2;
- (id)label;
- (void)dataMenuRootAction:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (long long)validationStatus;
@property(readonly, nonatomic) unsigned long long dataType;
@property(readonly, nonatomic) MSDataMenuProvider *dataProvider; // @synthesize dataProvider=_dataProvider;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

