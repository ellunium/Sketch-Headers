#import "NSObject.h"

@class NSArray, NSDictionary, NSURL;

@interface MSPluginManager : NSObject
{
    NSDictionary *_plugins;
    NSURL *_pluginsFolderURL;
    NSURL *_metadataURL;
    NSDictionary *_metadata;
    NSArray *_folderMonitors;
}

+ (id)pluginsURL;
+ (void)initialisePlugins;
@property(retain, nonatomic) NSArray *folderMonitors; // @synthesize folderMonitors=_folderMonitors;
@property(copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) NSURL *metadataURL; // @synthesize metadataURL=_metadataURL;
@property(readonly, copy, nonatomic) NSURL *pluginsFolderURL; // @synthesize pluginsFolderURL=_pluginsFolderURL;
- (void).cxx_destruct;
- (BOOL)disablePlugin:(id)arg1;
- (BOOL)enablePlugin:(id)arg1;
- (BOOL)setMetadataValue:(id)arg1 forKey:(id)arg2 identifier:(id)arg3;
- (id)metadataValueForKey:(id)arg1 identifier:(id)arg2;
- (void)addPluginsToMenu:(id)arg1 selector:(SEL)arg2;
- (void)addCommands:(id)arg1 toMenu:(id)arg2 fromDescription:(id)arg3 selector:(SEL)arg4;
- (void)sortMenu:(id)arg1;
- (id)commandWithSpecifier:(id)arg1;
@property(copy, nonatomic) NSDictionary *plugins;
- (id)pluginsFromFolderAtURL:(id)arg1 visitedURLs:(id)arg2 relativeFolderPath:(id)arg3;
- (id)legacyPluginMenuDescriptionWithRelativePath:(id)arg1 commandIdentifier:(id)arg2;
- (id)relativePathByDeletingCommonPathComponentsWithFileURL:(id)arg1 fromURL:(id)arg2;
- (id)initWithPluginsFolderURL:(id)arg1 metadataURL:(id)arg2;

@end

