//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BCSingleton.h"

@class MSVersionedArchive;

@interface MSDefaultArchive : BCSingleton
{
    MSVersionedArchive *_archive;
}

@property(retain, nonatomic) MSVersionedArchive *archive; // @synthesize archive=_archive;
- (void).cxx_destruct;
@property(retain, nonatomic) id defaultObject;
- (id)newObject;
- (id)archivesNeedingMigration;
- (Class)defaultClass;
- (id)oldDefaultsName;
- (id)filename;

@end

