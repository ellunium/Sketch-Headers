//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSCloudPreferencesViewController.h"

@class MSCloudAvatarView, NSProgressIndicator, NSTextField, NSView;

@interface MSCloudPreferencesAccountViewController : MSCloudPreferencesViewController
{
    NSTextField *_introLabel;
    NSView *_userMetadataView;
    MSCloudAvatarView *_avatarView;
    NSTextField *_nameLabel;
    NSTextField *_emailLabel;
    NSProgressIndicator *_progressIndicator;
}

@property(retain, nonatomic) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain, nonatomic) NSTextField *emailLabel; // @synthesize emailLabel=_emailLabel;
@property(retain, nonatomic) NSTextField *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) MSCloudAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) NSView *userMetadataView; // @synthesize userMetadataView=_userMetadataView;
@property(retain, nonatomic) NSTextField *introLabel; // @synthesize introLabel=_introLabel;
- (void).cxx_destruct;
- (void)showAccountSettings:(id)arg1;
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 delegate:(id)arg3 didRecoverSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (void)logout:(id)arg1;
- (void)updateUserData;
- (void)updateUserLoading;
- (void)userDidChangeLoadingNotification:(id)arg1;
- (void)platformDidChangeNotification:(id)arg1;
- (void)userDidChangeNotification:(id)arg1;
- (void)applicationDidBecomeActiveNotification:(id)arg1;
- (void)dealloc;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)viewDidLoad;

@end

