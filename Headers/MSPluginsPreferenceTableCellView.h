//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

@class MSPluginsPreferenceIconView, MSPluginsPreferencesUpdateButton, NSButton, NSLayoutConstraint, NSProgressIndicator, NSTextField, NSView;

@interface MSPluginsPreferenceTableCellView : NSTableCellView
{
    NSView *_updateAvailableContainer;
    NSView *_pluginIncompatibleContainer;
    MSPluginsPreferencesUpdateButton *_updateAvailableInfo;
    NSButton *_updatePlugin;
    NSProgressIndicator *_pluginUpdating;
    NSLayoutConstraint *_updateAvailableHeightConstraint;
    NSLayoutConstraint *_incompatiblePluginHeightConstraint;
    NSTextField *_descriptionField;
    MSPluginsPreferenceIconView *_iconView;
    NSLayoutConstraint *_tableCellWidthConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *tableCellWidthConstraint; // @synthesize tableCellWidthConstraint=_tableCellWidthConstraint;
@property(retain, nonatomic) MSPluginsPreferenceIconView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) NSTextField *descriptionField; // @synthesize descriptionField=_descriptionField;
@property(retain, nonatomic) NSLayoutConstraint *incompatiblePluginHeightConstraint; // @synthesize incompatiblePluginHeightConstraint=_incompatiblePluginHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *updateAvailableHeightConstraint; // @synthesize updateAvailableHeightConstraint=_updateAvailableHeightConstraint;
@property(retain, nonatomic) NSProgressIndicator *pluginUpdating; // @synthesize pluginUpdating=_pluginUpdating;
@property(retain, nonatomic) NSButton *updatePlugin; // @synthesize updatePlugin=_updatePlugin;
@property(retain, nonatomic) MSPluginsPreferencesUpdateButton *updateAvailableInfo; // @synthesize updateAvailableInfo=_updateAvailableInfo;
@property(retain, nonatomic) NSView *pluginIncompatibleContainer; // @synthesize pluginIncompatibleContainer=_pluginIncompatibleContainer;
@property(retain, nonatomic) NSView *updateAvailableContainer; // @synthesize updateAvailableContainer=_updateAvailableContainer;
- (void).cxx_destruct;
- (void)setObjectValue:(id)arg1;

@end

