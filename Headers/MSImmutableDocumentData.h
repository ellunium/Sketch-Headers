//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/_MSImmutableDocumentData.h>

#import <SketchModel/MSDocumentData-Protocol.h>
#import <SketchModel/MSLayerContainment-Protocol.h>

@class MSImmutablePage, NSArray, NSData, NSDictionary, NSSet, NSString;

@interface MSImmutableDocumentData : _MSImmutableDocumentData <MSLayerContainment, MSDocumentData>
{
    NSDictionary *_metadata;
    NSData *_textPreviewData;
    NSArray *_selectedOverrides;
    NSDictionary *_symbolsIndexedByID;
}

+ (unsigned long long)traitsForPropertyName:(id)arg1;
+ (id)loadDocumentDataWithMetadata:(id)arg1 textPreviewData:(id)arg2 loadBlock:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) NSDictionary *symbolsIndexedByID; // @synthesize symbolsIndexedByID=_symbolsIndexedByID;
@property(readonly, nonatomic) NSArray *selectedOverrides; // @synthesize selectedOverrides=_selectedOverrides;
@property(retain, nonatomic) NSData *textPreviewData; // @synthesize textPreviewData=_textPreviewData;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
- (void).cxx_destruct;
- (id)pagesAndArtboardsMetadata;
- (id)allSymbols;
- (id)localSymbols;
- (id)allArtboards;
- (BOOL)wasSavedByTestVersion;
- (BOOL)wasSavedByOldVersion;
- (id)textLayersWithUnsafeFonts;
- (id)usedFontNames;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (void)decodePropertiesWithUnarchiver:(id)arg1;
@property(readonly, nonatomic) MSImmutablePage *currentPage;
- (id)artboardWithID:(id)arg1 page:(id *)arg2;
- (id)layerStyleWithID:(id)arg1;
- (id)textStyleWithID:(id)arg1;
- (id)allLayerStyles;
- (id)allTextStyles;
- (id)artboardWithID:(id)arg1;
- (id)symbolWithID:(id)arg1;
- (id)pageWithID:(id)arg1;
- (void)objectDidInit;
- (void)prepareSymbolDictionary;
- (id)defaultPagesArray;
- (void)performInitEmptyObject;
- (void)performInitWithMutableModelObject:(id)arg1;
- (void)migratePropertiesFromV113OrEarlierWithUnarchiver:(id)arg1;
- (id)newPageForMigratedSymbols:(id)arg1;
- (void)arrangeMigratedSymbolsInGrid:(id)arg1;
- (void)stripRedundantOverridesFromInstances:(id)arg1 ofSymbol:(id)arg2;
- (void)stripRedundantOverridesFromInstancesOfSymbols:(id)arg1;
- (id)migratedSymbolFromSymbol:(id)arg1 group:(id)arg2;
- (id)migratedSymbolsFromOldSymbols:(id)arg1;
- (void)migratePropertiesFromV91OrEarlierWithUnarchiver:(id)arg1;
- (void)regenerateObjectIDOnSymbolMaster:(id)arg1;
- (void)migratePropertiesFromV78OrEarlierWithUnarchiver:(id)arg1;
- (void)migratePropertiesFromV62OrEarlierWithUnarchiver:(id)arg1;
- (void)migratePropertiesFromV60OrEarlierWithUnarchiver:(id)arg1;
- (void)migratePropertiesFromV54OrEarlierWithUnarchiver:(id)arg1;
- (id)subObjectsForTreeDiff;
- (BOOL)enumerateLayersWithOptions:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)enumerateLayers:(CDUnknownBlockType)arg1;
- (id)lastLayer;
- (id)firstLayer;
- (unsigned long long)indexOfLayer:(id)arg1;
- (id)layerAtIndex:(unsigned long long)arg1;
- (BOOL)containsNoOrOneLayers;
- (BOOL)containsLayers;
- (BOOL)containsMultipleLayers;
- (BOOL)containsOneLayer;
- (unsigned long long)containedLayersCount;
- (id)containedLayers;
- (struct CGRect)overlayRectForAncestors:(id)arg1 document:(id)arg2;
- (struct CGRect)influenceRectForAncestors:(id)arg1 document:(id)arg2;
@property(readonly, nonatomic) BOOL containsUnavailableFontNames;
@property(readonly, nonatomic) NSSet *unavailableFontNames;
@property(readonly, nonatomic) NSSet *fontNames;
- (BOOL)symbolsChangedSincePreviousDocument:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSArray *pages;
@property(readonly) Class superclass;

@end

