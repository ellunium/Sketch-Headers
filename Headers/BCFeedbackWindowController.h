#import "NSWindowController.h"

@class NSAttributedString, NSButton, NSPopUpButton, NSString, NSTextView;

@interface BCFeedbackWindowController : NSWindowController
{
    NSString *_title;
    NSString *_emailAddress;
    NSAttributedString *_summary;
    NSTextView *_textView;
    NSButton *_includeHardwareDetailsCheckbox;
    NSPopUpButton *_feedbackType;
    NSButton *_sendButton;
    long long _currentSection;
}

+ (id)postURL;
+ (void)showFeedback;
@property(nonatomic) long long currentSection; // @synthesize currentSection=_currentSection;
@property(retain, nonatomic) NSButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) NSPopUpButton *feedbackType; // @synthesize feedbackType=_feedbackType;
@property(retain, nonatomic) NSButton *includeHardwareDetailsCheckbox; // @synthesize includeHardwareDetailsCheckbox=_includeHardwareDetailsCheckbox;
@property(retain, nonatomic) NSTextView *textView; // @synthesize textView=_textView;
@property(copy, nonatomic) NSAttributedString *summary; // @synthesize summary=_summary;
@property(copy, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)showWindow:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)displayAlertMessage:(id)arg1 withInformativeText:(id)arg2 andAlertStyle:(unsigned long long)arg3;
- (void)alertDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)closeFeedback;
- (void)postFeedback:(id)arg1;
- (void)system_profilerThread:(id)arg1;
- (void)submitAction:(id)arg1;
- (void)visitOnlineSupport:(id)arg1;
- (void)windowDidLoad;
- (id)init;

@end

