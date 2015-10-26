#import "NSObject.h"

@interface ZKCDTrailer64 : NSObject
{
    unsigned int _magicNumber;
    unsigned int _versionMadeBy;
    unsigned int _versionNeededToExtract;
    unsigned int _thisDiskNumber;
    unsigned int _diskNumberWithStartOfCentralDirectory;
    unsigned long long _sizeOfTrailer;
    unsigned long long _numberOfCentralDirectoryEntriesOnThisDisk;
    unsigned long long _totalNumberOfCentralDirectoryEntries;
    unsigned long long _sizeOfCentralDirectory;
    unsigned long long _offsetOfStartOfCentralDirectory;
}

+ (id)recordWithArchivePath:(id)arg1 atOffset:(unsigned long long)arg2;
+ (id)recordWithData:(id)arg1 atOffset:(unsigned long long)arg2;
@property unsigned long long offsetOfStartOfCentralDirectory; // @synthesize offsetOfStartOfCentralDirectory=_offsetOfStartOfCentralDirectory;
@property unsigned long long sizeOfCentralDirectory; // @synthesize sizeOfCentralDirectory=_sizeOfCentralDirectory;
@property unsigned long long totalNumberOfCentralDirectoryEntries; // @synthesize totalNumberOfCentralDirectoryEntries=_totalNumberOfCentralDirectoryEntries;
@property unsigned long long numberOfCentralDirectoryEntriesOnThisDisk; // @synthesize numberOfCentralDirectoryEntriesOnThisDisk=_numberOfCentralDirectoryEntriesOnThisDisk;
@property unsigned int diskNumberWithStartOfCentralDirectory; // @synthesize diskNumberWithStartOfCentralDirectory=_diskNumberWithStartOfCentralDirectory;
@property unsigned int thisDiskNumber; // @synthesize thisDiskNumber=_thisDiskNumber;
@property unsigned int versionNeededToExtract; // @synthesize versionNeededToExtract=_versionNeededToExtract;
@property unsigned int versionMadeBy; // @synthesize versionMadeBy=_versionMadeBy;
@property unsigned long long sizeOfTrailer; // @synthesize sizeOfTrailer=_sizeOfTrailer;
@property unsigned int magicNumber; // @synthesize magicNumber=_magicNumber;
- (id)description;
- (unsigned long long)length;
- (id)data;
- (id)init;

@end

