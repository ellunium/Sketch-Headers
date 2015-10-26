#import "NSObject.h"

@class NSDictionary, NSString, NSURL;

@interface MSPluginBundle : NSObject
{
    BOOL _legacyPlugin;
    BOOL _enabled;
    NSURL *_url;
    NSDictionary *_commands;
    NSString *_version;
    NSString *_name;
    NSString *_identifier;
    NSString *_pluginDescription;
    NSDictionary *_menuDescription;
    NSURL *_homepageURL;
    NSString *_author;
    NSString *_authorEmail;
    NSURL *_manifestURL;
    NSURL *_downloadURL;
    NSString *_compatibleVersion;
}

+ (id)commandsFromArray:(id)arg1 sketchPluginURL:(id)arg2 pluginBundle:(id)arg3;
+ (id)pluginBundleWithURL:(id)arg1;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic, getter=isLegacyPlugin) BOOL legacyPlugin; // @synthesize legacyPlugin=_legacyPlugin;
@property(readonly, copy, nonatomic) NSString *compatibleVersion; // @synthesize compatibleVersion=_compatibleVersion;
@property(readonly, copy, nonatomic) NSURL *downloadURL; // @synthesize downloadURL=_downloadURL;
@property(readonly, copy, nonatomic) NSURL *manifestURL; // @synthesize manifestURL=_manifestURL;
@property(readonly, copy, nonatomic) NSString *authorEmail; // @synthesize authorEmail=_authorEmail;
@property(readonly, copy, nonatomic) NSString *author; // @synthesize author=_author;
@property(readonly, copy, nonatomic) NSURL *homepageURL; // @synthesize homepageURL=_homepageURL;
@property(copy, nonatomic) NSDictionary *menuDescription; // @synthesize menuDescription=_menuDescription;
@property(readonly, copy, nonatomic) NSString *pluginDescription; // @synthesize pluginDescription=_pluginDescription;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(readonly, copy, nonatomic) NSDictionary *commands; // @synthesize commands=_commands;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)urlForResourceNamed:(id)arg1;
- (BOOL)writeToURL:(id)arg1;
- (id)metadata;
- (id)initWithName:(id)arg1 identifier:(id)arg2 commands:(id)arg3;
- (id)initLegacyPluginWithURL:(id)arg1;
- (id)initPluginBundleWithURL:(id)arg1;

@end

