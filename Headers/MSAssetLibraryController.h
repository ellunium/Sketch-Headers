//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSAssetLibraryDelegate.h"

@class NSArray, NSHashTable, NSMutableArray, NSString;

@interface MSAssetLibraryController : NSObject <MSAssetLibraryDelegate>
{
    NSMutableArray *_assetLibraries;
    NSHashTable *_delegates;
}

@property(retain, nonatomic) NSHashTable *delegates; // @synthesize delegates=_delegates;
@property(copy, nonatomic) NSMutableArray *assetLibraries; // @synthesize assetLibraries=_assetLibraries;
- (void).cxx_destruct;
- (void)enumerateSymbolsInDocument:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)loadLibraries;
- (void)assetLibraryEnableStateChanged:(id)arg1;
- (void)assetLibraryChangedOnDisk:(id)arg1;
- (void)reloadLibrary:(id)arg1;
- (void)notifyLibraryChange:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)saveLibraries;
- (void)removeAssetLibrary:(id)arg1;
- (long long)addAssetLibraryAtURL:(id)arg1;
@property(readonly, nonatomic) NSArray *libraries; // @dynamic libraries;
@property(readonly, nonatomic) NSArray *availableLibraries;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
