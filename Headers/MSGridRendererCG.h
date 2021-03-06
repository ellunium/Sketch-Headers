//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MSGridRenderer-Protocol.h"

@class NSString;

@interface MSGridRendererCG : NSObject <MSGridRenderer>
{
    struct CGColor *_lightColor;
    struct CGColor *_darkColor;
}

@property(readonly, nonatomic) struct CGColor *darkColor; // @synthesize darkColor=_darkColor;
@property(readonly, nonatomic) struct CGColor *lightColor; // @synthesize lightColor=_lightColor;
- (void)renderGrid:(id)arg1 in:(struct CGRect)arg2 origin:(struct CGPoint)arg3 context:(id)arg4;
- (void)dealloc;
- (id)initWithLightColor:(struct CGColor *)arg1 darkColor:(struct CGColor *)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

