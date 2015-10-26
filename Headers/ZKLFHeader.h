#import "NSObject.h"

@class NSData, NSDate, NSString;

@interface ZKLFHeader : NSObject
{
    unsigned int _magicNumber;
    unsigned int _versionNeededToExtract;
    unsigned int _generalPurposeBitFlag;
    unsigned int _compressionMethod;
    unsigned int _crc;
    unsigned int _filenameLength;
    unsigned int _extraFieldLength;
    NSDate *_lastModDate;
    unsigned long long _compressedSize;
    unsigned long long _uncompressedSize;
    NSString *_filename;
    NSData *_extraField;
}

+ (id)recordWithArchivePath:(id)arg1 atOffset:(unsigned long long)arg2;
+ (id)recordWithData:(id)arg1 atOffset:(unsigned long long)arg2;
@property(retain) NSData *extraField; // @synthesize extraField=_extraField;
@property(copy) NSString *filename; // @synthesize filename=_filename;
@property unsigned int extraFieldLength; // @synthesize extraFieldLength=_extraFieldLength;
@property unsigned int filenameLength; // @synthesize filenameLength=_filenameLength;
@property unsigned long long uncompressedSize; // @synthesize uncompressedSize=_uncompressedSize;
@property unsigned long long compressedSize; // @synthesize compressedSize=_compressedSize;
@property unsigned int crc; // @synthesize crc=_crc;
@property(retain) NSDate *lastModDate; // @synthesize lastModDate=_lastModDate;
@property unsigned int compressionMethod; // @synthesize compressionMethod=_compressionMethod;
@property unsigned int generalPurposeBitFlag; // @synthesize generalPurposeBitFlag=_generalPurposeBitFlag;
@property unsigned int versionNeededToExtract; // @synthesize versionNeededToExtract=_versionNeededToExtract;
@property unsigned int magicNumber; // @synthesize magicNumber=_magicNumber;
- (void).cxx_destruct;
- (BOOL)isResourceFork;
- (id)description;
- (BOOL)useZip64Extensions;
- (unsigned long long)length;
- (id)zip64ExtraField;
- (void)parseZip64ExtraField;
- (id)data;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)finalize;
- (void)removeObservers;
- (id)init;

@end

