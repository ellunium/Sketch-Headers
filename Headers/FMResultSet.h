#import "NSObject.h"

@class FMDatabase, FMStatement, NSMutableDictionary, NSString;

@interface FMResultSet : NSObject
{
    FMDatabase *_parentDB;
    FMStatement *_statement;
    NSString *_query;
    NSMutableDictionary *_columnNameToIndexMap;
}

+ (id)resultSetWithStatement:(id)arg1 usingParentDatabase:(id)arg2;
@property(retain) FMStatement *statement; // @synthesize statement=_statement;
@property(retain) NSString *query; // @synthesize query=_query;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectAtIndexedSubscript:(int)arg1;
- (void)setParentDB:(id)arg1;
- (id)columnNameForIndex:(int)arg1;
- (id)objectForColumnName:(id)arg1;
- (id)objectForColumnIndex:(int)arg1;
- (const char *)UTF8StringForColumnName:(id)arg1;
- (const char *)UTF8StringForColumnIndex:(int)arg1;
- (BOOL)columnIsNull:(id)arg1;
- (BOOL)columnIndexIsNull:(int)arg1;
- (id)dataNoCopyForColumnIndex:(int)arg1;
- (id)dataNoCopyForColumn:(id)arg1;
- (id)dataForColumnIndex:(int)arg1;
- (id)dataForColumn:(id)arg1;
- (id)dateForColumnIndex:(int)arg1;
- (id)dateForColumn:(id)arg1;
- (id)stringForColumn:(id)arg1;
- (id)stringForColumnIndex:(int)arg1;
- (double)doubleForColumnIndex:(int)arg1;
- (double)doubleForColumn:(id)arg1;
- (BOOL)boolForColumnIndex:(int)arg1;
- (BOOL)boolForColumn:(id)arg1;
- (unsigned long long)unsignedLongLongIntForColumnIndex:(int)arg1;
- (unsigned long long)unsignedLongLongIntForColumn:(id)arg1;
- (long long)longLongIntForColumnIndex:(int)arg1;
- (long long)longLongIntForColumn:(id)arg1;
- (long long)longForColumnIndex:(int)arg1;
- (long long)longForColumn:(id)arg1;
- (int)intForColumnIndex:(int)arg1;
- (int)intForColumn:(id)arg1;
- (int)columnIndexForName:(id)arg1;
- (BOOL)hasAnotherRow;
- (BOOL)nextWithError:(id *)arg1;
- (BOOL)next;
- (id)resultDictionary;
- (id)resultDict;
- (void)kvcMagic:(id)arg1;
@property(readonly) NSMutableDictionary *columnNameToIndexMap;
- (int)columnCount;
- (void)close;
- (void)dealloc;
- (void)finalize;

@end

