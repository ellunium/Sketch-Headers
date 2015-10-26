#import "NSControl.h"

@class BCAlphaColorPicker, BCColorPreview, BCHueColorPicker, BCMagnifierButton, BCSaturationBrightnessColorPicker, MSColor, NSTextField;

@interface BCHSBColorPicker : NSControl
{
    BCSaturationBrightnessColorPicker *sbPickerView;
    BCHueColorPicker *hPickerView;
    BCAlphaColorPicker *aPickerView;
    BCColorPreview *colorPreviewView;
    BCMagnifierButton *magnifierButton;
    NSTextField *redComponentTextField;
    NSTextField *greenComponentTextField;
    NSTextField *blueComponentTextField;
    NSTextField *hueComponentTextField;
    NSTextField *satComponentTextField;
    NSTextField *ligComponentTextField;
    NSTextField *alphaComponentTextField;
    NSTextField *hexValueTextField;
    long long ignoreColorActionsCounter;
    id _bc_target;
    SEL _bc_action;
}

@property SEL bc_action; // @synthesize bc_action=_bc_action;
@property(nonatomic) __weak id bc_target; // @synthesize bc_target=_bc_target;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setFrequentColors:(id)arg1;
- (void)frequentColorPicked:(id)arg1;
- (void)hexValueFieldChanged:(id)arg1;
- (void)rgbComponentFieldsChanged:(id)arg1;
- (void)hslComponentFieldsChanged:(id)arg1;
- (void)setColor:(id)arg1 ignoringFields:(id)arg2;
@property(copy, nonatomic) MSColor *color; // @dynamic color;
- (id)flexibleColor;
- (BOOL)sendAction:(SEL)arg1 to:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateColorPreviewView;
- (void)saturationBrightnessChanged:(id)arg1;
- (void)alphaChanged:(id)arg1;
- (void)hueChanged:(id)arg1;
- (void)magnifierAction:(id)arg1;
- (void)systemColorPanelDidChangeColor:(id)arg1;
- (void)awakeFromNib;
- (void)constructSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setAction:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (SEL)action;
- (id)target;

@end

