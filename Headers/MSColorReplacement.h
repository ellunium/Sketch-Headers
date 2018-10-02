//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MSReplaceColorActionDetails-Protocol.h"

@class MSColor, NSString;

@interface MSColorReplacement : NSObject <MSReplaceColorActionDetails>
{
    BOOL _ignoreAlphaWhenMatchingOriginalColor;
    BOOL _replaceAlphaOfOriginalColor;
    MSColor *_originalColor;
    MSColor *_replacementColor;
}

@property(readonly, nonatomic) MSColor *replacementColor; // @synthesize replacementColor=_replacementColor;
@property(readonly, nonatomic) BOOL replaceAlphaOfOriginalColor; // @synthesize replaceAlphaOfOriginalColor=_replaceAlphaOfOriginalColor;
@property(readonly, nonatomic) MSColor *originalColor; // @synthesize originalColor=_originalColor;
@property(readonly, nonatomic) BOOL ignoreAlphaWhenMatchingOriginalColor; // @synthesize ignoreAlphaWhenMatchingOriginalColor=_ignoreAlphaWhenMatchingOriginalColor;
- (void).cxx_destruct;
- (id)initWithOriginalColor:(id)arg1 replacementColor:(id)arg2 ignoreAlphaWhenMatchingOriginalColor:(BOOL)arg3 replaceAlphaOfOriginalColor:(BOOL)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
