#import "NSObject.h"

@class NSString;

@interface ZKCDTrailer : NSObject
{
    unsigned int _magicNumber;
    unsigned int _thisDiskNumber;
    unsigned int _diskNumberWithStartOfCentralDirectory;
    unsigned int _numberOfCentralDirectoryEntriesOnThisDisk;
    unsigned int _totalNumberOfCentralDirectoryEntries;
    unsigned int _commentLength;
    unsigned long long _sizeOfCentralDirectory;
    unsigned long long _offsetOfStartOfCentralDirectory;
    NSString *_comment;
}

+ (id)recordWithArchivePath:(id)arg1;
+ (id)recordWithData:(id)arg1;
+ (id)recordWithData:(id)arg1 atOffset:(unsigned long long)arg2;
@property(copy) NSString *comment; // @synthesize comment=_comment;
@property unsigned int commentLength; // @synthesize commentLength=_commentLength;
@property unsigned long long offsetOfStartOfCentralDirectory; // @synthesize offsetOfStartOfCentralDirectory=_offsetOfStartOfCentralDirectory;
@property unsigned long long sizeOfCentralDirectory; // @synthesize sizeOfCentralDirectory=_sizeOfCentralDirectory;
@property unsigned int totalNumberOfCentralDirectoryEntries; // @synthesize totalNumberOfCentralDirectoryEntries=_totalNumberOfCentralDirectoryEntries;
@property unsigned int numberOfCentralDirectoryEntriesOnThisDisk; // @synthesize numberOfCentralDirectoryEntriesOnThisDisk=_numberOfCentralDirectoryEntriesOnThisDisk;
@property unsigned int diskNumberWithStartOfCentralDirectory; // @synthesize diskNumberWithStartOfCentralDirectory=_diskNumberWithStartOfCentralDirectory;
@property unsigned int thisDiskNumber; // @synthesize thisDiskNumber=_thisDiskNumber;
@property unsigned int magicNumber; // @synthesize magicNumber=_magicNumber;
- (void).cxx_destruct;
- (id)description;
- (BOOL)useZip64Extensions;
- (unsigned long long)length;
- (id)data;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)removeObservers;
- (id)init;

@end

