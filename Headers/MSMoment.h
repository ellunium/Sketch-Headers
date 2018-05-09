//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSImmutableDocumentData, NSSet, NSString;

@interface MSMoment : NSObject
{
    double _timestamp;
    NSString *_title;
    MSImmutableDocumentData *_document;
    unsigned long long _adaptability;
    NSSet *_selectedLayerIDs;
    NSString *_pageID;
}

@property(retain, nonatomic) NSString *pageID; // @synthesize pageID=_pageID;
@property(retain, nonatomic) NSSet *selectedLayerIDs; // @synthesize selectedLayerIDs=_selectedLayerIDs;
@property(nonatomic) unsigned long long adaptability; // @synthesize adaptability=_adaptability;
@property(retain, nonatomic) MSImmutableDocumentData *document; // @synthesize document=_document;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (id)init;
- (id)initWithTitle:(id)arg1 documentData:(id)arg2;

@end

