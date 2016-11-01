//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSCloudAPI.h"

@interface MSCloudAuthAPI : MSCloudAPI
{
}

- (unsigned long long)validateResetToken:(id)arg1;
- (unsigned long long)validateToken:(id)arg1;
- (unsigned long long)validatePassword:(id)arg1;
- (unsigned long long)validateEmail:(id)arg1;
- (unsigned long long)validateName:(id)arg1;
- (BOOL)processUserVerification:(id)arg1;
- (void)processUserData:(id)arg1;
- (void)updateUserAccountWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)processUserAPIRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)verifyNewEmailWithToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateEmail:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadAccountProfileWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)deleteAccountWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)changeCurrentPassword:(id)arg1 toPassword:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)resetAccountWithToken:(id)arg1 password:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)recoverAccountWithEmail:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resendVerificationTokeWithAuth:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)verifyAccountWithToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)registerWithEmail:(id)arg1 password:(id)arg2 name:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)loginWithAccessToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loginWithEmail:(id)arg1 password:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)pingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)baseURL;

@end

