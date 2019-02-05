//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BCFoundation/BCJSONEncoder.h>

@class NSFileHandle;

@interface BCJSONFileEncoder : BCJSONEncoder
{
    void *_buffer;
    unsigned long long _currentPos;
    NSFileHandle *_output;
}

@property(retain, nonatomic) NSFileHandle *output; // @synthesize output=_output;
- (void).cxx_destruct;
- (BOOL)encodeRootObject:(id)arg1 error:(id *)arg2;
- (void)finishWriting;
- (void)writeData:(const void *)arg1 length:(unsigned long long)arg2;
- (void)decalloc;
- (id)initWithFile:(id)arg1;

@end
